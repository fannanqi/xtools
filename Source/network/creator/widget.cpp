#include "widget.h"
#include "ui_widget.h"
#include "new_dev_ui.h"
#include "new_pac_ui.h"
#include "new_par_ui.h"
#include "login.h"
#include <QTimer>
#include <QTableWidget>
#include <QKeyEvent>
#include <QDomDocument>
#include <QDomElement>
#include <QInputDialog>
#include <QFile>
#include <QDir>
#include <QDebug>
#include<QLabel>
#include<QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget),
      isEditMode(false)
{
    ui->setupUi(this);
    // 初始化表格
    setupTableWidget();
    setLoginWindow(nullptr);
    this->setWindowTitle("配置");
    ui->widget_7->setMaximumWidth(165);
    ui->widget_8->setMinimumWidth(80);
    ensureDirectoryExists("/Users/apple/Downloads/c++/StoreData");
    // 加载设备管理数据
    loadDevDataFromFile("/Users/apple/Downloads/c++/StoreData/device_data.xml");
    // 加载报文管理数据
    loadPacDataFromFile("/Users/apple/Downloads/c++/StoreData/pac_data.xml");
    // 加载参数管理数据
    loadParDataFromFile("/Users/apple/Downloads/c++/StoreData/par_data.xml");
    // 初始化表格
    refreshTable();
    // 设置虚化的汉字提示
    ui->lineEdit_search->setPlaceholderText("搜索");
    ui->searchmgm->setStyleSheet("background-color: blue; color: white;");
    ui->newmgm->setStyleSheet("background-color: blue; color: white;");
    ui->tb_mgm->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);


    //添加对应点击图标对象
    pixDevChecked=new QPixmap(":/Resources/Icons/home_checked.svg");
    //pixDevChecked=_pixDevChecked.scaled(26, 26, Qt::KeepAspectRatio);
    pixDevUnChecked=new QPixmap(":/Resources/Icons/home_unchecked.svg");
    //pixDevUnChecked=_pixDevUnChecked.scaled(26, 26, Qt::KeepAspectRatio);

    pixParChecked=new QPixmap(":/Resources/Icons/parameter_checked.svg");
    //pixParChecked=pixParChecked->scaled(25, 25, Qt::KeepAspectRatio);
    pixParUnChecked=new QPixmap(":/Resources/Icons/parameter_unchecked.svg");
    //pixParUnChecked=_pixParUnChecked.scaled(25, 25, Qt::KeepAspectRatio);

    pixPacChecked=new QPixmap(":/Resources/Icons/book_checked.svg");
    //pixPacChecked=_pixPacChecked.scaled(26, 26, Qt::KeepAspectRatio);
    pixPacUnChecked=new QPixmap(":/Resources/Icons/book_unchecked.svg");
    //pixPacUnChecked=_pixPacUnChecked.scaled(26, 26, Qt::KeepAspectRatio);
    //end 添加对应点击图标对象

    //图标和文字左右分开
    ui->widget->layout()->setAlignment(Qt::AlignCenter);
    ui->widget->layout()->setSpacing(3);
    ui->widget_2->layout()->setAlignment(Qt::AlignCenter);
    ui->widget_2->layout()->setSpacing(3);
    ui->widget_3->layout()->setAlignment(Qt::AlignCenter);
    ui->widget_3->layout()->setSpacing(3);
    //ui->lb_dev->setAlignment(Qt::AlignLeft);
    ui->devIcon->setPixmap(*pixDevChecked);
    ui->parIcon->setPixmap(*pixParUnChecked);
    ui->pacIcon->setPixmap(*pixPacUnChecked);

    //end图标和文字左右分开

    // 给“报文管理”安装过滤器
    ui->lb_pac->installEventFilter(this);
    // 给“参数管理”安装过滤器
    ui->lb_par->installEventFilter(this);
    // 给“设备管理”安装过滤器
    ui->lb_dev->installEventFilter(this);

    // 设计“综合显控”边框的背景颜色
    //    ui->Qlabel->setStyleSheet("border: 2px solid blue; padding: 5px; background-color: #007BFF;");
    ui->tb_mgm->setStyleSheet(" border-color: blue; border-radius: 5px");

    // 槽函数展示各个表格
    connect(this, &Widget::red_dev, this, &Widget::dev_tb);
    connect(this, &Widget::red_pac, this, &Widget::pac_tb);
    connect(this, &Widget::red_par, this, &Widget::par_tb);

    // 展示“设备管理”的表格内容(初始化表格)
    dev_tb();
}
Widget::~Widget()
{
    ensureDirectoryExists("/Users/apple/Downloads/c++/StoreData");
    // 保存设备管理数据
    saveDevDataToFile("/Users/apple/Downloads/c++/StoreData/device_data.xml");
    // 保存报文管理数据
    savePacDataToFile("/Users/apple/Downloads/c++/StoreData/pac_data.xml");
    // 保存参数管理数据
    saveParDataToFile("/Users/apple/Downloads/c++/StoreData/par_data.xml");

    delete ui;
}
// login界面
void Widget::setLoginWindow(login *loginWidget)
{
    loginWindow = loginWidget;
}
void Widget::onConfirmed()
{
    // 隐藏确认窗口
    loginWindow->hide();
    // 显示主窗口
    this->show();
}
// 详情按钮槽函数
void Widget::onDetailsButtonClicked(int row)
{
    //    bool ok;
    //    QString text = QInputDialog::getText(this, "详情", "请输入详细信息:", QLineEdit::Normal, "", &ok);
    //    if (ok && !text.isEmpty()) {
    //        qDebug() << "用户输入的文本是:" << text;
    //        // 在这里处理文本，比如显示它、保存到文件等
    //    }
    QColor devColor = getLabelTextColor(ui->lb_dev);
    QColor pacColor = getLabelTextColor(ui->lb_pac);
    QColor parColor = getLabelTextColor(ui->lb_par);
    // 检查是否有窗口已经打开
    if (!openedWindows.isEmpty())
    {
        // 如果已经有窗口打开，则不再打开新的窗口
        return;
    }
    // 根据颜色决定跳转到哪个新增界面
    if (devColor == Qt::white)
    {
        new_dev_ui *dev = new new_dev_ui;
        dev->setDetailWidget(dev_Data[row]);
        dev->setAttribute(Qt::WA_DeleteOnClose); // 设置窗口关闭时自动删除
        dev->show();                             // 显示窗口
    }
    else if (pacColor == Qt::white)
    {
        new_pac_ui *pac = new new_pac_ui;
        pac->setDetailWidget(pac_Data[row]);
        pac->setAttribute(Qt::WA_DeleteOnClose);
        pac->show();
    }
    else if (parColor == Qt::white)
    {
        new_par_ui *par = new new_par_ui;
        par->setDetailWidget(par_Data[row]);
        par->setAttribute(Qt::WA_DeleteOnClose);
        par->show();
    }
}
// 删除按钮槽函数
void Widget::onDeleteButtonClicked(int row)
{
    qDebug() << "onDeleteButtonClicked called with row:" << row;

    // 确定当前激活的标签页
    QLabel *activeLabel = nullptr;
    QVector<QStringList> *activeData = nullptr;
    const char *filename = nullptr;

    if (ui->lb_dev->styleSheet() == "color:white")
    { //"color:red") {
        activeLabel = ui->lb_dev;
        activeData = &dev_Data;
        filename = "device_data.xml";
    }
    else if (ui->lb_pac->styleSheet() == "color:white")
    { //"color:red") {
        activeLabel = ui->lb_pac;
        activeData = &pac_Data;
        filename = "pac_data.xml";
    }
    else if (ui->lb_par->styleSheet() == "color:white")
    { //"color:red") {
        activeLabel = ui->lb_par;
        activeData = &par_Data;
        filename = "par_data.xml";
    }

    if (activeLabel && activeData && row >= 0 && row < activeData->size())
    {
        // 从数据容器中移除对应的数据
        activeData->removeAt(row);

        // 从表格中删除行
        ui->tb_mgm->removeRow(row);

        // 更新行号
        updateRowNumbers();

        // 保存数据到文件
        if (filename)
        {
            if (activeLabel == ui->lb_dev)
            {
                saveDevDataToFile(filename);
            }
            else if (activeLabel == ui->lb_pac)
            {
                savePacDataToFile(filename);
            }
            else if (activeLabel == ui->lb_par)
            {
                saveParDataToFile(filename);
            }
        }
    }
    else
    {
        qWarning() << "Invalid row index or no active label:" << row;
    }

    qDebug() << "onDeleteButtonClicked finished.";
}
// 修改按钮槽函数
void Widget::onEditButtonClicked(int row)
{
    ClickableLabel *editLabel = qobject_cast<ClickableLabel *>(sender());
    qDebug() << "sneder:" << editLabel->text();
    if (!editLabel)
        return; // 确保标签有效

    if (isEditMode)
    {
        // 结束编辑并保存更改
        finishEditing(); // 更新 dev_Data
        editDataContainers(row);
        editLabel->setText("修改"); // 将标签文本改回“修改”
        isEditMode = false;         // 退出编辑模式
        // 重新禁用编辑触发器
        ui->tb_mgm->setEditTriggers(QAbstractItemView::NoEditTriggers);

        // 保存数据到 XML 文件
        if (ui->lb_dev->styleSheet() == "color:white")
        {
            saveDevDataToFile("device_data.xml");
        }
        else if (ui->lb_pac->styleSheet() == "color:white")
        {
            savePacDataToFile("pac_data.xml");
        }
        else if (ui->lb_par->styleSheet() == "color:white")
        {
            saveParDataToFile("par_data.xml");
        }


    }
    else
    {
        // 切换到编辑模式
        enableRowEditing(row);
        editLabel->setText("保存"); // 将标签文本改为“保存”
        isEditMode = true;          // 进入编辑模式
        // 启用编辑触发器
        ui->tb_mgm->setEditTriggers(QAbstractItemView::AllEditTriggers);
    }
}

// 为指定行的所有单元格启用编辑
void Widget::enableRowEditing(int row)
{
    for (int col = 0; col < ui->tb_mgm->columnCount(); ++col)
    {
        QTableWidgetItem *item = ui->tb_mgm->item(row, col);
        if (item)
        {
            // 使单元格可编辑
            item->setFlags(item->flags() | Qt::ItemIsEditable);
        }
        else
        {
            // 如果单元格项不存在，则创建一个新的单元格项（可选）
            item = new QTableWidgetItem();
            item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsEditable);
            ui->tb_mgm->setItem(row, col, item);
        }
    }
    // 将当前单元格设置为该行的第一列，并激活编辑模式
    ui->tb_mgm->setCurrentCell(row, 0);
    // 确保当前单元格进入编辑模式
    if (ui->tb_mgm->item(row, 0))
    {
        ui->tb_mgm->editItem(ui->tb_mgm->item(row, 0));
    }
}
// 初始化表格设置
void Widget::setupTableWidget()
{
    // 设置编辑触发器为允许点击和 Tab 键进行编辑
    ui->tb_mgm->setEditTriggers(QAbstractItemView::AllEditTriggers);
    // 获取表格的水平表头
    QHeaderView *header=ui->tb_mgm->horizontalHeader();
    // 设置表头拉伸模式为Stretch
    header->setSectionResizeMode(QHeaderView::Stretch);
}
void Widget::finishEditing()
{
    // 恢复所有单元格为不可编辑
    for (int row = 0; row < ui->tb_mgm->rowCount(); ++row)
    {
        for (int col = 0; col < ui->tb_mgm->columnCount(); ++col)
        {
            QTableWidgetItem *item = ui->tb_mgm->item(row, col);
            if (item)
            {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            }
        }
    }
    // 禁用表格的编辑功能
    ui->tb_mgm->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
// 编辑删除，修改，详情按钮
void Widget::btn_det_edit_del(int row, int column)
{
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->setContentsMargins(0, 0, 0, 0);

    ClickableLabel *detailsLabel = new ClickableLabel(this);
    detailsLabel->setText("详情");
    connect(detailsLabel, &ClickableLabel::clicked, this, [this, row]()
            { onDetailsButtonClicked(row); });
    detailsLabel->setStyleSheet("color: blue;"); // 样式设置

    ClickableLabel *editLabel = new ClickableLabel(this);
    editLabel->setText("修改");
    connect(editLabel, &ClickableLabel::clicked, this, [this, row]()
            { onEditButtonClicked(row); });
    editLabel->setStyleSheet("color: blue;"); // 样式设置

    ClickableLabel *deleteLabel = new ClickableLabel(this);
    deleteLabel->setText("删除");
    connect(deleteLabel, &ClickableLabel::clicked, this, [this, row]()
            { onDeleteButtonClicked(row); });
    deleteLabel->setStyleSheet("color: red;"); // 样式设置

    buttonLayout->addWidget(detailsLabel);
    buttonLayout->addWidget(editLabel);
    buttonLayout->addWidget(deleteLabel);

    QWidget *buttonContainer = new QWidget();
    buttonContainer->setLayout(buttonLayout);

    ui->tb_mgm->setCellWidget(row, column, buttonContainer);
}

void Widget::tb_style()
{
    ui->tb_mgm->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive); // 允许用户手动调整列宽
    for (int i = 0; i < ui->tb_mgm->columnCount(); ++i)
    {
        ui->tb_mgm->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch); // 所有列宽自适应
    }
    ui->tb_mgm->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tb_mgm->verticalHeader()->setVisible(false);
    // 设置表格为不可编辑状态
    ui->tb_mgm->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void Widget::setTableHeader(const QStringList &header)
{
    ui->tb_mgm->clear(); // 清空现有内容
    ui->tb_mgm->setColumnCount(header.size());
    ui->tb_mgm->setHorizontalHeaderLabels(header);
    tb_style(); // 设置样式
}

void Widget::pac_tb()
{
    ui->devIcon->setPixmap(*pixDevUnChecked);
    ui->pacIcon->setPixmap(*pixPacChecked);
    ui->parIcon->setPixmap(*pixParUnChecked);
    QStringList header{"#", "报文系列", "报文编号", "报文名称", "默认数据包", "状态", "报文参数子表", "操作"};
    setTableHeader(header);

    // 清空现有行
    while (ui->tb_mgm->rowCount() > 0)
    {
        ui->tb_mgm->removeRow(0);
    }

    // 从保存的数据中恢复表格内容
    for (const QStringList &rowData : pac_Data)
    {
        int row = ui->tb_mgm->rowCount();
        ui->tb_mgm->insertRow(row);
        for (int j = 0; j < rowData.size(); ++j)
        {
            ui->tb_mgm->setItem(row, j, new QTableWidgetItem(rowData[j]));
            qDebug() << "报文按钮当前列:" << rowData.size();
            btn_det_edit_del(row, rowData.size());
        }
    }

    savePacDataToFile("pac_data.xml");
}

void Widget::par_tb()
{
    ui->devIcon->setPixmap(*pixDevUnChecked);
    ui->pacIcon->setPixmap(*pixPacUnChecked);
    ui->parIcon->setPixmap(*pixParChecked);
    QStringList header{"#", "报文系列", "参数编号", "参数名称", "比特数", "数据类型", "选项", "默认值", "状态", "备注", "操作"};
    setTableHeader(header); // 设置表头

    // 清空现有行
    while (ui->tb_mgm->rowCount() > 0)
    {
        ui->tb_mgm->removeRow(0);
    }

    // 从保存的数据中恢复表格内容
    for (const QStringList &rowData : par_Data)
    {
        int row = ui->tb_mgm->rowCount();
        ui->tb_mgm->insertRow(row);
        for (int j = 0; j < rowData.size(); ++j)
        {
            ui->tb_mgm->setItem(row, j, new QTableWidgetItem(rowData[j]));
            qDebug() << "参数当前列数:" << rowData.size();
            btn_det_edit_del(row, rowData.size()); // 添加修改删除按钮
        }
    }

    // 保存数据到文本文档
    saveParDataToFile("par_data.xml");
}

void Widget::dev_tb()
{
    ui->devIcon->setPixmap(*pixDevChecked);
    ui->pacIcon->setPixmap(*pixPacUnChecked);
    ui->parIcon->setPixmap(*pixParUnChecked);
    QStringList header{"#", "设备名称", "Mac", "设备ip", "端口", "端机地址", "增加端机状态", "操作"};
    setTableHeader(header); // 设置表头

    // 清空现有行
    while (ui->tb_mgm->rowCount() > 0)
    {
        ui->tb_mgm->removeRow(0);
    }

    // 从保存的数据中恢复表格内容
    for (const QStringList &rowData : dev_Data)
    {
        qDebug() << "Processing row with data:" << rowData;

        // 确保每行有8个元素
        QStringList paddedRowData = rowData;
        while (paddedRowData.size() < 8)
        {
            paddedRowData.append(""); // 添加默认值
        }

        int row = ui->tb_mgm->rowCount();
        ui->tb_mgm->insertRow(row);

        // 插入数据项
        for (int j = 0; j < paddedRowData.size(); ++j)
        {
            ui->tb_mgm->setItem(row, j, new QTableWidgetItem(paddedRowData[j]));
        }
        qDebug() << "设备当前列数:" << paddedRowData.size();
        // 添加修改删除按钮
        btn_det_edit_del(row, paddedRowData.size());
    }

    // 保存数据到文本文档
    saveDevDataToFile("device_data.xml");
}

void Widget::setLabelColor(QLabel *label, const QColor &color)
{
    if (label)
    {
        label->setStyleSheet(QString("color: %1").arg(color.name()));
    }
}
void Widget::setDevLabelColor(const QColor &color)
{
    setLabelColor(ui->lb_dev, color);
}
void Widget::setParLabelColor(const QColor &color)
{
    setLabelColor(ui->lb_par, color);
}
void Widget::setPacLabelColor(const QColor &color)
{
    setLabelColor(ui->lb_pac, color);
}
// 获取标签的文字颜色
QColor Widget::getLabelTextColor(QLabel *label)
{
    QString styleSheet = label->styleSheet();
    QRegularExpression re("color:\\s*([\\w#]+)");
    QRegularExpressionMatch match = re.match(styleSheet);
    if (match.hasMatch())
    {
        QString colorStr = match.captured(1);
        return QColor(colorStr);
    }
    return Qt::black; // 默认返回黑色
}
// 过滤器获取点击事件，实现跳转
bool Widget::eventFilter(QObject *watch, QEvent *ev)
{
    if (ev->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(ev);
        if (mouseEvent->button() == Qt::LeftButton)
        {
            if (watch == ui->lb_pac)
            {
                ui->lb_dev->setStyleSheet("color: rgb(161, 161, 161)"); //"color:black");
                ui->lb_par->setStyleSheet("color: rgb(161, 161, 161)"); //"color:black");
                ui->lb_pac->setStyleSheet("color:white");               //"color:red");
                emit red_pac();
                pac_tb(); // 清空表格并设置报文管理的表头
                return true;
            }
            else if (watch == ui->lb_par)
            {
                ui->lb_dev->setStyleSheet("color: rgb(161, 161, 161)"); //"color:black");
                ui->lb_par->setStyleSheet("color:white");               //"color:red");
                ui->lb_pac->setStyleSheet("color: rgb(161, 161, 161)"); //"color:black");
                emit red_par();
                par_tb(); // 清空表格并设置参数管理的表头
                return true;
            }
            else if (watch == ui->lb_dev)
            {
                ui->lb_dev->setStyleSheet("color:white");               //"color:red");
                ui->lb_par->setStyleSheet("color: rgb(161, 161, 161)"); //"color:black");
                ui->lb_pac->setStyleSheet("color: rgb(161, 161, 161)"); //"color:black");
                emit red_dev();
                dev_tb(); // 恢复设备管理的数据
                return true;
            }
        }
    }
    return false;
}
// 跳转到对应的新增界面
void Widget::on_newmgm_clicked()
{
    QColor devColor = getLabelTextColor(ui->lb_dev);
    QColor pacColor = getLabelTextColor(ui->lb_pac);
    QColor parColor = getLabelTextColor(ui->lb_par);

    qDebug() << "devColor:" << devColor.name();
    qDebug() << "pacColor:" << pacColor.name();
    qDebug() << "parColor:" << parColor.name();
    // 检查是否有窗口已经打开
    if (!openedWindows.isEmpty())
    {
        // 如果已经有窗口打开，则不再打开新的窗口
        return;
    }
    // 根据颜色决定跳转到哪个新增界面
    if (devColor == Qt::white) // Qt::red)
    {
        QPointer<new_dev_ui> dev = new new_dev_ui;
        dev->setAttribute(Qt::WA_DeleteOnClose); // 设置窗口关闭时自动删除
        dev->show();                             // 显示窗口
        openedWindows.append(dev);               // 添加到已打开的窗口列表
        // 连接窗口的destroyed信号到Widget的removeClosedWindow槽函数
        connect(dev, &QWidget::destroyed, this, &Widget::removeClosedWindow);
        connect(dev, &new_dev_ui::dev_Added, this, &Widget::onDev_Added);

        // 设置标签颜色
        //        setLabelColor(ui->lb_dev, Qt::red);
        //        setLabelColor(ui->lb_par, Qt::black);
        //        setLabelColor(ui->lb_pac, Qt::black);
    }
    else if (pacColor == Qt::white) // Qt::red)
    {
        QPointer<new_pac_ui> pac = new new_pac_ui;
        pac->setAttribute(Qt::WA_DeleteOnClose);
        pac->show();
        openedWindows.append(pac);
        connect(pac, &QWidget::destroyed, this, &Widget::removeClosedWindow);
        connect(pac, &new_pac_ui::pac_Added, this, &Widget::onPac_Added);

        // 设置标签颜色
        //        setLabelColor(ui->lb_dev, Qt::black);
        //        setLabelColor(ui->lb_par, Qt::black);
        //        setLabelColor(ui->lb_pac, Qt::red);
    }
    else if (parColor == Qt::white) // Qt::red)
    {
        QPointer<new_par_ui> par = new new_par_ui;
        par->setAttribute(Qt::WA_DeleteOnClose);
        par->show();
        openedWindows.append(par);
        connect(par, &QWidget::destroyed, this, &Widget::removeClosedWindow);
        connect(par, &new_par_ui::par_Added, this, &Widget::onPar_Added);

        // 设置标签颜色
        //        setLabelColor(ui->lb_dev, Qt::black);
        //        setLabelColor(ui->lb_par, Qt::red);
        //        setLabelColor(ui->lb_pac, Qt::black);
    }
}
// 当窗口关闭时，从已打开窗口列表中移除它
void Widget::removeClosedWindow(QObject *closedWindow)
{
    for (int i = 0; i < openedWindows.count(); ++i)
    {
        if (openedWindows.at(i) == closedWindow)
        {
            openedWindows.removeAt(i);
            break;
        }
    }
}
// 为设备管理添加数据
void Widget::onDev_Added(const QString &name, const QString &mac, const QString &ip, const QString &port, const QString &address, const QString &status)
{
    qDebug() << "Device added signal received with data:"
             << name << mac << ip << port << address << status;

    // 保存数据到容器
    dev_Data.append({QString::number(dev_Data.size() + 1), name, mac, ip, port, address, status, ""});

    // 更新表格
    dev_tb();

    // 在最后一列添加详情、修改、删除按钮
    int row = dev_Data.size() - 1;
    btn_det_edit_del(row, 7); // 假设第7列用于按钮

    // 刷新表格视图
    ui->tb_mgm->scrollToBottom();
}
// 为报文管理添加数据
void Widget::onPac_Added(const QString &pac_series, const QString &id, const QString &name, const QString &data, const QString &status)
{
    qDebug() << "Device added signal received with data:"
             << pac_series << id << name << data << status;

    // 保存数据到容器
    pac_Data.append({QString::number(pac_Data.size() + 1), pac_series, id, name, data, status, "查看", ""});

    // 更新表格
    pac_tb();

    // 在最后一列添加详情、修改、删除按钮
    int row = pac_Data.size() - 1;
    btn_det_edit_del(row, 7);

    // 刷新表格视图
    ui->tb_mgm->scrollToBottom();
}
// 为参数管理添加数据
void Widget::onPar_Added(const QString &par_series, const QString &id, const QString &name, const QString &bit, const QString &data_series, const QString &choices, const QString &def, const QString &status, const QString &note)
{
    qDebug() << "设备添加了接收到的信号和数据:"
             << par_series << id << name << bit << data_series << choices << def << status << note;

    // 保存数据到容器
    par_Data.append({QString::number(par_Data.size() + 1), par_series, id, name, bit, data_series, choices, def, status, note, ""});

    // 更新表格
    par_tb();

    // 在最后一列添加详情、修改、删除按钮
    int row = par_Data.size() - 1;
    btn_det_edit_del(row, 10);

    // 刷新表格视图
    ui->tb_mgm->scrollToBottom();
}
// 辅助函数，确保指定的目录存在
void Widget::ensureDirectoryExists(const QString &dirPath)
{
    QDir dir(dirPath);
    if (!dir.exists())
    {
        if (!dir.mkpath(dirPath))
        {
            qWarning() << "创建目录失败:" << dirPath;
        }
        else
        {
            qDebug() << "目录创建成功:" << dirPath;
        }
    }
}
// 保存设备管理数据到文本文档
void Widget::saveDevDataToFile(const QString &filename)
{
    QString dirPath = "/Users/apple/Downloads/c++/StoreData";
    ensureDirectoryExists(dirPath);                      // 确保目录存在或创建目录
    QString filePath = QDir(dirPath).filePath(filename); // 处理完整的文件路径
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qWarning() << "无法打开文件进行写入:" << filePath;
        return;
    }

    qDebug() << "Creating XML document for file:" << filePath;
    // 创建xml文档
    QDomDocument doc("设备管理数据");
    QDomElement root = doc.createElement("设备管理数据");
    doc.appendChild(root);

    for (int i = 0; i < dev_Data.size(); ++i)
    {
        const QStringList &rowData = dev_Data[i];
        if (rowData.size() < 8)
        {
            qWarning() << "Insufficient data in row" << i;
            continue; // 跳过不完整的数据行
        }
        QDomElement device = doc.createElement("设备");
        root.appendChild(device);

        device.setAttribute("序号", rowData[0]);
        device.setAttribute("设备名称", rowData[1]);
        device.setAttribute("MAC", rowData[2]);
        device.setAttribute("设备IP", rowData[3]);
        device.setAttribute("端口", rowData[4]);
        device.setAttribute("端机地址", rowData[5]);
        device.setAttribute("增加端机状态", rowData[6]);
        device.setAttribute("操作", "");
        // Optionally store an empty string or some placeholder for buttons
    }
    for (int i = 0; i < dev_Data.size(); ++i)
    {
        btn_det_edit_del(i, 7); // Add buttons dynamically in the 10th column
    }
    // 将xml内容写入文件
    QTextStream out(&file);
    out.setCodec("UTF-8");
    out << doc.toString(4); // 以 4 个空格的缩进写入

    file.close();
    qDebug() << "Device data saved successfully to file:" << filePath;
    qDebug() << "Device data size:" << dev_Data.size();
}
// 保存报文管理数据到文本文档
void Widget::savePacDataToFile(const QString &filename)
{
    QString dirPath = "/Users/apple/Downloads/c++/StoreData";
    ensureDirectoryExists(dirPath);                      // 确保目录存在或创建目录
    QString filePath = QDir(dirPath).filePath(filename); // 处理完整的文件路径
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qWarning() << "无法打开文件进行写入:" << filePath;
        return;
    }

    // 创建xml文档
    QDomDocument doc("报文管理数据");
    QDomElement root = doc.createElement("报文管理数据");
    doc.appendChild(root);

    for (int i = 0; i < pac_Data.size(); ++i)
    {
        const QStringList &rowData = pac_Data[i];
        if (rowData.size() < 8)
        {
            qWarning() << "Insufficient data in row" << i;
            continue; // 跳过不完整的数据行
        }
        QDomElement pac = doc.createElement("报文");
        root.appendChild(pac);

        pac.setAttribute("序号", rowData[0]);
        pac.setAttribute("报文系列", rowData[1]);
        pac.setAttribute("报文编号", rowData[2]);
        pac.setAttribute("报文名称", rowData[3]);
        pac.setAttribute("默认数据包", rowData[4]);
        pac.setAttribute("状态", rowData[5]);
        pac.setAttribute("报文参数子", rowData[6]);
        pac.setAttribute("操作", "");
        // Optionally store an empty string or some placeholder for buttons
    }

    // Later, when loading the table, programmatically add buttons like this:
    for (int i = 0; i < pac_Data.size(); ++i)
    {
        btn_det_edit_del(i, 7); // Add buttons dynamically in the 10th column
    }
    // 将xml内容写入文件
    QTextStream out(&file);
    out.setCodec("UTF-8");
    out << doc.toString(4); // 4 是缩进的空格数

    file.close();
    qDebug() << "Saved pac data to file:" << filePath;
    qDebug() << "Pac data size:" << pac_Data.size();
}
// 保存参数管理数据到文本文档
void Widget::saveParDataToFile(const QString &filename)
{
    QString dirPath = "/Users/apple/Downloads/c++/StoreData";
    ensureDirectoryExists(dirPath);                      // 确保目录存在或创建目录
    QString filePath = QDir(dirPath).filePath(filename); // 处理完整的文件路径
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qWarning() << "无法打开文件进行写入:" << filePath;
        return;
    }

    // 创建xml文档
    QDomDocument doc("参数管理数据");
    QDomElement root = doc.createElement("参数管理数据");
    doc.appendChild(root);

    for (int i = 0; i < par_Data.size(); ++i)
    {
        const QStringList &rowData = par_Data[i];
        if (rowData.size() < 11)
        {
            qWarning() << "Insufficient data in row" << i;
            continue; // 跳过不完整的数据行
        }
        QDomElement par = doc.createElement("参数");
        root.appendChild(par);

        par.setAttribute("序号", rowData[0]);
        par.setAttribute("报文系列", rowData[1]);
        par.setAttribute("参数编号", rowData[2]);
        par.setAttribute("参数名称", rowData[3]);
        par.setAttribute("比特数", rowData[4]);
        par.setAttribute("数据类型", rowData[5]);
        par.setAttribute("选项", rowData[6]);
        par.setAttribute("默认值", rowData[7]);
        par.setAttribute("状态", rowData[8]);
        par.setAttribute("备注", rowData[9]);
        par.setAttribute("操作", "");
        // Optionally store an empty string or some placeholder for buttons
    }

    // Later, when loading the table, programmatically add buttons like this:
    for (int i = 0; i < par_Data.size(); ++i)
    {
        btn_det_edit_del(i, 10); // Add buttons dynamically in the 10th column
    }
    // 将xml内容写入文件
    QTextStream out(&file);
    out.setCodec("UTF-8");
    out << doc.toString(4); // 4 是缩进的空格数

    file.close();
    qDebug() << "Saved par data to file:" << filePath;
    qDebug() << "Par data size:" << par_Data.size();
}
// 从文本文档加载设备管理数据
void Widget::loadDevDataFromFile(const QString &filename)
{
    QString dirPath = "/Users/apple/Downloads/c++/StoreData";
    ensureDirectoryExists(dirPath);                      // 确保目录存在
    QString filePath = QDir(dirPath).filePath(filename); // 处理完整的文件路径

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "无法打开文件进行读取:" << filePath;
        return;
    }

    QDomDocument doc;
    if (!doc.setContent(&file))
    {
        qWarning() << "解析 XML 文件时出错:" << filePath;
        file.close();
        return;
    }

    file.close();

    QDomElement root = doc.documentElement();
    if (root.tagName() != "设备管理数据")
    {
        qWarning() << "无效的 XML 文件格式:" << filePath;
        return;
    }

    QDomNodeList devices = root.elementsByTagName("设备");
    for (int i = 0; i < devices.count(); ++i)
    {
        QDomElement device = devices.at(i).toElement();
        QStringList rowData;
        rowData.append(device.attribute("序号"));
        rowData.append(device.attribute("设备名称"));
        rowData.append(device.attribute("MAC"));
        rowData.append(device.attribute("设备IP"));
        rowData.append(device.attribute("端口"));
        rowData.append(device.attribute("端机地址"));
        rowData.append(device.attribute("增加端机状态"));
        rowData.append(device.attribute("操作")); // 确保包含“操作”列
        dev_Data.append(rowData);
    }

    qDebug() << "从文件加载设备数据成功:" << filePath;
    qDebug() << "设备数据大小:" << dev_Data.size();
}
// 从文本文档加载报文数据
void Widget::loadPacDataFromFile(const QString &filename)
{
    QString dirPath = "/Users/apple/Downloads/c++/StoreData";
    ensureDirectoryExists(dirPath);                      // 确保目录存在
    QString filePath = QDir(dirPath).filePath(filename); // 处理完整的文件路径

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "无法打开文件进行读取:" << filePath;
        return;
    }

    QDomDocument doc;
    if (!doc.setContent(&file))
    {
        qWarning() << "解析 XML 文件时出错:" << filePath;
        file.close();
        return;
    }

    file.close();

    QDomElement root = doc.documentElement();
    if (root.tagName() != "报文管理数据")
    {
        qWarning() << "无效的 XML 文件格式:" << filePath;
        return;
    }

    QDomNodeList pacs = root.elementsByTagName("报文");
    for (int i = 0; i < pacs.count(); ++i)
    {
        QDomElement pac = pacs.at(i).toElement();
        QStringList rowData;
        rowData.append(pac.attribute("序号"));
        rowData.append(pac.attribute("报文系列"));
        rowData.append(pac.attribute("报文编号"));
        rowData.append(pac.attribute("报文名称"));
        rowData.append(pac.attribute("默认数据包"));
        rowData.append(pac.attribute("状态"));
        rowData.append(pac.attribute("报文参数子"));
        rowData.append(pac.attribute("操作"));
        pac_Data.append(rowData);
    }

    qDebug() << "从文件加载报文数据成功:" << filePath;
    qDebug() << "报文数据大小:" << pac_Data.size();
}
// 从文本文档加载参数数据
void Widget::loadParDataFromFile(const QString &filename)
{
    QString dirPath = "/Users/apple/Downloads/c++/StoreData";
    ensureDirectoryExists(dirPath);                      // 确保目录存在
    QString filePath = QDir(dirPath).filePath(filename); // 处理完整的文件路径

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "无法打开文件进行读取:" << filePath;
        return;
    }

    QDomDocument doc;
    if (!doc.setContent(&file))
    {
        qWarning() << "解析 XML 文件时出错:" << filePath;
        file.close();
        return;
    }

    file.close();

    QDomElement root = doc.documentElement();
    if (root.tagName() != "参数管理数据")
    {
        qWarning() << "无效的 XML 文件格式:" << filePath;
        return;
    }

    QDomNodeList pars = root.elementsByTagName("参数");
    for (int i = 0; i < pars.count(); ++i)
    {
        QDomElement par = pars.at(i).toElement();
        QStringList rowData;
        rowData.append(par.attribute("序号"));
        rowData.append(par.attribute("报文系列"));
        rowData.append(par.attribute("参数编号"));
        rowData.append(par.attribute("参数名称"));
        rowData.append(par.attribute("比特数"));
        rowData.append(par.attribute("数据类型"));
        rowData.append(par.attribute("选项"));
        rowData.append(par.attribute("默认值"));
        rowData.append(par.attribute("状态"));
        rowData.append(par.attribute("备注"));
        rowData.append(par.attribute("操作"));
        par_Data.append(rowData);
    }

    qDebug() << "从文件加载参数数据成功:" << filePath;
    qDebug() << "参数数据大小:" << par_Data.size();
}
void Widget::removeDataAndSave(int row, QVector<QStringList> &dataContainer, const QString &fileName)
{
    if (row >= 0 && row < dataContainer.size())
    {
        dataContainer.removeAt(row);
        ui->tb_mgm->removeRow(row);
        saveDevDataToFile(fileName);
        qDebug() << "Data deleted at index:" << row;
    }
    else
    {
        qWarning() << "Invalid row index for deletion:" << row;
    }
}
// 更新行号
void Widget::updateRowNumbers()
{
    for (int row = 0; row < ui->tb_mgm->rowCount(); ++row)
    {
        QTableWidgetItem *item = new QTableWidgetItem(QString::number(row + 1));
        ui->tb_mgm->setItem(row, 0, item); // 假设行号在第一列
    }
}
// 删除设备数据
void Widget::deleteDevData(int row)
{
    // Get the selected row from the table, if not passed correctly
    if (row == -1)
    {
        row = ui->tb_mgm->currentRow(); // Get the current selected row
    }

    // Validate row index range to ensure correct deletion
    if (row >= 0 && row < dev_Data.size())
    {
        dev_Data.removeAt(row);               // Remove data from the list
        ui->tb_mgm->removeRow(row);           // Remove the row from the table
        updateRowNumbers();                   // Update row numbers after deletion
        saveDevDataToFile("device_data.xml"); // Save updated data to file
    }
    else
    {
        qDebug() << "Invalid row index: " << row;
    }
}
// 删除报文数据
void Widget::deletePacData(int row)
{
    if (row >= 0 && row < pac_Data.size())
    {
        pac_Data.removeAt(row);
        ui->tb_mgm->removeRow(row);
        updateRowNumbers(); // 自定义函数，更新行号
        savePacDataToFile("pac_data.xml");
    }
}
// 删除参数数据
void Widget::deleteParData(int row)
{
    if (row >= 0 && row < par_Data.size())
    {
        par_Data.removeAt(row);
        ui->tb_mgm->removeRow(row);
        updateRowNumbers(); // 自定义函数，更新行号
        saveParDataToFile("par_data.xml");
    }
}
// 修改数据
void Widget::editDataContainers(int row)
{
    // 获取当前行的数据
    QStringList newData;
    for (int col = 0; col < ui->tb_mgm->columnCount(); ++col)
    {
        QTableWidgetItem *item = ui->tb_mgm->item(row, col);
        if (item)
        {
            newData.append(item->text());
        }
    }

    // 更新数据容器
    if (ui->lb_dev->styleSheet() == "color:white")
    { //"color:red") {
        dev_Data[row] = newData;
        saveDevDataToFile("device_data.xml");
    }
    else if (ui->lb_pac->styleSheet() == "color:white")
    { //"color:red") {
        pac_Data[row] = newData;
        savePacDataToFile("pac_data.xml");
    }
    else if (ui->lb_par->styleSheet() == "color:white")
    { //"color:red") {
        par_Data[row] = newData;
        saveParDataToFile("par_data.xml");
    }
}
// 更新数据容器
void Widget::updateDataContainers()
{
    if (ui->lb_dev->styleSheet() == "color:white")
    { //"color:red") {
        // 设备管理
        dev_Data.clear(); // 清空数据容器
        for (int row = 0; row < ui->tb_mgm->rowCount(); ++row)
        {
            QStringList rowData;
            rowData.append(QString::number(row + 1)); // 添加序号
            for (int col = 1; col < ui->tb_mgm->columnCount(); ++col)
            {
                QTableWidgetItem *item = ui->tb_mgm->item(row, col);
                if (item)
                {
                    rowData.append(item->text());
                }
            }
            while (rowData.size() < 8)
            {
                rowData.append(""); // 添加默认值
            }
            dev_Data.append(rowData); // 将数据添加到容器中
        }
        qDebug() << "Updated Device Data:" << dev_Data; // 调试输出
    }
    else if (ui->lb_pac->styleSheet() == "color:white")
    { //"color:red") {
        // 报文管理
        pac_Data.clear(); // 清空数据容器
        for (int row = 0; row < ui->tb_mgm->rowCount(); ++row)
        {
            QStringList rowData;
            rowData.append(QString::number(row + 1)); // 添加序号
            for (int col = 1; col < ui->tb_mgm->columnCount(); ++col)
            {
                QTableWidgetItem *item = ui->tb_mgm->item(row, col);
                if (item)
                {
                    rowData.append(item->text());
                }
            }
            while (rowData.size() < 8)
            {
                rowData.append(""); // 添加默认值
            }
            pac_Data.append(rowData); // 将数据添加到容器中
        }
        qDebug() << "Updated PAC Data:" << pac_Data; // 调试输出
    }
    else if (ui->lb_par->styleSheet() == "color:white")
    { //"color:red") {
        // 参数管理
        par_Data.clear(); // 清空数据容器
        for (int row = 0; row < ui->tb_mgm->rowCount(); ++row)
        {
            QStringList rowData;
            // 添加序号
            rowData.append(QString::number(row + 1));
            for (int col = 1; col < ui->tb_mgm->columnCount(); ++col)
            {
                QTableWidgetItem *item = ui->tb_mgm->item(row, col);
                if (item)
                {
                    rowData.append(item->text());
                }
            }
            par_Data.append(rowData); // 将数据添加到容器中
        }
    }
}
// 重新填充表格
void Widget::refreshTable()
{
    // 清除现有表格内容
    while (ui->tb_mgm->rowCount() > 0)
    {
        ui->tb_mgm->removeRow(0);
    }
    // 重新填充表格
    if (ui->lb_dev->styleSheet() == "color:white")
    { //"color:red") {
        qDebug() << "当前处于lb_dev";
        for (int i = 0; i < dev_Data.size(); ++i)
        {
            const QStringList &rowData = dev_Data[i];
            int row = ui->tb_mgm->rowCount();
            ui->tb_mgm->insertRow(row);
            // 插入数据项
            for (int j = 0; j < 7; ++j)
            {
                ui->tb_mgm->setItem(row, j, new QTableWidgetItem(rowData[j]));
            }

            // 添加修改删除按钮
            btn_det_edit_del(row, 7); // 假设第7列用于按钮
        }
    }
    else if (ui->lb_pac->styleSheet() == "color:white")
    { //"color:red") {
        qDebug() << "当前处于lb_pac";
        for (int i = 0; i < pac_Data.size(); ++i)
        {
            const QStringList &rowData = pac_Data[i];
            int row = ui->tb_mgm->rowCount();
            ui->tb_mgm->insertRow(row);
            // 插入数据项
            for (int j = 0; j < 7; ++j)
            {
                ui->tb_mgm->setItem(row, j, new QTableWidgetItem(rowData[j]));
            }

            // 添加修改删除按钮
            btn_det_edit_del(row, 7); // 假设第7列用于按钮
        }
    }
    else if (ui->lb_par->styleSheet() == "color:white")
    { //"color:red") {
        qDebug() << "当前处于lb_par";
        for (int i = 0; i < par_Data.size(); ++i)
        {
            const QStringList &rowData = par_Data[i];
            int row = ui->tb_mgm->rowCount();
            ui->tb_mgm->insertRow(row);
            // 插入数据项
            for (int j = 0; j < 10; ++j)
            {
                ui->tb_mgm->setItem(row, j, new QTableWidgetItem(rowData[j]));
            }

            // 添加修改删除按钮
            btn_det_edit_del(row, 10); // 假设第7列用于按钮
        }
    }
    // 刷新表格视图
    ui->tb_mgm->resizeColumnsToContents();
    ui->tb_mgm->resizeRowsToContents();
    ui->tb_mgm->viewport()->update(); // 强制更新视图
}
// 搜索功能
void Widget::on_searchmgm_clicked()
{
    QString searchText = ui->lineEdit_search->text().trimmed();
    // 遍历表格的每一行
    for (int row = 0; row < ui->tb_mgm->rowCount(); ++row)
    {
        bool matchFound = false;

        // 遍历每一列
        for (int col = 0; col < ui->tb_mgm->columnCount(); ++col)
        {
            QTableWidgetItem *item = ui->tb_mgm->item(row, col);
            if (item && item->text().contains(searchText, Qt::CaseInsensitive))
            {
                matchFound = true; // 如果找到匹配项，设置标志为 true
                break;             // 可以跳出列循环，因为我们只需要知道是否有匹配
            }
        }

        // 根据标志来设置行的显示与隐藏
        ui->tb_mgm->setRowHidden(row, !matchFound);
    }
}
