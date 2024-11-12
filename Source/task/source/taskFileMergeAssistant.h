/***************************************************************************************************
 * Copyright 2024 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#pragma once

#include <QWidget>
#include <QMap>

namespace Ui {
class taskFileMergeAssistant;
}

class taskFileMergeAssistant : public QWidget
{
    Q_OBJECT

public:
    Q_INVOKABLE explicit taskFileMergeAssistant(QWidget *parent = nullptr);
    ~taskFileMergeAssistant();

private:
    Ui::taskFileMergeAssistant *ui;
    QString m_desktopPath;
    QMap<QString,QJsonObject> netDataMap;
    QMap<QString,QString> netWaveMap;
public:
    void setGraphicsView(QString mapName, QMap<QString,QString> waveMap, QMap<QString,QString> netMap, QMap<QString, QList<QJsonObject>> contentMap);
public slots:
    void onComboBoxChange(QString text);
};
