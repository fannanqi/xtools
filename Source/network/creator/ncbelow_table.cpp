#include "ncbelow_table.h"
#include "ui_ncbelow_table.h"

ncbelow_table::ncbelow_table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ncbelow_table)
{
    ui->setupUi(this);

    QStringList headList = {"序号", "发送消息总数", "接收消息总数", "错误消息总数", "误信息率",
                             "发送码流总数", "接收码流总数", "错误码元数", "误码率",
                             "丢包率", "信噪比", "上报时间"};
    ui->tableWidget->setColumnCount(headList.size());
    ui->tableWidget->setHorizontalHeaderLabels(headList);

    // 设置表头随表格大小而自动调整
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true); // 使最后一列填满剩余空间
    for (int i = 0; i < headList.size(); ++i) {
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch); // 设置每一列的伸缩方式
    }

    currentPageSum = 10;
    currentPage = 1;

    for (int i = 1; i <= 20; i++) {
        QVariantList varList;
        for (int column = 0; column < 12; ++column) {
            varList.append(i);
        }
        m_lDatas.push_back(varList);
    }

    // 隐藏默认序号
    ui->tableWidget->verticalHeader()->hide();
    // 自动调整行高到内容的最小高度
    ui->tableWidget->resizeRowsToContents();
    // 表格表头颜色
    ui->tableWidget->setStyleSheet(QString(u8"QHeaderView::section{background-color: #121636; color: #FFFFFF; border:1px solid #121636;}"));
    addLogDatas();
}

ncbelow_table::~ncbelow_table()
{
    delete ui;
}

void ncbelow_table::updataPage()
{
    if (m_lDatas.size() <= 10) {
        pageSum = 1;
    }
    if ((m_lDatas.size() % 10) == 0) {
        pageSum = m_lDatas.size() / 10;

    }
    else {
        pageSum = (m_lDatas.size() / 10) + 1;
    }

    ui->label->setText(QString("%1/%2").arg(currentPage).arg(pageSum));
}

void ncbelow_table::updataPageData()
{
    if (currentPage == 0) {
        return;
    }

    //获取具体下标 （当前页号*当前页的总数）-当前页的总数）= 某一页的第一个的具体数据下标
    int index = (currentPage * currentPageSum) - currentPageSum;


    //删除
    for(int row = ui->tableWidget->rowCount() - 1;row >= 0; row--)
    {
        ui->tableWidget->removeRow(row);
    }

    int i = 0;
    for (; index < m_lDatas.size(); ++index) {
        if (index >= (currentPage * currentPageSum)) {
            break;
        }

        int rowcount = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(rowcount);

        QVariantList varList = m_lDatas.at(index);

        for (int j = 0; j < varList.size(); ++j) {
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setData(0, varList.at(j));
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->tableWidget->setItem(i, j, item);
        }
        i++;
    }
}

void ncbelow_table::addLogData(const QVariantList &data)
{
    m_lDatas.append(data);
    updataPageData();
    updataPage();
}

void ncbelow_table::addLogDatas()
{
    //m_lDatas = datas;
    currentPage = 1;
    updataPageData();
    updataPage();
}

void ncbelow_table::on_pushButton_clicked()
{
    //上一页
    if (currentPage == 1) {
        return;
    }

    currentPage--;
    updataPageData();
    updataPage();
}

void ncbelow_table::on_pushButton_2_clicked()
{
    //下一页
    if (currentPage >= pageSum) {
        return;
    }
    currentPage++;
    updataPageData();
    updataPage();
}

void ncbelow_table::on_pushButton_3_clicked()
{
    //跳转
    if (ui->spinBox->value() > pageSum
            || currentPage == ui->spinBox->value()
            || ui->spinBox->value() == 0
            || pageSum == 1) {
        return;
    }
    currentPage = ui->spinBox->value();
    updataPageData();
    updataPage();
}
