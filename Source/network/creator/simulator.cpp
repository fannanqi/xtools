#include "simulator.h"
#include "ui_simulator.h"

#include <QDebug>
#include <QMouseEvent>

Simulator::Simulator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Simulator)
{
    ui->setupUi(this);
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
