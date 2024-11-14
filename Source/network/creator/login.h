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

    QString getLineEditNameText() const;
    QString getLineEditNetworkCountText() const;

signals:
    void sendData(const QString &inputData, int networkCount);

protected:
    void resizeEvent(QResizeEvent *event) override; // 添加 resizeEvent 声明

private slots:
    void on_btn_log_clicked();

private:
    Ui::login *ui;
    QLineEdit *nameEdit;
    QLineEdit *networkCountEdit;
    QPushButton *btn_log;
    QRect frameGeometry;
};

#endif // LOGIN_H
