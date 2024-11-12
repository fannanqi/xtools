#ifndef NEW_DEV_UI_H
#define NEW_DEV_UI_H

#include <QWidget>
#include <QString>
#include "ui_new_dev_ui.h"

class new_dev_ui : public QWidget
{
    Q_OBJECT

public:
    explicit new_dev_ui(QWidget *parent = nullptr);
    new_dev_ui(const QString &name, const QString &mac, const QString &ip, const QString &port, const QString &address, const QString &status);

    // 基础属性get/set
    QString getName() const;
    void setName(const QString &name);
    QString getMac() const;
    void setMac(const QString &mac);
    QString getIp() const;
    void setIp(const QString &ip);
    QString getPort() const;
    void setPort(const QString &port);
    QString getAddress() const;
    void setAddress(const QString &address);
    QString getStatus() const;
    void setStatus(const QString &status);
    void setDetailWidget(QStringList devData);

signals:
    //设备新增数据信号
    void dev_Added(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &);

private slots:
    void on_dev_add_clicked();//点击添加按钮执行
    void on_dev_cancel_clicked();//点击取消按钮执行

private:
    Ui::new_dev_ui *ui;
    //设备基础属性
    QString d_name;
    QString d_mac;
    QString d_ip;
    QString d_port;
    QString d_address;
    QString d_status;
};

#endif // NEW_DEV_UI_H
