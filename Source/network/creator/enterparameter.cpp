#include "enterparameter.h"
#include "ui_enterparameter.h"
#include <QDebug>

Enterparameter::Enterparameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Enterparameter),
    buttonGroup1(new QButtonGroup(this)),
    buttonGroup2(new QButtonGroup(this))
{
    ui->setupUi(this);
//    control = new maincontrol;
    setComboBoxEditable(true);
    setLineEditPlaceholderTexts();

    QPushButton *PushButton5 = ui->pushButton5;
    QPushButton *PushButton6 = ui->pushButton6;
    QPushButton *PushButton7 = ui->pushButton7;
    QPushButton *PushButton8 = ui->pushButton8;

    PushButton5->setCheckable(true);
    PushButton6->setCheckable(true);
    PushButton7->setCheckable(true);
    PushButton8->setCheckable(true);

    buttonGroup1->addButton(PushButton5, 0);
    buttonGroup1->addButton(PushButton6, 1);
    buttonGroup1->setExclusive(true);

    buttonGroup2->addButton(PushButton7, 0);
    buttonGroup2->addButton(PushButton8, 1);
    buttonGroup2->setExclusive(true);

    // 可选：设置初始选中状态
    PushButton5->setChecked(true);  // 初始时选中入网
    PushButton7->setChecked(true);  // 初始时选中启动

    connect(buttonGroup1, QOverload<int>::of(&QButtonGroup::buttonClicked), this, &Enterparameter::onButtonGroup1Clicked);
    connect(buttonGroup2, QOverload<int>::of(&QButtonGroup::buttonClicked), this, &Enterparameter::onButtonGroup2Clicked);
}

Enterparameter::~Enterparameter() {
    delete ui;
//    delete control;
}

void Enterparameter::setComboBoxEditable(bool editable) {
    ui->comboBox1->setEditable(editable);
    ui->comboBox2->setEditable(editable);
    ui->comboBox3->setEnabled(editable);
    ui->comboBox4->setEditable(editable);
    ui->comboBox5->setEditable(editable);
    ui->comboBox6->setEditable(editable);
}

void Enterparameter::setLineEditPlaceholderTexts() {
    ui->lineEdit1->setPlaceholderText("请输入");
    ui->lineEdit2->setPlaceholderText("请输入");
    ui->lineEdit8->setPlaceholderText("(1-100000)");
}

void Enterparameter::onButtonGroup1Clicked(int id)
{
    // 根据按钮ID处理按钮点击事件
    switch (id) {
        case 0:
            qDebug() << "pushButton5 (ID: 0) clicked - 控制站";
            break;
        case 1:
            qDebug() << "pushButton6 (ID: 1) clicked - 受控站";
            break;
        default:
            qDebug() << "未知按钮被点击。";
            break;
    }
}

void Enterparameter::onButtonGroup2Clicked(int id)
{
    // 根据按钮ID处理按钮点击事件
    switch (id) {
        case 0:
            qDebug() << "pushButton7 (ID: 0) clicked - 启动";
            break;
        case 1:
            qDebug() << "pushButton8 (ID: 1) clicked - 暂停";
            break;
        default:
            qDebug() << "未知按钮被点击。";
            break;
    }
}

void Enterparameter::setContent(const QStringList &data) {
    if (data.size() >= 15) {
        ui->lineEdit1->setText(data[0]);
        ui->comboBox1->setCurrentText(data[1]);
        ui->comboBox2->setCurrentText(data[2]);
//        ui->comboBox3->setCurrentText(data[3]);
        ui->comboBox3->setDateTime(QDateTime::fromString(data[3], "yyyy-MM-dd hh:mm:ss"));
        ui->comboBox4->setCurrentText(data[4]);
        ui->lineEdit2->setText(data[5]);
        ui->comboBox5->setCurrentText(data[6]);
        ui->comboBox6->setCurrentText(data[7]);
        ui->lineEdit3->setText(data[8]);
        ui->lineEdit4->setText(data[9]);
        ui->lineEdit5->setText(data[10]);
        ui->lineEdit6->setText(data[11]);
        ui->lineEdit7->setText(data[12]);
        ui->plainTextEdit->setPlainText(data[13]);
        ui->lineEdit8->setText(data[14]);
    }
}

QStringList Enterparameter::getInputData() const {
    QStringList data = {
        ui->lineEdit1->text(),
        ui->comboBox1->currentText(),
        ui->comboBox2->currentText(),
//        ui->comboBox3->currentText(),
        ui->comboBox3->dateTime().toString("yyyy-MM-dd HH:mm:ss"),
        ui->comboBox4->currentText(),
        ui->lineEdit2->text(),
        ui->comboBox5->currentText(),
        ui->comboBox6->currentText(),
        ui->lineEdit3->text(),
        ui->lineEdit4->text(),
        ui->lineEdit5->text(),
        ui->lineEdit6->text(),
        ui->lineEdit7->text(),
        ui->plainTextEdit->toPlainText(),
        ui->lineEdit8->text()
    };
    return data;
}

QString Enterparameter::getItemName() const {
    return ui->lineEdit1->text();
}

QStringList Enterparameter::getContentData() const {
    QStringList data = getInputData();
    QString selectedButtonText1 = buttonGroup1->checkedButton() ? buttonGroup1->checkedButton()->text() : "No button selected";
    QString selectedButtonText2 = buttonGroup2->checkedButton() ? buttonGroup2->checkedButton()->text() : "No button selected";

    data << selectedButtonText1 << selectedButtonText2;
    return data;
}

void Enterparameter::SaveButtonClicked() {
    QStringList data = getInputData();
    QString selectedButtonText1 = buttonGroup1->checkedButton() ? buttonGroup1->checkedButton()->text() : "No button selected";
    QString selectedButtonText2 = buttonGroup2->checkedButton() ? buttonGroup2->checkedButton()->text() : "No button selected";

    data << selectedButtonText1 << selectedButtonText2;
    emit dataReady(data);
}
