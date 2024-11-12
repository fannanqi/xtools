#ifndef NCRIGHT_TABLE_H
#define NCRIGHT_TABLE_H

#include <QWidget>

namespace Ui {
class ncright_table;
}

class ncright_table : public QWidget
{
    Q_OBJECT

public:
    explicit ncright_table(QWidget *parent = nullptr);
    ~ncright_table();
    void addTableData(QStringList dataList);//添加下一行表格数据
    void clearTableData();//清空表格数据
    void initTableData(QList<QStringList> datas);//初始化表格数据

private:
    Ui::ncright_table *ui;
};

#endif // NCRIGHT_TABLE_H
