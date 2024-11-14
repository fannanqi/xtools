#include "xToolsEleAsciiAssistant.h"
#include "ui_xToolsEleAsciiAssistant.h"
#include <QVBoxLayout>
#include <QDateTime>
#include <QMessageBox>
#include <QTableWidget>
#include <QButtonGroup>
#include <QPlainTextEdit>
#include <QDebug>
#include<QScrollArea>
xToolsEleAsciiAssistant::xToolsEleAsciiAssistant(QWidget* parent)
    : QWidget(parent), dateTimeLabel(new QLabel(this)), timer(new QTimer(this)), ui(new Ui::xToolsEleAsciiAssistant)
    , buttonGroup3(new QButtonGroup(this))
    , buttonGroup4(new QButtonGroup(this))
{
    ui->setupUi(this); // 初始化 UI 组件
    mainLayout=new QVBoxLayout(this);
    mainWidget = new QScrollArea(this);
    mainLayout->addWidget(mainWidget);
    mainWidget->setLayout(ui->verticalLayout_2);
    //setLayout(ui->verticalLayout_2);
    headwidget = ui -> headwidget; // 初始化 headwidget
    ui->plainTextEdit->setPlaceholderText("请输入");
    // 设置 comboBox 为可编辑状态
    ui->comboBoxWidth6->setEditable(true);

    // 获取按钮
    QPushButton *NetButton = ui->NetButton;
    QPushButton *RetireButton = ui->RetireButton;
    QPushButton *StartButton = ui->startButton;
    QPushButton *StopButton = ui->StopButton;
    QPushButton *PauseButton = ui->PauseButton;
    QPushButton *AddButton = ui->AddButton;
    QPushButton *DelButton = ui->delButton;
    QPushButton *EmptyButton = ui->emptyButton;

    if (!NetButton || !RetireButton || !StartButton || !StopButton || !PauseButton) {
        qCritical() << "按钮未在UI文件中找到，请检查UI文件。";
        return;
    }

    NetButton->setCheckable(true);
    RetireButton->setCheckable(true);
    StartButton->setCheckable(true);
    StopButton->setCheckable(true);
    PauseButton->setCheckable(true);

    // 将按钮添加到第三组按钮组并分配相应的ID
    buttonGroup3->addButton(NetButton, 0);
    buttonGroup3->addButton(RetireButton, 1);
    buttonGroup3->setExclusive(true);

    buttonGroup4->addButton(StartButton, 0);
    buttonGroup4->addButton(PauseButton, 1);
    buttonGroup4->addButton(StopButton, 2);
    buttonGroup4->setExclusive(true);

    // 可选：设置初始选中状态
    NetButton->setChecked(true);  // 初始时选中入网
    StartButton->setChecked(true);  // 初始时选中启动

    // 创建 QLabel 用于显示日期和时间
    dateTimeLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter); // 文本靠右顶格对齐

    // 初始化时间标签
    updateDateTime();

    // 使用 QTimer 每秒更新一次时间
    connect(timer, &QTimer::timeout, this, &xToolsEleAsciiAssistant::updateDateTime);
    timer->start(1000); // 每秒触发一次

    // 将 QLabel 添加到 headwidget 中
    QVBoxLayout *layout = new QVBoxLayout(headwidget);
    layout->addWidget(dateTimeLabel);
    headwidget->setLayout(layout); // 确保 headwidget 使用该布局
    tableWidget = ui->tableWidget; // 获取 UI 文件中定义的 QTableWidget
    tableWidget->verticalHeader()->setVisible(false);
    setupTableHeaders();  // 现在调用这个函数来设置表格头部

    // 设置表格属性（可选）
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 让列自动拉伸
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 让表格变为只读

    // 连接按钮点击信号到槽函数
    connect(buttonGroup3, QOverload<int>::of(&QButtonGroup::buttonClicked), this, &xToolsEleAsciiAssistant::onButtonGroup3Clicked);
    connect(buttonGroup4, QOverload<int>::of(&QButtonGroup::buttonClicked), this, &xToolsEleAsciiAssistant::onButtonGroup4Clicked);
    connect(AddButton, &QPushButton::clicked, this, &xToolsEleAsciiAssistant::AddButtonClicked);
    connect(DelButton, &QPushButton::clicked, this, &xToolsEleAsciiAssistant::delButtonclicked);
    connect(EmptyButton, &QPushButton::clicked, this, &xToolsEleAsciiAssistant::clearAllRows);


}

xToolsEleAsciiAssistant::~xToolsEleAsciiAssistant()
{
    delete dateTimeLabel;
    delete timer;
    delete ui; // 删除由 setupUi() 创建的 UI 对象
}

void xToolsEleAsciiAssistant::updateDateTime()
{
    // 获取当前的日期和时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");

    // 更新 QLabel 的文本
    dateTimeLabel->setText(dateTimeString);
}

void xToolsEleAsciiAssistant::addRow(const QStringList& row)
{
    int rowCount = tableWidget->rowCount(); // 获取表格当前行数
    tableWidget->insertRow(rowCount); // 在最后一行后插入新行

    // 在第一列插入复选框
    QTableWidgetItem *checkBoxItem = new QTableWidgetItem(); // 创建一个新的QTableWidgetItem作为复选框
    checkBoxItem->setCheckState(Qt::Unchecked); // 设置复选框的初始状态为未选中
    tableWidget->setItem(rowCount, 0, checkBoxItem); // 将复选框添加到第一列（索引为0）

    // 从第二列（索引为1）开始插入其余的数据
    for (int i = 0; i < row.size(); ++i) {
        QTableWidgetItem *item = new QTableWidgetItem(row[i]); // 根据QStringList中的数据创建新的QTableWidgetItem
        tableWidget->setItem(rowCount, i + 1, item); // 将数据项添加到从第二列开始的相应位置（索引从1开始）
    }
}

// 表头
void xToolsEleAsciiAssistant::setupTableHeaders()
{
    QStringList headers;
    headers << "" << "通道号" << "通信方式" << "调制样式" << "衰减(DEM)" << "频率(MHZ)" << "带宽(KHZ)" << "工作模式" << "AM调制参数" << "FM调制参数";
    tableWidget->setColumnCount(headers.size());  // Set the number of columns
    tableWidget->setHorizontalHeaderLabels(headers);  // Set the header labels
}

// 添加的内容
void xToolsEleAsciiAssistant::AddButtonClicked()
{
    QStringList data = {"1", "定频", "CW", "0", "1.5", "12", "0", "10", "10"};
    addRow(data);
}

void xToolsEleAsciiAssistant::onButtonGroup3Clicked(int id)
{
    // 根据按钮ID处理按钮点击事件
    switch (id) {
        case 0:
            qDebug() << "NetButton (ID: 0) clicked - 入网";
            break;
        case 1:
            qDebug() << "RetireButton (ID: 1) clicked - 退网";
            // 添加按钮6被点击时的具体操作
            break;
        default:
            qDebug() << "未知按钮被点击。";
            break;
    }
}

void xToolsEleAsciiAssistant::onButtonGroup4Clicked(int id)
{
    // 根据按钮ID处理按钮点击事件
    switch (id) {
        case 0:
            qDebug() << "StartButton (ID: 0) clicked - 启动";
            break;
        case 1:
            qDebug() << "PauseButton (ID: 1) clicked - 暂停";
            break;
        case 2:
            qDebug() << "StopButton (ID: 2) clicked - 停止";
            break;
        default:
            qDebug() << "未知按钮被点击。";
            break;
    }
}

// 删除被选中的
void xToolsEleAsciiAssistant::delButtonclicked()
{
    // 从下到上遍历表格，以避免索引移动问题
    for (int row = tableWidget->rowCount() - 1; row >= 0; --row) {
        // 假设复选框在第一列
        QTableWidgetItem *checkBoxItem = tableWidget->item(row, 0);

        // 如果找到了复选框，并且它是被选中的
        if (checkBoxItem && checkBoxItem->checkState() == Qt::Checked) {
            // 删除选中的行
            tableWidget->removeRow(row);
        }
    }
}

// 清空表格中内容
void xToolsEleAsciiAssistant::clearAllRows()
{
    tableWidget->setRowCount(0);  // Removes all rows from the table
}
