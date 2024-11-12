#ifndef NCBELOW_TABLE_H
#define NCBELOW_TABLE_H

#include <QWidget>
#include <QStandardItemModel>
#include <QTableView>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class ncbelow_table;
}

class ncbelow_table : public QWidget
{
    Q_OBJECT

public:
    explicit ncbelow_table(QWidget *parent = nullptr);
    ~ncbelow_table();
    void updataPage();//更新总页码
    void updataPageData();//更新表格数据
    void addLogData(const QVariantList &data);
    void addLogDatas();//初始化表格数据
private slots:
    void on_pushButton_3_clicked();//跳转
    void on_pushButton_clicked();//上一页
    void on_pushButton_2_clicked();//下一页

private:
    Ui::ncbelow_table *ui;
    QList<QVariantList> m_lDatas;//表格数据
    int currentPageSum;//当前页的总数
    int pageSum;//每个页码包含的条数
    int currentPage;//总页数
};

#endif // NCBELOW_TABLE_H
