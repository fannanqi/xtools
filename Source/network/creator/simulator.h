#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <QWidget>
#include <QCheckBox>
#include <QMouseEvent>

namespace Ui {
class Simulator;
}

class Simulator : public QWidget
{
    Q_OBJECT

public:
    explicit Simulator(QWidget *parent = nullptr);
    ~Simulator();
    void addChild(QWidget *widget);//添加子类数据

protected:
    void mousePressEvent(QMouseEvent *event) override; // 重写鼠标点击事件

private:
    Ui::Simulator *ui;
};

#endif // SIMULATOR_H
