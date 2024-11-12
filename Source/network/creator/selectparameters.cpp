#include "selectparameters.h"
#include "ui_selectparameters.h"
#include "maincontrol.h"
#include "link11parts.h"
#include "widget.h"

#include <QButtonGroup>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

SelectParameters::SelectParameters(QWidget *parent, Widget *widget) :
    QMainWindow(parent),
    m_widget(widget),
    ui(new Ui::SelectParameters)
{
    ui->setupUi(this);
    // 确保选择控件已创建并有效
    connect(ui->stackedWidget, &QStackedWidget::currentChanged, this, [this](int index) {
        // 获取新的选项卡对应的 comboBox 值
        emit requestComboBoxValuesUpdate();
    });

    connect(ui->treeWidget, &QTreeWidget::itemClicked, this, &SelectParameters::onTreeWidgetItemClicked);

    // 初始化树控件
    treeWidget = ui->treeWidget;
    treeWidget->setAttribute(Qt::WA_MacShowFocusRect, false);
}

SelectParameters::~SelectParameters()
{
    qDeleteAll(link11Parts);
    ui->treeWidget->clear();
    delete ui;
}

void SelectParameters::receiveInputDataAndCheckedItems(const QString &inputData, int networkCount, const QMap<QString, QStringList> &checkedItemsMap)
{
    this->inputData = inputData;
    this->networkCount = networkCount;
    this->checkedItemsMap = checkedItemsMap;
    populateTree(inputData, networkCount, checkedItemsMap);
//    qDebug() << "Received inputData:" << inputData << "networkCount:" << networkCount;
//    qDebug() << "Checked Items Map:" << checkedItemsMap;
}

void SelectParameters::updateLabelForNetwork(const QString &networkName, const QString &comboBoxValue) {
    qDebug() << "Update Label for" << networkName << "to:" << comboBoxValue;

    // 更新 labelMap 和 networkComboBoxValues
    if (labelMap.contains(networkName)) {
        labelMap[networkName]->setText(comboBoxValue);
        qDebug() << "Label updated for" << networkName << "to:" << comboBoxValue;
    } else {
        qDebug() << "未找到网络，添加新标签" << networkName;
        QLabel *newLabel = new QLabel(comboBoxValue, this);
        newLabel->hide();
        labelMap[networkName] = newLabel; // 添加到 labelMap
        // 需要将 newLabel 添加到布局中
    }

    // 保存当前网络的 comboBox 值
    networkComboBoxValues[networkName] = QStringList() << comboBoxValue; // 假设是单个值，若为多个值可适当调整
}

void SelectParameters::updateLabelForTreeItem(const QString &networkName, const QStringList &selectedValues) {
    // 保存当前网络的 comboBox 值
    networkComboBoxValues[networkName] = selectedValues;
    qDebug() << "接收到的 comboBox 值，网络:" << networkName << "值:" << selectedValues;
    // 获取并更新当前网络的 label3 文本
    QString value = selectedValues.join(", ");
    ui->label3->setText(value);
    qDebug() << "Label3 updated for" << networkName << "to:" << value;
}


void SelectParameters::refreshLabelForNetwork(const QString &networkName) {
    if (!labelMap.contains(networkName)) {
        qDebug() << "未找到网络：" << networkName;
        qDebug() << "labelMap 当前键列表：" << labelMap.keys();
        return;
    }

    // 更新 label3 的内容为当前网络名称的 label 文本
    QString labelText = labelMap[networkName]->text();
    ui->label3->setText(labelText);
//    qDebug() << "Label3 更新为：" << labelText;
}

void SelectParameters::onTreeWidgetItemClicked(QTreeWidgetItem *item, int column) {
    QString itemText = item->text(0);
    QTreeWidgetItem *networkItem = item->parent();

    if (!networkItem) {
        qDebug() << "未找到二级目录（网络名称）";
        return;
    }

    QString networkName = networkItem->text(0);
//    qDebug() << "Detected network name:" << networkName;
    refreshLabelForNetwork(networkName); // 更新 label3
    QString uniqueIdentifier = networkName + "_" + itemText;
    if (link11PartsMap.contains(uniqueIdentifier)) {
        Link11parts *link11Parts = link11PartsMap[uniqueIdentifier];
        link11Parts->initNewTab(labelMap[networkName]->text());
        link11Parts->hideOrShowControl(false);
        ui->stackedWidget->setCurrentWidget(link11Parts);
    }
}

void SelectParameters::populateTree(const QString &inputData, int networkCount, const QMap<QString, QStringList> &checkedItemsMap)
{
    ui->treeWidget->clear();
    qDeleteAll(link11Parts);
    link11Parts.clear();
    link11PartsMap.clear();  // 清空映射关系
    QTreeWidgetItem *parentItem = new QTreeWidgetItem(ui->treeWidget);
    parentItem->setText(0, inputData);
    for (int i = 0; i < networkCount; ++i) {
        QString networkName = "网络" + QString::number(i + 1);
        QTreeWidgetItem *networkItem = new QTreeWidgetItem(parentItem);
        networkItem->setText(0, networkName);

        if (checkedItemsMap.contains(networkName)) {
            QStringList items = checkedItemsMap[networkName];

            // 根据名称中的数字进行排序
            std::sort(items.begin(), items.end(), [](const QString &a, const QString &b) {
                QRegularExpression regex("\\d+");
                int aNumber = regex.match(a).captured(0).toInt();
                int bNumber = regex.match(b).captured(0).toInt();
                return aNumber < bNumber;
            });

            for (const QString &item : items) {
                // 生成唯一标识符
                QString uniqueIdentifier = networkName + "_" + item;
                Link11parts *newLink11Parts = new Link11parts(this);
                link11Parts.append(newLink11Parts);
                ui->stackedWidget->addWidget(newLink11Parts);
                QTreeWidgetItem *subItem = new QTreeWidgetItem(networkItem);
                subItem->setText(0, item);

                // 添加到映射关系中
                link11PartsMap[uniqueIdentifier] = newLink11Parts;
                if (!ui->treeWidget->currentItem()) {
                    ui->treeWidget->setCurrentItem(subItem);
                }
            }
        }
    }
    onTreeWidgetItemClicked(ui->treeWidget->currentItem(), 0);
    ui->treeWidget->expandAll();
}

void SelectParameters::setCurrentSubItem(const QString &minSubItem) {
    if (link11PartsMap.contains(minSubItem)) {
        Link11parts *enterParam = link11PartsMap[minSubItem];
        ui->stackedWidget->setCurrentWidget(enterParam);

        // 选择最靠前的三级目录项
        QTreeWidgetItem *firstItem = ui->treeWidget->topLevelItem(0);
        if (firstItem) {
            ui->treeWidget->setCurrentItem(firstItem); // 选中最上面的一级目录
            ui->treeWidget->expandAll(); // 展开所有目录以确保可见
        }
    }
}

QStringList SelectParameters::getDataForItem(const QString &itemName) const {
    // 假设 checkedItemsMap 中存储了每个项目的相关数据
    if (checkedItemsMap.contains(itemName)) {
        return checkedItemsMap[itemName]; // 返回相应的 QStringList
    }

    // 如果没有找到，返回默认数据
    return QStringList() << "默认数据1" << "默认数据2" << "默认数据3";
}

void SelectParameters::on_SaveButton_clicked()
{
    QString baseFilePath = "D:/c++/network";
    QJsonArray mapArray = getJsonArryByFile(baseFilePath + "/mapdata.json");
    int mapNId = getNewId(mapArray, "mapID");
    QJsonArray netArray = getJsonArryByFile(baseFilePath + "/network.json");
    int netNId = getNewId(netArray, "netID");
    QJsonArray simArray = getJsonArryByFile(baseFilePath + "/simulator.json");
    int simNId = getNewId(simArray, "simID");
    QJsonArray paramArray = getJsonArryByFile(baseFilePath + "/parameter.json");
    int paramNId = getNewId(paramArray, "parID");
    // Step 1: 获取 mapName 并生成 mapID
    QTreeWidgetItem *topItem = treeWidget->topLevelItem(0);
    QString mapName = topItem->text(0); // 获取树形图一级目录作为 mapName
    QJsonObject mapObject;
    mapObject["mapName"] = mapName;
    mapObject["mapID"] = mapNId;
    mapArray.append(mapObject);
    mapNId = mapNId + 1;
    // Step 2: 遍历网络，生成 netID、netName 和 waveform，并存入 network.json
    for (int j = 0; j < topItem->childCount(); ++j) {
        QTreeWidgetItem *childItem = topItem->child(j);
        QString netName = childItem->text(0);
        // 从 labelMap 获取 waveform 值
        QString waveform;
        if (labelMap.contains(netName)) {
            waveform = labelMap[netName]->text();
        } else {
            waveform = "默认波形"; // 如果未找到，使用默认波形
        }
        QJsonObject netObject;
        netObject["netName"] = netName;
        netObject["mapID"] = mapNId - 1;
        netObject["netID"] = netNId;
        netObject["waveform"] = waveform;
        netArray.append(netObject);
        netNId = netNId + 1;
        // Step 3: 遍历每个网络的三级目录项，生成 simID、simName 并存入 simulator.json
        for (int k = 0; k < childItem->childCount(); ++k) {
            QTreeWidgetItem *grandChildItem = childItem->child(k);
            QString simName = grandChildItem->text(0);
            QJsonObject simObject;
            simObject["simName"] = simName;
            simObject["mapID"] = mapNId - 1;
            simObject["netID"] = netNId - 1;
            simObject["simID"] = simNId;
            simObject["waveform"] = waveform;
            simArray.append(simObject);
            simNId = simNId + 1;
            //模拟器参数保存
            QString uniqueIdentifier = netName + "_" + simName;
            Link11parts* newparts = link11PartsMap[uniqueIdentifier];
            QJsonObject paramObject;
            paramObject = newparts->getProParamJson(waveform, paramObject);
            paramObject["dateTimeEdit"] = "2024-10-01 00:00:00";
            paramObject["lineEdit"] = "0";
            paramObject["parID"] = paramNId;
            paramObject["mapID"] = simObject["mapID"];
            paramObject["netID"] = simObject["netID"];
            paramObject["simID"] = simObject["simID"];
            paramArray.append(paramObject);
            paramNId = paramNId + 1;
        }
    }
    outJsonFile(baseFilePath + "/mapdata.json", mapArray);
    outJsonFile(baseFilePath + "/network.json", netArray);
    outJsonFile(baseFilePath + "/simulator.json", simArray);
    outJsonFile(baseFilePath + "/parameter.json", paramArray);
    emit switchToMainWindow();
}
QJsonArray SelectParameters::getJsonArryByFile(QString filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file for reading.";
        return QJsonArray();;
    }
    QByteArray jsonData = file.readAll();  // 读取文件内容
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    // 检查文件是否包含有效的 JSON 数组
    if (!jsonDoc.isArray())
    {
        qDebug() << "JSON file does not contain an array.";
        return QJsonArray();;
    }
    QJsonArray mapArray = jsonDoc.array();
    return mapArray;
}

void SelectParameters::outJsonFile(QString filePath, QJsonArray array)
{
    // 使用 QFile 将数据保存到文件
    QFile outFile(filePath);
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        // 将更新后的数组写回文件
        QJsonDocument newJsonDoc(array);
        outFile.write(newJsonDoc.toJson(QJsonDocument::Indented));  // 格式化输出
        outFile.close();
        qDebug() << "New entry added to JSON array successfully.";
    }
    else
    {
        qDebug() << "Failed to open file for writing.";
    }
}

int SelectParameters::getNewId(QJsonArray jsonArray, QString idN)
{
    int newId = 1;
    for (const QJsonValue &value : jsonArray) {
        if (value.isObject()) {
            int id = value.toObject().value(idN).toInt();
            if (id >= newId) {
                newId = id + 1;  // 更新新序号
            }
        }
    }
    return newId;
}
