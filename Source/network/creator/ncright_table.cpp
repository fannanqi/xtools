#include "ncright_table.h"
#include "ui_ncright_table.h"
#include <QStandardItemModel>
#include <QDebug>

ncright_table::ncright_table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ncright_table)
{
    ui->setupUi(this);
    // 创建模型
    QStandardItemModel *model = new QStandardItemModel(0,3); // 10行3列
    QStringList headList={"时间","消息","内容"};
    for(int i=0;i<headList.count();i++)
    {
        model->setHeaderData(i, Qt::Horizontal, headList[i]);
    }
    ui->tableView->setModel(model);
    //隐藏默认序号
    ui->tableView->verticalHeader()->hide();
    // 自动调整标题列宽以适合内容
//    ui->tableView->resizeColumnToContents(0);
    // 自动调整行高到内容的最小高度
    ui->tableView->resizeRowsToContents();
    //表格表头颜色
    ui->tableView->setStyleSheet(QString(u8"QHeaderView::section{color: #FFFFFF; border:1px solid #121636;}"));
}

ncright_table::~ncright_table()
{
    delete ui;
}

void ncright_table::addTableData(QStringList dataList) {
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model) {
        int row = model->rowCount();
        for (int column = 0; column < 3; ++column) {

            QStandardItem *item = new QStandardItem(dataList[column]);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(row, column, item);
        }
    }
}
void ncright_table::clearTableData() {
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model) {
        model->clear();
        model->setColumnCount(3);
        QStringList headList={"时间","消息","内容"};
        for(int i=0;i<headList.count();i++)
        {
            model->setHeaderData(i, Qt::Horizontal, headList[i]);
        }
    }
}
void ncright_table::initTableData(QList<QStringList> datas) {
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model) {
        model->clear();
        model->setColumnCount(3);
        QStringList headList={"时间","消息","内容"};
        for(int i=0;i<headList.count();i++)
        {
            model->setHeaderData(i, Qt::Horizontal, headList[i]);
        }
        for(int i =0;i < datas.size();i++) {
            for (int column = 0; column < 3; ++column) {
                QStandardItem *item = new QStandardItem(datas[i][column]);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(i, column, item);
            }
        }
    }
}
