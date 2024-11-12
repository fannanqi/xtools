/********************************************************************************
** Form generated from reading UI file 'ncright_table.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NCRIGHT_TABLE_H
#define UI_NCRIGHT_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ncright_table
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *ncright_table)
    {
        if (ncright_table->objectName().isEmpty())
            ncright_table->setObjectName(QString::fromUtf8("ncright_table"));
        ncright_table->resize(400, 300);
        ncright_table->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(ncright_table);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(ncright_table);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(ncright_table);

        QMetaObject::connectSlotsByName(ncright_table);
    } // setupUi

    void retranslateUi(QWidget *ncright_table)
    {
        ncright_table->setWindowTitle(QApplication::translate("ncright_table", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ncright_table: public Ui_ncright_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NCRIGHT_TABLE_H
