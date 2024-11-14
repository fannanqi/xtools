#include "maincontrol.h"
#include "ncbelow_table.h"
#include "taskFileMergeAssistant.h"
#include "ui_maincontrol.h"
#include <QCheckBox>
#include <QDateTime>
#include <QDebug>
#include <QDialog>
#include <QFile>
#include <QInputDialog>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>
#include <QMenu>
#include <QMessageBox>
#include <QVBoxLayout>
#include<QSizePolicy>
#include<QSplitter>
#include<QResizeEvent>
#include<QFrame>
#include<QGroupBox>
//#include "changeparameters.h"
#include "msg.h"

maincontrol::maincontrol(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::maincontrol)
{
    ui->setupUi(this);
    //allLayout=new QHBoxLayout(this);
    //连接界面布局
    connLayout=new QHBoxLayout();
    // ui->horizontalLayout->setAlignment()
    groupBox=new QGroupBox(ui->widget2);
    groupBox->setMinimumWidth(250);
    groupBox->setMaximumHeight(120);
    connLayout->addWidget(ui->label);
    connLayout->addWidget(ui->pushButton_5);

    connLayout->addWidget(ui->label_2);
    connLayout->addWidget(ui->dateTimeEdit);
    connLayout->addWidget(ui->label_3);
    connLayout->addWidget(ui->lineEdit);
    connLayout->addWidget(ui->pushButton_6);
    groupBox->setLayout(connLayout);
    //连接界面布局 end

    //连接界面和widget3一起布局
    conAndWid3Layout=new QVBoxLayout();
    conAndWid3Layout->addWidget(groupBox);
    ui->widget_3->setMinimumHeight(150);
    ui->widget_3->setMaximumHeight(290);
    conAndWid3Layout->addWidget(ui->widget_3);
    //连接界面和widget3一起布局 end

    //等待和右边的layout组合
    btnHLayout= new QHBoxLayout();
    btnHLayout->addWidget(ui->pushButton);
    btnHLayout->addWidget(ui->pushButton_2);
    btnHLayout->addWidget(ui->pushButton_3);
    btnHLayout->addWidget(ui->pushButton_4);

    rtabVLayout=new QVBoxLayout();
    rtabVLayout->addLayout(btnHLayout);
    QFrame *widget = new QFrame;
    widget->setFrameShape(QFrame::HLine);
    widget->setFrameShadow(QFrame::Sunken);
    widget->setLineWidth(3);
    rtabVLayout->addWidget(widget);
    rtabVLayout->addWidget(ui->rightTabWidget_2);
    rtabVLayout->addWidget(ui->pushButton_7);

    midHLayout=new QHBoxLayout();
    midHLayout->addLayout(conAndWid3Layout);
    QFrame *widget_2=new QFrame;
    widget_2->setFrameShape(QFrame::VLine);
    widget_2->setLineWidth(3);
    widget_2->setFrameShadow(QFrame::Sunken);
    midHLayout->addWidget(widget_2);
    midHLayout->addLayout(rtabVLayout);

    ui->widget2->setLayout(midHLayout);

    //主界面的布局
    rightLayout=new QVBoxLayout();
    //rightLayout->addWidget(ui->widget2);
    splitter= new QSplitter(Qt::Vertical);
    splitter->addWidget(ui->widget2);
    splitter->addWidget(ui->belowTabWidget);
    ui->belowTabWidget->setMinimumHeight(250);
    //ui->belowTabWidget->setMaximumHeight(850);
    QFrame *separator = new QFrame;
    separator->setFrameShape(QFrame::HLine);
    separator->setLineWidth(3);
    separator->setFrameShadow(QFrame::Sunken);
    rightLayout->addWidget(splitter);
    // rightLayout->addWidget(ui->belowTabWidget);
    ui->treeWidget->setMinimumWidth(180);
    ui->treeWidget->setMaximumWidth(200);
    centLayout=new QHBoxLayout(ui->centralwidget);
    centLayout->addWidget(ui->treeWidget);
    centLayout->addLayout(rightLayout);
    //主界面布局 end
    //allLayout->addLayout(centLayout);



    //添加中心页面linkparts
    linkparts = new Link11parts();
    ui->widget_3->setLayout(new QGridLayout());
    ui->widget_3->layout()->addWidget(linkparts);
    refreshTree();
    //下方tab页
    ui->belowTabWidget->setTabText(0, "消息统计");
    ui->belowTabWidget->setTabText(1, "消息记录");
    ncbelow_table* m_ncbt = new ncbelow_table();
    m_ncbt->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->belowtab->setLayout(new QVBoxLayout());
    ui->belowtab->layout()->addWidget(m_ncbt);
    //标签页颜色
    ui->belowTabWidget->setStyleSheet("QTabBar::tab{color:#FFFFFF;"); //font:10pt '新宋体'}");
    //标签tab自适应长度
    ui->belowTabWidget->tabBar()->setMinimumWidth(ui->belowTabWidget->width() / 4);
    //右上方tab页
    ui->rightTabWidget_2->setTabText(0, "实时输出");
    ui->rightTabWidget_2->setTabText(1, "接收消息");
    ui->rightTabWidget_2->setTabText(2, "发送消息");
    ui->rightTabWidget_2->setTabText(3, "端机状态");
    m_ncrt = new ncright_table();
    ui->righttab->setLayout(new QGridLayout());
    ui->righttab->layout()->addWidget(m_ncrt);
    //标签页颜色
    ui->rightTabWidget_2->setStyleSheet("QTabBar::tab{color:#FFFFFF;"); //font-size:6pt}");
    //标签tab自适应长度
    ui->rightTabWidget_2->tabBar()->setMinimumWidth(ui->rightTabWidget_2->width());
    isInitNcrt = true;
    connect(ui->treeWidget, &QTreeWidget::itemClicked, this, &maincontrol::onTreeWidgetItemClicked);
    connect(ui->treeWidget, &QTreeWidget::itemPressed, this, &maincontrol::onRightButtonClicked);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &maincontrol::saveParamData);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &maincontrol::onUdpconectClicked);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &maincontrol::onClearNcrTable);
}

maincontrol::~maincontrol()
{
    qDeleteAll(udpClietMap);
    delete m_ncrt;
    delete linkparts;
    delete ui;
}

QJsonArray maincontrol::getJsonArryByFile(QString filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading.";
        return QJsonArray();
        ;
    }
    QByteArray jsonData = file.readAll(); // 读取文件内容
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    // 检查文件是否包含有效的 JSON 数组
    if (!jsonDoc.isArray()) {
        qDebug() << "JSON file does not contain an array.";
        return QJsonArray();
        ;
    }
    QJsonArray mapArray = jsonDoc.array();
    return mapArray;
}

void maincontrol::refreshTree()
{
    QString baseFilePath = "/Users/apple/Downloads/c++/network";
    QJsonArray mapArray = getJsonArryByFile(baseFilePath + "/mapdata.json");
    QJsonArray netArray = getJsonArryByFile(baseFilePath + "/network.json");
    QMap<int, QList<QJsonObject>> netMap;
    for (const QJsonValue& value : netArray) {
        QJsonObject obj = value.toObject();
        int mId = obj["mapID"].toInt();
        netMap[mId].append(obj);
    }
    QJsonArray simArray = getJsonArryByFile(baseFilePath + "/simulator.json");
    QMap<int, QList<QJsonObject>> simMap;
    if (!simIDMap.empty()) {
        simIDMap.clear();
    }
    for (const QJsonValue& value : simArray) {
        QJsonObject obj = value.toObject();
        int nId = obj["netID"].toInt();
        simMap[nId].append(obj);
        int sID = obj["simID"].toInt();
        simIDMap[QString::number(sID)] = obj;
    }
    QJsonArray paramArray = getJsonArryByFile(baseFilePath + "/parameter.json");
    if (!paramMap.empty()) {
        paramMap.clear();
    }
    for (const QJsonValue& value : paramArray) {
        QJsonObject obj = value.toObject();
        int simID = obj["simID"].toInt();
        paramMap[QString::number(simID)] = obj;
    }
    ui->treeWidget->clear();
    // 初始化TreeWidget组件
    // 设置QTreeWidget的列数
    ui->treeWidget->setColumnCount(3);
    ui->treeWidget->header()->setSectionHidden(1, true); // 隐藏第1列
    ui->treeWidget->header()->setSectionHidden(2, true);
    // 设置QTreeWidget标题隐藏
    ui->treeWidget->setHeaderHidden(true);
    for (const QJsonValue& value : mapArray) {
        QJsonObject obj = value.toObject();
        //添加根目录
        //初始化就是treeWidget
        QTreeWidgetItem* root = new QTreeWidgetItem(ui->treeWidget);
        root->setText(0, obj["mapName"].toString());
        ui->treeWidget->addTopLevelItem(root);
        int mId = obj["mapID"].toInt();
        root->setText(1, QString::number(mId));

        // 添加子目录
        QList<QJsonObject> netList = netMap[mId];
        for (const QJsonObject& net : netList) {
            QTreeWidgetItem* netItem = new QTreeWidgetItem(root);
            netItem->setText(0, net["netName"].toString());
            int nId = net["netID"].toInt();
            netItem->setText(1, QString::number(nId));
            netItem->setText(2, net["waveform"].toString());
            // 添加三级目录
            QList<QJsonObject> simList = simMap[nId];
            int iconNo = 0; // 在此处定义并初始化 iconNo
            for (const QJsonObject& sim : simList) {
                QTreeWidgetItem* simItem = new QTreeWidgetItem(netItem); // netItem 作为父目录
                simItem->setText(0, sim["simName"].toString());
                int simID = sim["simID"].toInt();
                simItem->setText(1, QString::number(simID));
                simItem->setText(2, net["waveform"].toString());
                // 设置选择框
                if (!ui->treeWidget->currentItem() || (sID > 0 && simID == sID)) {
                    ui->treeWidget->setCurrentItem(simItem);
                }

                // 设置图标
                QString iconPath = ":/Resources/Images/computer.png"; // 默认图标路径
                if (iconNo == 0) {
                    iconPath = ":/Resources/Images/computer2.png";
                } else if (iconNo == 2) {
                    iconPath = ":/Resources/Images/computer3.png";
                }
                simItem->setIcon(0, QIcon(iconPath));
                iconNo++; // 增加 iconNo
                if (!udpstateMap[QString::number(simID)]) {
                    udpstateMap[QString::number(simID)] = false;
                }
                if (!udpClietMap[QString::number(simID)]) {
                    udpClietMap[QString::number(simID)] = new udpcliet();
                }
            }
        }
    }
    onTreeWidgetItemClicked(ui->treeWidget->currentItem());
    sID = 0;
    // 展开 QTreeWidget 的所有节点
    ui->treeWidget->expandAll();
    qDebug() << "refresh udpstateMap:" << udpstateMap;
}
void maincontrol::onTreeWidgetItemClicked(QTreeWidgetItem* item)
{
    if (item->childCount() == 0 && item->parent()->parent() != nullptr) {
        QString simID = item->text(1);
        QJsonObject paramObj = paramMap[simID];
        QString waveform = item->text(2);
        ui->label->setText("通信波形:" + waveform);
        ui->dateTimeEdit->setDateTime(
            QDateTime::fromString(paramObj["dateTimeEdit"].toString(), "yyyy-MM-dd hh:mm:ss"));
        ui->lineEdit->setText(paramObj["lineEdit"].toString());
        udpcliet* udpCliet = udpClietMap[simID];
        linkparts->initTabData(paramObj, waveform, udpCliet);
        if (isInitNcrt) {
            m_ncrt->initTableData(recvDatasMap[simID]);
        }
        if (udpstateMap[simID]) {
            ui->pushButton_5->setText("断开");
            linkparts->hideOrShowControl(true);
        } else {
            ui->pushButton_5->setText("连接");
            linkparts->hideOrShowControl(false);
        }
    }
}

void maincontrol::saveParamData()
{
    QString baseFilePath = "D:/c++/network";
    QJsonArray paramArray = getJsonArryByFile(baseFilePath + "/parameter.json");
    QString dateTimeEdit = ui->dateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString lineEdit = ui->lineEdit->text();
    QString waveform = ui->label->text().replace("通信波形:", "");
    QJsonArray savedArray = linkparts->saveChangeData(paramArray, dateTimeEdit, lineEdit, waveform);
    if (!paramMap.empty()) {
        paramMap.clear();
    }
    for (const QJsonValue& value : savedArray) {
        QJsonObject obj = value.toObject();
        int simID = obj["simID"].toInt();
        paramMap[QString::number(simID)] = obj;
    }
    saveJsonToFile(savedArray, baseFilePath + "/parameter.json");
}

void maincontrol::removeNetworkMap(QTreeWidgetItem* item)
{
    QMap<QString, QStringList> waveSimuMap;
    const QString baseFilePath = "D:/c++/network";
    // 读取 JSON 数据
    QJsonArray mapArray = getJsonArryByFile(baseFilePath + "/mapdata.json");
    QJsonArray netArray = getJsonArryByFile(baseFilePath + "/network.json");
    QJsonArray simArray = getJsonArryByFile(baseFilePath + "/simulator.json");
    QJsonArray paramArray = getJsonArryByFile(baseFilePath + "/parameter.json");
    // 检查读取的数组是否有效
    if (mapArray.isEmpty() || netArray.isEmpty() || simArray.isEmpty() || paramArray.isEmpty()) {
        qDebug() << "读取 JSON 数据失败";
        return;
    }
    // 确保 item 有效
    if (!item) {
        qDebug() << "无效的项";
        return;
    }
    // 输出当前项的文本内容
    qDebug() << "当前项的文本：" << item->text(0);
    qDebug() << "父项的文本：" << (item->parent() ? item->parent()->text(0) : QString());
    qDebug() << "祖父项的文本："
             << (item->parent() && item->parent()->parent() ? item->parent()->parent()->text(0)
                                                            : QString());
    // 假设 mapID, netID 和 simID 分别存储在 JSON 数据中并可以通过项的层级获取
    int mapID = -1;
    int netID = -1;
    int simID = -1;
    // 从 item 的层级中提取 ID
    if (item->parent() && item->parent()->parent()) {
        // 当前项是三级目录（模拟器），获取 simID、netID 和 mapID
        simID = item->text(1).toInt();                     // 当前项为 simID
        netID = item->parent()->text(1).toInt();           // 父项为 netID
        mapID = item->parent()->parent()->text(1).toInt(); // 祖父项为 mapID
    } else if (item->parent()) {
        // 当前项是二级目录（网络），获取 netID 和 mapID
        netID = item->text(1).toInt();           // 当前项为 netID
        mapID = item->parent()->text(1).toInt(); // 父项为 mapID
    } else {
        // 当前项是一级目录（地图），获取 mapID
        mapID = item->text(1).toInt(); // 当前项为 mapID
    }
    qDebug() << "mapID: " << mapID << ", netID: " << netID << ", simID: " << simID;
    // 根据 mapID、netID 和 simID，从 JSON 数组中找到对应的数据并进行移除
    if (simID != -1) {
        qDebug() << "simArray:" << simArray;
        // 移除模拟器数据
        for (int i = simArray.size() - 1; i >= 0; --i) {
            if (simArray[i].toObject()["simID"].toInt() == simID) {
                waveSimuMap[simArray[i].toObject()["waveform"].toString()].append(
                    QString::number(simID));
                simArray.removeAt(i);
            }
        }
        // 移除参数数据
        for (int i = paramArray.size() - 1; i >= 0; --i) {
            if (paramArray[i].toObject()["simID"].toInt() == simID) {
                paramArray.removeAt(i);
            }
        }
        udpstateMap.remove(QString::number(simID));
        udpClietMap.remove(QString::number(simID));
    } else if (netID != -1) {
        // 移除网络数据
        for (int i = netArray.size() - 1; i >= 0; --i) {
            if (netArray[i].toObject()["netID"].toInt() == netID) {
                netArray.removeAt(i);
            }
        }
        // 同时移除该网络下的所有模拟器和参数数据
        for (int i = simArray.size() - 1; i >= 0; --i) {
            if (simArray[i].toObject()["netID"].toInt() == netID) {
                QString sId = QString::number(simArray[i].toObject()["simID"].toInt());
                udpstateMap.remove(sId);
                udpClietMap.remove(sId);
                waveSimuMap[simArray[i].toObject()["waveform"].toString()].append(sId);
                simArray.removeAt(i);
            }
        }
        for (int i = paramArray.size() - 1; i >= 0; --i) {
            if (paramArray[i].toObject()["netID"].toInt() == netID) {
                paramArray.removeAt(i);
            }
        }
    } else if (mapID != -1) {
        // 移除地图数据
        for (int i = mapArray.size() - 1; i >= 0; --i) {
            if (mapArray[i].toObject()["mapID"].toInt() == mapID) {
                mapArray.removeAt(i);
            }
        }
        // 同时移除该地图下的所有网络、模拟器和参数数据
        for (int i = netArray.size() - 1; i >= 0; --i) {
            if (netArray[i].toObject()["mapID"].toInt() == mapID) {
                netArray.removeAt(i);
            }
        }
        for (int i = simArray.size() - 1; i >= 0; --i) {
            if (simArray[i].toObject()["mapID"].toInt() == mapID) {
                QString sId = QString::number(simArray[i].toObject()["simID"].toInt());
                udpstateMap.remove(sId);
                udpClietMap.remove(sId);
                waveSimuMap[simArray[i].toObject()["waveform"].toString()].append(sId);
                simArray.removeAt(i);
            }
        }
        for (int i = paramArray.size() - 1; i >= 0; --i) {
            if (paramArray[i].toObject()["mapID"].toInt() == mapID) {
                paramArray.removeAt(i);
            }
        }
    }
    // 将修改后的数据保存回文件
    saveJsonToFile(mapArray, baseFilePath + "/mapdata.json");
    saveJsonToFile(netArray, baseFilePath + "/network.json");
    saveJsonToFile(simArray, baseFilePath + "/simulator.json");
    saveJsonToFile(paramArray, baseFilePath + "/parameter.json");
    qDebug() << "udpstateMap:" << udpstateMap;
    for (auto& pair : waveSimuMap.toStdMap()) { //删除波道文件
        QString waveform = pair.first;
        for (QString sId : pair.second) {
            QString filePath = "D:/c++/txtFile/" + waveform + "/channel" + sId + ".txt";
            if (QFile::exists(filePath)) {
                QFile::remove(filePath);
            }
        }
    }
}

void maincontrol::repeatNetworkMap(int mapID, QString mapName)
{
    QString baseFilePath = "D:/c++/network";
    QJsonArray mapArray = getJsonArryByFile(baseFilePath + "/mapdata.json");
    QString newMapName = mapName + "_copy";
    int i = 1;
    bool isMapValid;
    do {
        isMapValid = false;
        for (const QJsonValue& value : mapArray) {
            QJsonObject obj = value.toObject();
            QString mName = obj["mapName"].toString();
            if (mName == newMapName) {
                newMapName = mapName + "_copy_" + QString::number(i);
                i++;
                isMapValid = true;
                break;
            }
        }
    } while (isMapValid);
    QJsonObject mapObject;
    int mapNId = getNewId(mapArray, "mapID");
    mapObject["mapName"] = newMapName;
    mapObject["mapID"] = mapNId;
    mapArray.append(mapObject);
    QJsonArray netArray = getJsonArryByFile(baseFilePath + "/network.json");
    int netNId = getNewId(netArray, "netID");
    QMap<int, int> netIDMap;
    for (const QJsonValue& value : netArray) {
        QJsonObject obj = value.toObject();
        int mID = obj["mapID"].toInt();
        if (mID == mapID) {
            QJsonObject netObject;
            netObject["netName"] = obj["netName"];
            netObject["waveform"] = obj["waveform"];
            netObject["mapID"] = mapNId;
            netObject["netID"] = netNId;
            netIDMap[obj["netID"].toInt()] = netNId;
            netArray.append(netObject);
            netNId = netNId + 1;
        }
    }
    QJsonArray simArray = getJsonArryByFile(baseFilePath + "/simulator.json");
    int simNId = getNewId(simArray, "simID");
    sID = simNId;
    QMap<int, int> simIDMap;
    for (const QJsonValue& value : simArray) {
        QJsonObject obj = value.toObject();
        int mID = obj["mapID"].toInt();
        if (mID == mapID) {
            QJsonObject simObject;
            simObject["simName"] = obj["simName"];
            simObject["waveform"] = obj["waveform"];
            simObject["mapID"] = mapNId;
            simObject["netID"] = netIDMap[obj["netID"].toInt()];
            simObject["simID"] = simNId;
            simIDMap[obj["simID"].toInt()] = simNId;
            simArray.append(simObject);
            simNId = simNId + 1;
        }
    }
    QJsonArray paramArray = getJsonArryByFile(baseFilePath + "/parameter.json");
    int paramNId = getNewId(paramArray, "parID");
    for (const QJsonValue& value : paramArray) {
        QJsonObject obj = value.toObject();
        int mID = obj["mapID"].toInt();
        if (mID == mapID) {
            QJsonObject paramObject = obj;
            paramObject["parID"] = paramNId;
            paramObject["mapID"] = mapNId;
            paramObject["netID"] = netIDMap[obj["netID"].toInt()];
            paramObject["simID"] = simIDMap[obj["simID"].toInt()];
            paramArray.append(paramObject);
            paramNId = paramNId + 1;
        }
    }
    saveJsonToFile(mapArray, baseFilePath + "/mapdata.json");
    saveJsonToFile(netArray, baseFilePath + "/network.json");
    saveJsonToFile(simArray, baseFilePath + "/simulator.json");
    saveJsonToFile(paramArray, baseFilePath + "/parameter.json");
}

void maincontrol::onRightButtonClicked(QTreeWidgetItem* item)
{
    if (qApp->mouseButtons() == Qt::RightButton) {
        QTreeWidget* tree = item->treeWidget();
        QMenu* menu = new QMenu(tree);

        QAction* deleteAction = new QAction("删除");
        menu->addAction(deleteAction);
        connect(deleteAction, &QAction::triggered, this, [=]() {
            // 从树形图中提取 ID
            int mId = item->text(0).toInt();   // mId
            int nId = item->text(1).toInt();   // nId
            int simID = item->text(2).toInt(); // simID

            // 在删除前，移除相关的网络映射数据
            removeNetworkMap(item);
            delete item; // 确保在数据删除后再删除 item
        });

        // 如果是顶层目录
        if (item->parent() == nullptr) {
            QMap<QString, QString> netMap;
            QMap<QString, QList<QJsonObject>> contentMap;
            QMap<QString, QString> waveMap;
            for (int j = 0; j < item->childCount(); ++j) {
                QTreeWidgetItem* childItem = item->child(j);
                netMap[childItem->text(1)] = childItem->text(0);
                waveMap[childItem->text(1)] = childItem->text(2);
                for (int k = 0; k < childItem->childCount(); ++k) {
                    QTreeWidgetItem* thirdItem = childItem->child(k);
                    QJsonObject simObj = paramMap[thirdItem->text(1)];
                    contentMap[childItem->text(1)].append(simObj);
                }
            }
            QAction* taskChartAction = new QAction("任务图表");
            menu->addAction(taskChartAction);
            connect(taskChartAction, &QAction::triggered, this, [=]() {
                auto* w = new taskFileMergeAssistant();
                w->setGraphicsView(item->text(0), waveMap, netMap, contentMap);
                w->setContentsMargins(0, 0, 0, 0);
                w->setAttribute(Qt::WA_DeleteOnClose, true);
                w->adjustSize();
                w->resize(1400, 800);
                w->show();
            });
            //新增网络
            QAction* addNetAction = new QAction("新增网络");
            menu->addAction(addNetAction);
            connect(addNetAction, &QAction::triggered, this, [=]() {
                bool next;
                QStringList waveTypes = QStringList()
                                        << "Link4A" << "Link11" << "Link16" << "TTNT"
                                        << "Sincgars" << "HaveQuick" << "EPLRS" << "常规模拟"
                                        << "常规数字" << "模拟J链" << "" << "模拟UV链"
                                        << "模拟UV链";
                QString waveText = QInputDialog::getItem(this,
                                                         tr("新增网络"),
                                                         tr("选择波形:"),
                                                         waveTypes,
                                                         0,
                                                         false,
                                                         &next);
                // 弹出输入对话框，输入新网络编号
                bool ok;
                QString netNumber = QInputDialog::getText(this,
                                                          "新增网络",
                                                          "输入网络编号:",
                                                          QLineEdit::Normal,
                                                          "",
                                                          &ok);
                if (ok && !netNumber.isEmpty()) {
                    QString netName = "网络" + netNumber; // 生成网络名称
                    // 检查名称是否重复
                    if (!checkNetNameExists(item, netName)) {
                        addNetwork(item, netName, waveText);
                    } else {
                        QMessageBox::warning(this, "警告", "该网络名称已存在，请使用其他名称。");
                    }
                }
            });
            QAction* copyAction = new QAction("复制");
            menu->addAction(copyAction);
            connect(copyAction, &QAction::triggered, this, [=] {
                repeatNetworkMap(item->text(1).toInt(), ui->treeWidget->currentItem()->text(0));
                refreshTree();
            });
        }
        // 如果是二级目录，添加“新增模拟器”选项
        if (item->parent() != nullptr && item->parent()->parent() == nullptr) {
            QStringList exitSimNames;
            for (int k = 0; k < item->childCount(); ++k) {
                QTreeWidgetItem* grandChildItem = item->child(k);
                exitSimNames << grandChildItem->text(0);
            }
            QAction* addSimAction = new QAction("新增模拟器");
            menu->addAction(addSimAction);
            connect(addSimAction, &QAction::triggered, this, [=]() {
                QStringList simTypes;
                for (int i = 1; i <= 8; i++) {
                    QString simName = "模拟器" + QString::number(i);
                    if (!exitSimNames.contains(simName)) {
                        simTypes << simName;
                    }
                }
                // 弹出输入对话框，输入新模拟器名称
                bool ok;
                QString simName = QInputDialog::getItem(this,
                                                        tr("新增模拟器"),
                                                        tr("选择模拟器:"),
                                                        simTypes,
                                                        0,
                                                        false,
                                                        &ok);
                if (ok && !simName.isEmpty()) {
                    // 检查名称是否重复
                    if (!checkSimNameExists(item, simName)) {
                        addSimulator(item, simName, item->text(2));
                    } else {
                        QMessageBox::warning(this, "警告", "该模拟器名称已存在，请使用其他名称。");
                    }
                }
            });
        }
        // 如果是叶子节点
        //        if (item->childCount() == 0) {
        //            QJsonObject simObj = paramMap[item->text(1)];
        //            QAction* modifyAction = new QAction("修改");
        //            menu->addAction(modifyAction);
        //            auto* w = new ChangeParameters();
        //            w->hide();
        //            connect(modifyAction, &QAction::triggered, this, [=]() {
        //                w->setContent(simObj);
        //                w->setContentsMargins(0, 0, 0, 0);
        //                w->setAttribute(Qt::WA_DeleteOnClose, true);
        //                w->adjustSize();
        //                w->resize(1400, 800);
        //                w->show();
        //            });
        //            QObject::connect(w, &ChangeParameters::switchUpToMainWindow, this, &maincontrol::refreshTree);
        //            sID = simObj["simID"].toInt();
        //        }

        // 右键菜单在鼠标点击的位置显示
        menu->exec(QCursor::pos());

        // 释放 menu 的内存
        delete menu;
    }
}

void maincontrol::saveJsonToFile(const QJsonArray& array, const QString& filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "无法打开文件进行写入：" << filePath;
        return;
    }

    QJsonDocument doc(array);
    file.write(doc.toJson());
    file.close();
}
// 检查网络名称是否存在于指定父项下
bool maincontrol::checkNetNameExists(QTreeWidgetItem* parentItem, const QString& netName)
{
    for (int i = 0; i < parentItem->childCount(); ++i) {
        QTreeWidgetItem* netItem = parentItem->child(i);
        if (netItem->text(0) == netName) {
            return true; // 找到重复的网络名称
        }
    }
    return false; // 未找到重复名称
}
// 检查模拟器名称是否存在于指定父项下
bool maincontrol::checkSimNameExists(QTreeWidgetItem* parentItem, const QString& simName)
{
    for (int i = 0; i < parentItem->childCount(); ++i) {
        QTreeWidgetItem* simItem = parentItem->child(i);
        if (simItem->text(0) == simName) {
            return true; // 找到重复的模拟器名称
        }
    }
    return false; // 未找到重复名称
}
void maincontrol::addNetwork(QTreeWidgetItem* parent,
                             const QString& netName,
                             const QString& waveform)
{
    QString baseFilePath = "D:/c++/network";
    QJsonArray netArray = getJsonArryByFile(baseFilePath + "/network.json");
    // 调用生成网络 ID 的函数
    int newNetID = getNewId(netArray, "netID"); //generateNewNetID();
    QTreeWidgetItem* newNetworkItem = new QTreeWidgetItem(parent);
    newNetworkItem->setText(0, netName);
    newNetworkItem->setText(1, QString::number(newNetID)); // 设置新网络的 ID
    newNetworkItem->setText(2, waveform);
    parent->addChild(newNetworkItem);
    QJsonObject netObject;
    netObject["netName"] = netName;
    netObject["waveform"] = waveform;
    netObject["mapID"] = parent->text(1).toInt();
    netObject["netID"] = newNetID;
    netArray.append(netObject);
    saveJsonToFile(netArray, baseFilePath + "/network.json");
}
void maincontrol::addSimulator(QTreeWidgetItem* netItem,
                               const QString& simName,
                               const QString& waveform)
{
    QString baseFilePath = "D:/c++/network";
    QJsonArray simArray = getJsonArryByFile(baseFilePath + "/simulator.json");
    // 调用生成模拟器 ID 的函数
    int newSimID = getNewId(simArray, "simID"); //generateNewSimID();
    QTreeWidgetItem* newSimulatorItem = new QTreeWidgetItem(netItem);
    newSimulatorItem->setText(0, simName);
    newSimulatorItem->setText(1, QString::number(newSimID)); // 设置新模拟器的 ID
    newSimulatorItem->setText(2, waveform);
    QString iconPath = ":/Resources/Images/computer.png";
    newSimulatorItem->setIcon(0, QIcon(iconPath));
    netItem->addChild(newSimulatorItem);
    QJsonObject simObject;
    simObject["simName"] = simName;
    simObject["waveform"] = waveform;
    simObject["mapID"] = netItem->parent()->text(1).toInt();
    simObject["netID"] = netItem->text(1).toInt();
    simObject["simID"] = newSimID;
    simArray.append(simObject);
    saveJsonToFile(simArray, baseFilePath + "/simulator.json");
    QJsonArray paramArray = getJsonArryByFile(baseFilePath + "/parameter.json");
    int newParamID = getNewId(paramArray, "parID");
    Link11parts* newparts = new Link11parts();
    QJsonObject paramObject;
    paramObject = newparts->getProParamJson(waveform, paramObject);
    paramObject["dateTimeEdit"] = "2024-10-01 00:00:00";
    paramObject["lineEdit"] = "0";
    paramObject["parID"] = newParamID;
    paramObject["mapID"] = simObject["mapID"];
    paramObject["netID"] = simObject["netID"];
    paramObject["simID"] = newSimID;
    paramArray.append(paramObject);
    saveJsonToFile(paramArray, baseFilePath + "/parameter.json");
    paramMap[QString::number(newSimID)] = paramObject;
    simIDMap[QString::number(newSimID)] = simObject;
}
int maincontrol::generateNewNetID()
{
    // 生成一个唯一的网络 ID，比如根据现有最大 ID 加 1
    // 这里简单地返回递增的 ID 示例
    static int lastNetID = 100;
    return ++lastNetID;
}

int maincontrol::generateNewSimID()
{
    // 生成一个唯一的模拟器 ID
    static int lastSimID = 1000;
    return ++lastSimID;
}
int maincontrol::getNewId(QJsonArray jsonArray, QString idN)
{
    int newId = 1;
    for (const QJsonValue& value : jsonArray) {
        if (value.isObject()) {
            int id = value.toObject().value(idN).toInt();
            if (id >= newId) {
                newId = id + 1; // 更新新序号
            }
        }
    }
    return newId;
}
void maincontrol::onUdpconectClicked()
{
    QString simIDNow = QString::number(linkparts->getNowSimID());
    bool udpstate = udpstateMap[simIDNow];
    udpcliet* udpCliet = udpClietMap[simIDNow];
    if (!udpstate) {
        connect(udpCliet, &udpcliet::sendMem, this, [this, simIDNow](const QByteArray& sendMem) {
            recvUDPData(sendMem, simIDNow);
        });
        QJsonObject simObj = simIDMap[simIDNow];
        QString srcIP = checkInitudp("127.0.0.1", simObj["srcIP"].toString());
        QString srcPort = checkInitudp("10086", simObj["srcPort"].toString());
        QString desIp = checkInitudp("127.0.0.1", simObj["desIp"].toString());
        QString desPort = checkInitudp("10087", simObj["desPort"].toString());
        udpstate = udpCliet->initudp(srcIP, srcPort, desIp, desPort);
        //        udpstate = udpCliet->initudp2(desIp,desPort);
        if (udpstate) {
            ui->pushButton_5->setText("断开");
            linkparts->hideOrShowControl(true);
        }
    } else {
        udpCliet->endudp();
        udpstate = false;
        ui->pushButton_5->setText("连接");
        linkparts->hideOrShowControl(false);
    }
    udpstateMap[simIDNow] = udpstate;
    qDebug() << "udpstateMap:" << udpstateMap;
}
void maincontrol::recvUDPData(QByteArray sendData, QString simID)
{
    QStringList dataList = {QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"),
                            sendData.toHex(' '),
                            sendData.toHex(' ')};
    QString simNowID = QString::number(linkparts->getNowSimID());
    if (simNowID == simID) {
        m_ncrt->addTableData(dataList);
    }
    QList<QStringList> recvDatas = recvDatasMap[simID];
    recvDatas.append(dataList);
    recvDatasMap[simID] = recvDatas;
}
void maincontrol::onClearNcrTable()
{
    //    ncright_table* ncr = qobject_cast<ncright_table*>(ui->righttab->layout()->itemAt(0)->widget());
    QString simNowID = QString::number(linkparts->getNowSimID());
    m_ncrt->clearTableData();
    recvDatasMap.remove(simNowID);
}
QString maincontrol::checkInitudp(QString pro, QString value)
{
    if (value != nullptr) {
        pro = value;
    }
    return pro;
}

void maincontrol::resizeEvent(QResizeEvent *event)
{
    QSize newSize=event->size();
    ui->centralwidget->resize(newSize);
}
