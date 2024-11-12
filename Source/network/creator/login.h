#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <Qstring>
#include <QLineEdit>
#include <QPushButton>
//#include "ui_login.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

    QString getLineEditNameText() const;//获取场景名称
    QString getLineEditNetworkCountText() const;//获取网络数

signals:
    void sendData(const QString &inputData, int networkCount);//发送场景、网络数信号

protected:
    void resizeEvent(QResizeEvent *event) override; // 添加 resizeEvent 声明

private slots:
    void on_btn_log_clicked();//点击确认按钮执行

private:
    Ui::login *ui;
    QLineEdit *nameEdit;
    QLineEdit *networkCountEdit;
    QPushButton *btn_log;
    QRect frameGeometry;
};

#endif // LOGIN_H
