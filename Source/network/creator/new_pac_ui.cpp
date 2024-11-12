#include "new_pac_ui.h"
#include "ui_new_pac_ui.h"
#include <QDebug>

new_pac_ui::new_pac_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::new_pac_ui)
{
    ui->setupUi(this);
    this->setWindowTitle("报文新增界面");

    ui->comboBox->addItem("启动");
    ui->comboBox->addItem("停止");
}

void new_pac_ui::on_pac_cancel_clicked()
{
    this->close();
}

void new_pac_ui::on_pac_add_clicked()
{
    qDebug() << "Device add button clicked.";
    QString pac_series = ui->lineEdit->text();
    QString id = ui->lineEdit_2->text();
    QString name = ui->lineEdit_3->text();
    QString data = ui->lineEdit_4->text();
    QString status = ui->comboBox->currentText();

    qDebug() << "Emitting pac_Added signal with data:"
             << pac_series << id << name << data << status;

    emit pac_Added(pac_series, id, name, data, status);

    // 关闭窗口
    this->close();
}

// 基础属性get/set
QString new_pac_ui::getPac_series() const {
    return c_pac_series;
}
void new_pac_ui::setPac_series(const QString &pac_series) {
    c_pac_series = pac_series;
}

QString new_pac_ui::getId() const {
    return c_id;
}
void new_pac_ui::setId(const QString &id) {
    c_id = id;
}

QString new_pac_ui::getName() const {
    return c_name;
}
void new_pac_ui::setName(const QString &name) {
    c_name = name;
}

QString new_pac_ui::getData() const {
    return c_data;
}
void new_pac_ui::setData(const QString &data) {
    c_data = data;
}

QString new_pac_ui::getStatus() const {
    return c_status;
}
void new_pac_ui::setStatus(const QString &status) {
    c_status = status;
}
void new_pac_ui::setDetailWidget(QStringList pacData)
{
    ui->pac_add->hide();
    ui->pac_cancel->hide();
    ui->label->setText("报文详情界面");
    this->setWindowTitle("报文详情界面");
    ui->lineEdit->setText(pacData[1]);
    ui->lineEdit_2->setText(pacData[2]);
    ui->lineEdit_3->setText(pacData[3]);
    ui->lineEdit_4->setText(pacData[4]);
    ui->comboBox->clear();
    ui->comboBox->addItem(pacData[5]);
}
