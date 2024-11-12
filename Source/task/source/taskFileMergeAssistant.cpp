/***************************************************************************************************
 * Copyright 2024 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#include "taskFileMergeAssistant.h"
#include "ui_taskFileMergeAssistant.h"

#include <QDataStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardPaths>
#include <QJsonObject>
#include <QDebug>

taskFileMergeAssistant::taskFileMergeAssistant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::taskFileMergeAssistant)
{
    ui->setupUi(this);
    // ui->listWidget->setAlternatingRowColors(true);
    ui->progressBar->hide();

    // CanttChartView *view = new CanttChartView(this);

//    ui->graphicsView->setAxisRange(QDateTime::fromString("2023-04-16 00:00:00", "yyyy-MM-dd hh:mm:ss"),
//                       QDateTime::fromString("2023-04-17 00:00:00", "yyyy-MM-dd hh:mm:ss"),
//                       QStringList() << "网络1" << "网络2" << "网络3");


//    ui->graphicsView->addPlanTimeBar("网络1",
//                                                  QDateTime::fromString("2023-04-16 03:00:00", "yyyy-MM-dd hh:mm:ss"),
//                                                  QDateTime::fromString("2023-04-16 03:30:00", "yyyy-MM-dd hh:mm:ss"));
//    ui->graphicsView->addPlanTimeBar("网络1",
//                                                   QDateTime::fromString("2023-04-16 09:00:00", "yyyy-MM-dd hh:mm:ss"),
//                                                   QDateTime::fromString("2023-04-16 10:00:00", "yyyy-MM-dd hh:mm:ss"));

//    ui->graphicsView->addPlanTimeBar("网络2",
//                         QDateTime::fromString("2023-04-16 05:00:00", "yyyy-MM-dd hh:mm:ss"),
//                         QDateTime::fromString("2023-04-16 06:00:00", "yyyy-MM-dd hh:mm:ss"));
//    ui->graphicsView->addPlanTimeBar("网络3",
//                         QDateTime::fromString("2023-04-16 07:00:00", "yyyy-MM-dd hh:mm:ss"),
//                         QDateTime::fromString("2023-04-16 08:22:00", "yyyy-MM-dd hh:mm:ss"));
//    m_desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    connect(ui->comboBox, QOverload<const QString &>::of(&QComboBox::activated), this, &taskFileMergeAssistant::onComboBoxChange);
}

taskFileMergeAssistant::~taskFileMergeAssistant()
{
    delete ui;
}

void taskFileMergeAssistant::setGraphicsView(QString mapName, QMap<QString,QString> waveMap, QMap<QString,QString> netMap, QMap<QString, QList<QJsonObject>> contentMap)
{
    ui->label_3->setText(mapName);
    ui->label_5->setText(QString::number(netMap.size()));

    QStringList netList;
    QList<QMap<QString, QList<QDateTime>>> planTimeBarList;
    QDateTime minDate;
    QDateTime maxDate;
    bool isFirstTime = true;
    for (auto &pair : netMap.toStdMap())
    {
        QString waveform = waveMap[pair.first];
        ui->comboBox->addItem(pair.second);
        netList << pair.second;
        netDataMap[pair.second] = contentMap[pair.first][0];
        netWaveMap[pair.second] = waveform;
        QList<QJsonObject> list = contentMap[pair.first];
        for (int i=0;i < list.size() ;i++ ) {
            QMap<QString, QList<QDateTime>> planTimeBarMap;
            QJsonObject obj = list[i];
            QString beginTime = obj["dateTimeEdit"].toString();
            QString useTime = obj["lineEdit"].toString();
            QDateTime beginTimeQ = QDateTime::fromString(beginTime, "yyyy-MM-dd hh:mm:ss");
            QDateTime endTimeQ = beginTimeQ.addSecs(useTime.toInt());
            QString endTime = endTimeQ.toString("yyyy-MM-dd HH:mm:ss");
            planTimeBarMap[pair.second].append(beginTimeQ);
            planTimeBarMap[pair.second].append(endTimeQ);
            if (isFirstTime) {
                minDate = beginTimeQ;
                maxDate = endTimeQ;
                isFirstTime = false;
                if(waveform == "Link4A") {
                    ui->label_8->setText(obj["lineEdit_4"].toString());
                    ui->label_10->setText("FSK");
                    ui->label_12->setText(obj["lineEdit_38"].toString());
                }
                ui->label_14->setText(obj["dateTimeEdit"].toString());
                ui->label_16->setText(obj["lineEdit"].toString() + "S");
            }
            if(beginTimeQ < minDate) {
                minDate = beginTimeQ;
            }
            if(maxDate < endTimeQ) {
                maxDate = endTimeQ;
            }
            planTimeBarList.append(planTimeBarMap);
        }
    }
    QDateTime bgDate = QDateTime(minDate.date(), QTime(0, 0, 0));
    QDateTime edDate = QDateTime(maxDate.date().addDays(1), QTime(0, 0, 0));
    ui->graphicsView->setAxisRange(bgDate,edDate,netList);
    for (int i=0;i < planTimeBarList.size() ;i++ ) {
        QMap<QString, QList<QDateTime>> planTimeBarMap = planTimeBarList[i];
        for (auto &plan : planTimeBarMap.toStdMap())
        {
            QList<QDateTime> tList = plan.second;
            ui->graphicsView->addPlanTimeBar(plan.first,tList[0],tList[1]);
        }
    }
    m_desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
}

void taskFileMergeAssistant::onComboBoxChange(QString text)
{
    QJsonObject obj = netDataMap[text];
    QString waveform = netWaveMap[text];
    if(waveform == "Link4A") {
        ui->label_8->setText(obj["lineEdit_4"].toString());
        ui->label_10->setText("FSK");
        ui->label_12->setText(obj["lineEdit_38"].toString());
    }
    ui->label_14->setText(obj["dateTimeEdit"].toString());
    ui->label_16->setText(obj["lineEdit"].toString() + "S");
}
