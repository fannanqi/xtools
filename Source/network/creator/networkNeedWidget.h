#ifndef NETWORKNEEDWIDGET_H
#define NETWORKNEEDWIDGET_H

#include <QWidget>
#include <QStackedWidget>

class networkNeedWidget : public QWidget
{
    Q_OBJECT
public:
    explicit networkNeedWidget(QWidget *parent = nullptr);
    static QStackedWidget* initNetworkWidget();//创建网规网管-初始化
    static void clearNetworkWidget(QStackedWidget* stackedWidget);//创建网规网管-第二次
    static void resetWidget(QWidget* widget);

};

#endif // NETWORKNEEDWIDGET_H
