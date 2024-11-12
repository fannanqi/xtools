/********************************************************************************
** Form generated from reading UI file 'xToolsTableModelToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSTABLEMODELTOOLUI_H
#define UI_XTOOLSTABLEMODELTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsTableModelToolUi
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonExport;
    QPushButton *pushButtonImport;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonAppend;
    QPushButton *pushButtonClear;
    QTableView *tableView;
    QPushButton *pushButtonVisible;
    QPushButton *pushButtonEdit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *xToolsTableModelToolUi)
    {
        if (xToolsTableModelToolUi->objectName().isEmpty())
            xToolsTableModelToolUi->setObjectName(QString::fromUtf8("xToolsTableModelToolUi"));
        xToolsTableModelToolUi->resize(620, 300);
        gridLayout = new QGridLayout(xToolsTableModelToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonExport = new QPushButton(xToolsTableModelToolUi);
        pushButtonExport->setObjectName(QString::fromUtf8("pushButtonExport"));

        gridLayout->addWidget(pushButtonExport, 1, 6, 1, 1);

        pushButtonImport = new QPushButton(xToolsTableModelToolUi);
        pushButtonImport->setObjectName(QString::fromUtf8("pushButtonImport"));

        gridLayout->addWidget(pushButtonImport, 1, 5, 1, 1);

        pushButtonDelete = new QPushButton(xToolsTableModelToolUi);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        gridLayout->addWidget(pushButtonDelete, 1, 4, 1, 1);

        pushButtonAppend = new QPushButton(xToolsTableModelToolUi);
        pushButtonAppend->setObjectName(QString::fromUtf8("pushButtonAppend"));

        gridLayout->addWidget(pushButtonAppend, 1, 7, 1, 1);

        pushButtonClear = new QPushButton(xToolsTableModelToolUi);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 1, 3, 1, 1);

        tableView = new QTableView(xToolsTableModelToolUi);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 8);

        pushButtonVisible = new QPushButton(xToolsTableModelToolUi);
        pushButtonVisible->setObjectName(QString::fromUtf8("pushButtonVisible"));

        gridLayout->addWidget(pushButtonVisible, 1, 0, 1, 1);

        pushButtonEdit = new QPushButton(xToolsTableModelToolUi);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));

        gridLayout->addWidget(pushButtonEdit, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);


        retranslateUi(xToolsTableModelToolUi);

        QMetaObject::connectSlotsByName(xToolsTableModelToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsTableModelToolUi)
    {
        xToolsTableModelToolUi->setWindowTitle(QApplication::translate("xToolsTableModelToolUi", "Form", nullptr));
        pushButtonExport->setText(QApplication::translate("xToolsTableModelToolUi", "Export", nullptr));
        pushButtonImport->setText(QApplication::translate("xToolsTableModelToolUi", "Import", nullptr));
        pushButtonDelete->setText(QApplication::translate("xToolsTableModelToolUi", "Delete", nullptr));
        pushButtonAppend->setText(QApplication::translate("xToolsTableModelToolUi", "Append", nullptr));
        pushButtonClear->setText(QApplication::translate("xToolsTableModelToolUi", "Clear", nullptr));
        pushButtonVisible->setText(QApplication::translate("xToolsTableModelToolUi", "Visible", nullptr));
        pushButtonEdit->setText(QApplication::translate("xToolsTableModelToolUi", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsTableModelToolUi: public Ui_xToolsTableModelToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSTABLEMODELTOOLUI_H
