#ifndef NEW_PAC_UI_H
#define NEW_PAC_UI_H

#include <QWidget>
#include <QString>
#include "ui_new_pac_ui.h"

namespace Ui {
class new_pac_ui;
}

class new_pac_ui : public QWidget
{
    Q_OBJECT

public:
    explicit new_pac_ui(QWidget *parent = nullptr);
    new_pac_ui(const QString &pac_series, const QString &id, const QString &name, const QString &data, const QString &status);


    // 基础属性get/set
    QString getPac_series() const;
    void setPac_series(const QString &pac_series);
    QString getId() const;
    void setId(const QString &id);
    QString getName() const;
    void setName(const QString &name);
    QString getData() const;
    void setData(const QString &data);
    QString getStatus() const;
    void setStatus(const QString &status);
    void setDetailWidget(QStringList pacData);

signals:
    //报文新增数据信号
    void pac_Added(const QString &, const QString &, const QString &, const QString &, const QString &);


private slots:
    void on_pac_add_clicked();//点击添加按钮执行
    void on_pac_cancel_clicked();//点击取消按钮执行

private:
    Ui::new_pac_ui *ui;
    // 设备基础属性
    QString c_pac_series;
    QString c_id;
    QString c_name;
    QString c_data;
    QString c_status;
};

#endif // NEW_PAC_UI_H
