#include "new_dev_ui.h"
#include "ui_new_dev_ui.h"
#include <QDebug>

new_dev_ui::new_dev_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::new_dev_ui)
{
    ui->setupUi(this);

    this->setWindowTitle("设备新增界面");
    ui->comboBox->addItem("启动");
    ui->comboBox->addItem("停止");
}

void new_dev_ui::on_dev_add_clicked()
{
    qDebug() << "Device add button clicked.";
    QString name = ui->lineEdit->text();
    QString mac = ui->lineEdit_2->text();
    QString ip = ui->lineEdit_3->text();
    QString port = ui->lineEdit_4->text();
    QString address = ui->lineEdit_5->text();
    QString status = ui->comboBox->currentText();

    qDebug() << "Emitting dev_Added signal with data:"
             << name << mac << ip << port << address << status;

    emit dev_Added(name, mac, ip, port, address, status);
    // 关闭窗口
    this->close();
}

void new_dev_ui::on_dev_cancel_clicked()
{
    this->close();
}

//基础属性get/set
QString new_dev_ui::getName() const{
    return d_name;
}
void new_dev_ui::setName(const QString &name){
    d_name = name;
}
QString new_dev_ui::getMac() const{
    return d_mac;
}
void new_dev_ui::setMac(const QString &mac){
    d_mac = mac;
}
QString new_dev_ui::getIp() const{
    return d_ip;
}
void new_dev_ui::setIp(const QString &ip){
    d_ip = ip;
}
QString new_dev_ui::getPort() const{
    return d_port;
}
void new_dev_ui::setPort(const QString &port){
    d_port = port;
}
QString new_dev_ui::getAddress() const{
    return d_address;
}
void new_dev_ui::setAddress(const QString &address){
    d_address = address;
}
QString new_dev_ui::getStatus() const{
    return d_status;
}
void new_dev_ui::setStatus(const QString &status){
    d_status = status;
}
void new_dev_ui::setDetailWidget(QStringList devData)
{
    ui->dev_add->hide();
    ui->dev_cancel->hide();
    ui->label->setText("设备详情界面");
    this->setWindowTitle("设备详情界面");
    ui->lineEdit->setText(devData[1]);
    ui->lineEdit_2->setText(devData[2]);
    ui->lineEdit_3->setText(devData[3]);
    ui->lineEdit_4->setText(devData[4]);
    ui->lineEdit_5->setText(devData[5]);
    ui->comboBox->clear();
    ui->comboBox->addItem(devData[6]);
}
