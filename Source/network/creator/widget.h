#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QList>
#include <QPointer>
#include <QVector>
#include <QPushButton>
#include <QTableWidget>
#include <QLabel>
#include "login.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel(QWidget *parent = nullptr) : QLabel(parent) {}

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override {
        emit clicked();
        QLabel::mousePressEvent(event);
    }
};

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void setLoginWindow(login *loginWidget);//login界面
    void setLabelColor(QLabel *label, const QColor &color);//设置label颜色
    void setDevLabelColor(const QColor &color);//设置设备标签颜色
    void setParLabelColor(const QColor &color);//设置报文标签颜色
    void setPacLabelColor(const QColor &color);//设置参数标签颜色

    void dev_tb();//设备管理内容填充
    void pac_tb();//报文管理内容填充
    void par_tb();//参数管理内容填充
    void setTableHeader(const QStringList &header); // 新增方法

signals:
    void red_dev();//点击设备管理信号
    void red_pac();//点击报文管理信号
    void red_par();//点击参数管理信号

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
    void removeClosedWindow(QObject *closedWindow);// 当窗口关闭时，从已打开窗口列表中移除它
    void tb_style();//设置样式
    void btn_det_edit_del(int row, int column);//编辑删除，修改，详情按钮
    void finishEditing();//结束编辑并保存更改
    void updateDataContainers();//更新数据容器
    void refreshTable();//重新填充表格

private slots:
    void on_newmgm_clicked();//跳转到对应的新增界面
    void onConfirmed();
    void setupTableWidget();//初始化表格设置
    // 为设备管理添加数据
    void onDev_Added(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &);
    // 为报文管理添加数据
    void onPac_Added(const QString &, const QString &, const QString &, const QString &, const QString &);
    // 为参数管理添加数据
    void onPar_Added(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &);
    void on_searchmgm_clicked();//搜索功能
    void onEditButtonClicked(int row);//修改按钮槽函数
    void onDeleteButtonClicked(int row);//删除按钮槽函数
    void onDetailsButtonClicked(int row);//详情按钮槽函数
    void saveParDataToFile(const QString &filename);//保存参数管理数据到文本文档
    void savePacDataToFile(const QString &filename);//保存报文管理数据到文本文档
    void saveDevDataToFile(const QString &filename);//保存设备管理数据到文本文档
    void loadParDataFromFile(const QString &filename);//从文本文档加载参数数据
    void loadPacDataFromFile(const QString &filename);//从文本文档加载报文数据
    void loadDevDataFromFile(const QString &filename);//从文本文档加载设备数据
    void deleteParData(int row);//删除参数数据
    void deletePacData(int row);//删除报文数据
    void deleteDevData(int row);//删除设备数据
    void editDataContainers(int row);//修改数据
    void ensureDirectoryExists(const QString &dirPath);//辅助函数，确保指定的目录存在

private:
    Ui::Widget *ui;
    login *loginWindow;
    QPixmap *pixDevChecked;
    QPixmap *pixDevUnChecked;
    QPixmap *pixPacChecked;
    QPixmap *pixPacUnChecked;
    QPixmap *pixParChecked;
    QPixmap *pixParUnChecked;
    QColor getLabelTextColor(QLabel *label);
    QList<QWidget*> openedWindows;
    QVector<QStringList> dev_Data;
    QVector<QStringList> pac_Data;
    QVector<QStringList> par_Data;
    bool isEditMode;
    //删除数据并保存
    void removeDataAndSave(int row, QVector<QStringList> &dataContainer, const QString &fileName);
    void updateRowNumbers();//更新行号
    void enableRowEditing(int row);//为指定行的所有单元格启用编辑
};

#endif // WIDGET_H
