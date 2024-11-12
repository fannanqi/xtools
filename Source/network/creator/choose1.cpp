#include "choose1.h"
#include "ui_choose1.h"
#include <QDebug>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSignalMapper>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QDateTime>

choose1::choose1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choose1),
    widgetsCreated(false),
    signalMapper(new QSignalMapper(this))
{
    ui->setupUi(this);
    tabWidget = ui->tabWidget;
    frameGeometry = ui->tabWidget->geometry(); // 获取 tabWidget 的几何形状
    simulator = new Simulator(ui->tabWidget->currentWidget());
    simulator->setParent(ui->tabWidget->currentWidget());
    simulator->show();

    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &choose1::onTabChanged);
    connect(signalMapper, static_cast<void (QSignalMapper::*)(QObject*)>(&QSignalMapper::mapped), this, &choose1::updateCheckBoxState);
}

choose1::~choose1()
{
    delete ui;
    delete signalMapper; // 删除信号映射器
}

void choose1::createWidgets(const QString &inputData, int networkCount)
{
    this->inputData = inputData;
    this->networkCount = networkCount;

    // 清空现有的标签页
    while (ui->tabWidget->count() > 0)
    {
        ui->tabWidget->removeTab(0);
    }

    // 创建每个 Tab 页
    for (int i = 0; i < networkCount; ++i)
    {
        QString tabLabel = "网络" + QString::number(i + 1);
        QWidget *simulatorWidget = new QWidget();
        Simulator *simulator = new Simulator(simulatorWidget);
        simulator->setParent(simulatorWidget);
        simulator->show();
        ui->tabWidget->addTab(simulatorWidget, tabLabel);

        // 找到模拟器 widget 中的所有复选框并连接信号槽
        QList<QCheckBox *> checkBoxes = simulator->findChildren<QCheckBox *>();
        for (QCheckBox *checkBox : checkBoxes)
        {
            checkBox->setProperty("networkName", tabLabel);
            connect(checkBox, &QCheckBox::stateChanged, this, [this, checkBox]() {
                signalMapper->map(checkBox);
            });
            signalMapper->setMapping(checkBox, checkBox);
        }

        // 为每个 Tab 页初始化 comboBoxValues
        comboBoxValues[tabLabel] = ui->comboBox->currentText(); // 添加默认值
    }

    // 连接 QTabWidget 的 currentChanged 信号来更新 QComboBox 的当前索引
    connect(ui->tabWidget, &QTabWidget::currentChanged, this, [this](int index) {
        if (index >= 0 && index < ui->tabWidget->count()) // 检查索引范围
        {
            QString tabLabel = ui->tabWidget->tabText(index);

            // 如果 comboBoxValues 中有对应的标签，则设置 QComboBox 的当前值
            if (comboBoxValues.contains(tabLabel)) {
                ui->comboBox->setCurrentText(comboBoxValues[tabLabel]); // 设置为保存的值
//                qDebug() << "切换到 Tab" << index << "，设置 QComboBox 为:" << comboBoxValues[tabLabel];
            }
        }
    });

    // 连接 QComboBox 的 currentIndexChanged 信号来保存选项值并更新 QLabel
    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [this](int index) {
        int currentTabIndex = ui->tabWidget->currentIndex();
        if (currentTabIndex >= 0) {
            QString tabLabel = ui->tabWidget->tabText(currentTabIndex);
            QString selectedValue = ui->comboBox->currentText();

            // 将所选值存储在 comboBoxValues 中
            comboBoxValues[tabLabel] = selectedValue; // 更新值

//            qDebug() << "当前选项卡标签:" << tabLabel << "，选择的值:" << selectedValue;

        }
    });

    // 设置标签页的样式
    ui->tabWidget->setStyleSheet(
        "QTabBar::tab { "
        "    background: #ADD8E6; "
        "    color: #3B5998; "
        "    font-size: 14px; "
        "    padding: 5px 10px; "
        "    margin: 3px; "
        "    min-width: 70px; "
        "    min-height: 30px; "
        "    border-top-left-radius: 10px; "
        "    border-top-right-radius: 10px; "
        "} "
        "QTabBar::tab:selected { "
        "    background: #3B5998; "
        "    color: white; "
        "    border-top-left-radius: 10px; "
        "    border-top-right-radius: 10px; "
        "}"
    );

    this->show(); // 显示选择窗口
}

void choose1::emitComboBoxValue(const QString &networkName, const QString &comboBoxValue) {
    qDebug() << "发射 comboBoxValueChanged 信号" << networkName << "值:" << comboBoxValue;
    emit comboBoxValueChanged(networkName, comboBoxValue);
}

void choose1::updateComboBoxValues() {
    for (const auto &networkName : comboBoxValues.keys()) {
        QString comboBoxValue = comboBoxValues[networkName];
        emitComboBoxValue(networkName, comboBoxValue);
    }
}

void choose1::on_pushButton4_clicked()
{
    // 更新并发射所有 comboBox 的值
    updateComboBoxValues();

    // 获取复选框的状态
    QMap<QString, QStringList> checkedItemsMap = getCheckedItemsMap(); // 自定义方法，用于获取复选框状态
    emit sendInputDataAndTabValues(inputData, networkCount, checkedItemsMap, comboBoxValues);

    emit jumpToSelector(); // 跳转到选择器
}

QString choose1::findMinSubItem() {
    QString minSubItem;
    // 假设 checkedItemsMap 存储了网络和三级目录的对应关系
    for (const QString &network : checkedItemsMap.keys()) {
        QStringList items = checkedItemsMap[network];
        if (!items.isEmpty()) {
            // 选中最靠前的项目
            minSubItem = items.first(); // 取第一个项目
            break; // 找到后退出
        }
    }
    return minSubItem;
}
QMap<QString, QStringList> choose1::getCheckedItemsMap()
{
    QMap<QString, QStringList> checkedItemsMap;
    QList<QCheckBox *> checkBoxes = this->findChildren<QCheckBox *>(); // 查找所有复选框
    for (QCheckBox *checkBox : checkBoxes)
    {
        if (checkBox->isChecked()) // 如果复选框被选中
        {
            QString networkName = checkBox->property("networkName").toString(); // 获取 networkName 属性
            checkedItemsMap[networkName].append(checkBox->text()); // 将复选框文本添加到对应的网络名中
        }
    }
    qDebug() << "choose Checked Items Map:" << checkedItemsMap; // 打印选中的项目
    return checkedItemsMap; // 返回选中的项目映射
}

void choose1::updateCheckBoxState()
{
    QMap<QString, QStringList> checkedItemsMap = getCheckedItemsMap(); // 更新复选框状态
    emit sendCheckedItemsMap(checkedItemsMap); // 发送选中的项目映射
}

void choose1::onTabChanged(int index)
{
    qDebug() << "Tab changed to index:" << index; // 打印当前标签页索引
}
