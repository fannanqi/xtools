/********************************************************************************
** Form generated from reading UI file 'xlinktablemodeltoolui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XLINKTABLEMODELTOOLUI_H
#define UI_XLINKTABLEMODELTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xLinkTableModelToolUi
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButtonVisible;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonImport;
    QPushButton *pushButtonExport;
    QPushButton *pushButtonAppend;

    void setupUi(QWidget *xLinkTableModelToolUi)
    {
        if (xLinkTableModelToolUi->objectName().isEmpty())
            xLinkTableModelToolUi->setObjectName(QString::fromUtf8("xLinkTableModelToolUi"));
        xLinkTableModelToolUi->resize(500, 383);
        gridLayout = new QGridLayout(xLinkTableModelToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(xLinkTableModelToolUi);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 7);

        pushButtonVisible = new QPushButton(xLinkTableModelToolUi);
        pushButtonVisible->setObjectName(QString::fromUtf8("pushButtonVisible"));

        gridLayout->addWidget(pushButtonVisible, 1, 0, 1, 1);

        pushButtonEdit = new QPushButton(xLinkTableModelToolUi);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));

        gridLayout->addWidget(pushButtonEdit, 1, 1, 1, 1);

        pushButtonClear = new QPushButton(xLinkTableModelToolUi);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 1, 2, 1, 1);

        pushButtonDelete = new QPushButton(xLinkTableModelToolUi);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        gridLayout->addWidget(pushButtonDelete, 1, 3, 1, 1);

        pushButtonImport = new QPushButton(xLinkTableModelToolUi);
        pushButtonImport->setObjectName(QString::fromUtf8("pushButtonImport"));

        gridLayout->addWidget(pushButtonImport, 1, 4, 1, 1);

        pushButtonExport = new QPushButton(xLinkTableModelToolUi);
        pushButtonExport->setObjectName(QString::fromUtf8("pushButtonExport"));

        gridLayout->addWidget(pushButtonExport, 1, 5, 1, 1);

        pushButtonAppend = new QPushButton(xLinkTableModelToolUi);
        pushButtonAppend->setObjectName(QString::fromUtf8("pushButtonAppend"));

        gridLayout->addWidget(pushButtonAppend, 1, 6, 1, 1);


        retranslateUi(xLinkTableModelToolUi);

        QMetaObject::connectSlotsByName(xLinkTableModelToolUi);
    } // setupUi

    void retranslateUi(QWidget *xLinkTableModelToolUi)
    {
        xLinkTableModelToolUi->setWindowTitle(QApplication::translate("xLinkTableModelToolUi", "Form", nullptr));
        pushButtonVisible->setText(QApplication::translate("xLinkTableModelToolUi", "Visible", nullptr));
        pushButtonEdit->setText(QApplication::translate("xLinkTableModelToolUi", "Edit", nullptr));
        pushButtonClear->setText(QApplication::translate("xLinkTableModelToolUi", "Clear", nullptr));
        pushButtonDelete->setText(QApplication::translate("xLinkTableModelToolUi", "Delete", nullptr));
        pushButtonImport->setText(QApplication::translate("xLinkTableModelToolUi", "Import", nullptr));
        pushButtonExport->setText(QApplication::translate("xLinkTableModelToolUi", "Export", nullptr));
        pushButtonAppend->setText(QApplication::translate("xLinkTableModelToolUi", "Append", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xLinkTableModelToolUi: public Ui_xLinkTableModelToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XLINKTABLEMODELTOOLUI_H
