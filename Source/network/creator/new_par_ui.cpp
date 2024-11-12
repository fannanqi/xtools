#include "new_par_ui.h"
#include "ui_new_par_ui.h"
#include <QDebug>

new_par_ui::new_par_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::new_par_ui)
{
    ui->setupUi(this);
    this->setWindowTitle("参数新增界面");
    ui->comboBox->addItem("启动");
    ui->comboBox->addItem("停止");
}

void new_par_ui::on_par_add_clicked()
{
    qDebug() << "Device add button clicked.";
    QString par_series = ui->lineEdit->text();
    QString id = ui->lineEdit_2->text();
    QString name = ui->lineEdit_3->text();
    QString bit = ui->lineEdit_4->text();
    QString data_series = ui->lineEdit_5->text();
    QString choices = ui->lineEdit_6->text();
    QString def = ui->lineEdit_7->text();
    QString status = ui->comboBox->currentText();
    QString note = ui->lineEdit_8->text();

    qDebug() << "Emitting par_Added signal with data:"
             << par_series << id << name << bit << data_series << choices << def << status << note;

    emit par_Added(par_series, id, name, bit, data_series, choices, def, status, note);

    // 关闭窗口
    this->close();
}

void new_par_ui::on_par_cancel_clicked()
{
    this->close();
}

// 基础属性get/set
QString new_par_ui::getPar_series() const {
    return m_par_series;
}
void new_par_ui::setPar_series(const QString &par_series) {
    m_par_series = par_series;
}

QString new_par_ui::getId() const {
    return m_id;
}
void new_par_ui::setId(const QString &id) {
    m_id = id;
}

QString new_par_ui::getName() const {
    return m_name;
}
void new_par_ui::setName(const QString &name) {
    m_name = name;
}

QString new_par_ui::getBit() const {
    return m_bit;
}
void new_par_ui::setBit(const QString &bit) {
    m_bit = bit;
}

QString new_par_ui::getData_series() const {
    return m_data_series;
}
void new_par_ui::setData_series(const QString &data_series) {
    m_data_series = data_series;
}

QString new_par_ui::getChoices() const {
    return m_choices;
}
void new_par_ui::setChoices(const QString &choices) {
    m_choices = choices;
}

QString new_par_ui::getDef() const {
    return m_def;
}
void new_par_ui::setDef(const QString &def) {
    m_def = def;
}

QString new_par_ui::getStatus() const {
    return m_status;
}
void new_par_ui::setStatus(const QString &status) {
    m_status = status;
}

QString new_par_ui::getNote() const {
    return m_note;
}
void new_par_ui::setNote(const QString &note) {
    m_note = note;
}
void new_par_ui::setDetailWidget(QStringList parData)
{
    ui->par_add->hide();
    ui->par_cancel->hide();
    ui->label->setText("参数详情界面");
    this->setWindowTitle("参数详情界面");
    ui->lineEdit->setText(parData[1]);
    ui->lineEdit_2->setText(parData[2]);
    ui->lineEdit_3->setText(parData[3]);
    ui->lineEdit_4->setText(parData[4]);
    ui->lineEdit_5->setText(parData[5]);
    ui->lineEdit_6->setText(parData[6]);
    ui->lineEdit_7->setText(parData[7]);
    ui->comboBox->clear();
    ui->comboBox->addItem(parData[8]);
    ui->lineEdit_8->setText(parData[9]);
}
