#include "login.h"
#include "ui_login.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <QDebug> // 添加调试输出

login::login(QWidget *parent) : QWidget(parent), ui(new Ui::login)
{
    ui->setupUi(this);
    frameGeometry = ui->widget->geometry();
    qDebug() << "Login widget constructed"; // 调试输出
//    connect(ui->btn_log, &QPushButton::clicked, this, &login::on_btn_log_clicked);
}

login::~login()
{
    delete ui;
    qDebug() << "Login widget destroyed"; // 调试输出
}

void login::on_btn_log_clicked() {
    qDebug() <<"start on_btn_log_clicked";
    QString inputData = ui->nameEdit->text(); // 获取输入数据
    QString networkData = ui->networkCountEdit->text(); // 获取网络计数输入
    // 将输入转换为整数
    bool ok;
    int networkCount = networkData.toInt(&ok); // 转换为整数并检查是否成功
    // 检查转换是否成功且数字大于0
    if (!inputData.isEmpty() && ok && networkCount > 0) {
        emit sendData(inputData, networkCount); // 发射信号，传递输入数据和网络计数
    } else {
        // 处理错误（例如，显示一个消息框）
        QMessageBox::warning(this, "输入错误", "请输入有效的名称和大于0的网络计数。");
    }
}

void login::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);

    int currentW = this->width();
    int currentH = this->height();

    int widgetWidth = qMin(frameGeometry.width(), currentW - 40);
    int widgetHeight = qMin(frameGeometry.height(), currentH - 40);

    int centerX = (currentW - widgetWidth) / 2;
    int centerY = (currentH - widgetHeight) / 2;

    ui->widget->setGeometry(centerX, centerY, widgetWidth, widgetHeight);
}

QString login::getLineEditNameText() const
{
    return ui->nameEdit->text();
}

QString login::getLineEditNetworkCountText() const
{
    return ui->networkCountEdit->text();
}
