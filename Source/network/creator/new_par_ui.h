#ifndef NEW_PAR_UI_H
#define NEW_PAR_UI_H

#include <QWidget>
#include <QString>
#include "ui_new_par_ui.h"

namespace Ui {
class new_par_ui;
}

class new_par_ui : public QWidget
{
    Q_OBJECT

public:
    explicit new_par_ui(QWidget *parent = nullptr);
    new_par_ui(const QString &par_series, const QString &id, const QString &name,
               const QString &bit, const QString &data_series, const QString &choices,
               const QString &def, const QString &status, const QString &note);

    // 基础属性get/set
    QString getPar_series() const;
    void setPar_series(const QString &par_series);
    QString getId() const;
    void setId(const QString &id);
    QString getName() const;
    void setName(const QString &name);
    QString getBit() const;
    void setBit(const QString &bit);
    QString getData_series() const;
    void setData_series(const QString &data_series);
    QString getChoices() const;
    void setChoices(const QString &choices);
    QString getDef() const;
    void setDef(const QString &def);
    QString getStatus() const;
    void setStatus(const QString &status);
    QString getNote() const;
    void setNote(const QString &note);
    void setDetailWidget(QStringList parData);

signals:
    //参数新增数据信号
    void par_Added(const QString &, const QString &, const QString &,
                   const QString &, const QString &, const QString &,
                   const QString &, const QString &, const QString &);

private slots:
    void on_par_add_clicked();//点击添加按钮执行
    void on_par_cancel_clicked();//点击取消按钮执行

private:
    Ui::new_par_ui *ui;
    // 基础属性
    QString m_par_series;
    QString m_id;
    QString m_name;
    QString m_bit;
    QString m_data_series;
    QString m_choices;
    QString m_def;
    QString m_status;
    QString m_note;
};

#endif // NEW_PAR_UI_H
