#include "simulator.h"
#include "ui_simulator.h"

#include <QDebug>
#include <QMouseEvent>
#include<QVBoxLayout>
#include<QGroupBox>
#include<QSize>
Simulator::Simulator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Simulator)
{
    ui->setupUi(this);
    checkBoxGroup=new QGroupBox;
    centLayout=new QVBoxLayout(this);
    ui->widget->setMinimumWidth(600);
    ui->widget->setMaximumHeight(180);
    centLayout->addWidget(ui->widget);
    gridBoxLayout = new QGridLayout(checkBoxGroup);
    gridBoxLayout->addWidget(ui->checkBox1,0,0);
    gridBoxLayout->addWidget(ui->checkBox2,0,1);
    gridBoxLayout->addWidget(ui->checkBox3,0,2);
    gridBoxLayout->addWidget(ui->checkBox4,0,3);
    gridBoxLayout->addWidget(ui->checkBox5,0,4);
    gridBoxLayout->addWidget(ui->checkBox6,0,5);
    gridBoxLayout->addWidget(ui->checkBox7,1,0);
    gridBoxLayout->addWidget(ui->checkBox8,1,1);
    gridBoxLayout->addWidget(ui->checkBox9,1,2);
    gridBoxLayout->addWidget(ui->checkBox10,1,3);
    gridBoxLayout->addWidget(ui->checkBox11,1,4);
    gridBoxLayout->addWidget(ui->checkBox12,1,5);
    centLayout->addWidget(checkBoxGroup);
}
Simulator::~Simulator()
{
    delete ui;
}

void Simulator::addChild(QWidget *widget) {
    widget->setParent(this);
    widget->show();
}

void Simulator::mousePressEvent(QMouseEvent *event) {
    // 查找并切换复选框状态
    QList<QCheckBox *> checkBoxes = findChildren<QCheckBox *>();
    for (QCheckBox *checkBox : checkBoxes) {
        if (checkBox->geometry().contains(event->pos())) { // 检查点击位置是否在复选框范围内
            checkBox->setChecked(!checkBox->isChecked()); // 切换复选框状态
            break; // 找到第一个复选框后退出
        }
    }
}

void Simulator::resizeEvent(QResizeEvent *event)
{
    QSize windowSize=event->size();
    qDebug()<<"当前width:"<<windowSize.width()<<",当前height："<<windowSize.height();
    // ui->widget->resize(windowSize.width(),windowSize.height()/5);
    // checkBoxGroup->resize(windowSize.width(),windowSize.height()/5*4);
}
