/********************************************************************************
** Form generated from reading UI file 'xToolsPingAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSPINGASSISTANT_H
#define UI_XTOOLSPINGASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsPingAssistant
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayoutStatusBar;
    QHBoxLayout *horizontalLayoutToolBar;

    void setupUi(QWidget *xToolsPingAssistant)
    {
        if (xToolsPingAssistant->objectName().isEmpty())
            xToolsPingAssistant->setObjectName(QString::fromUtf8("xToolsPingAssistant"));
        xToolsPingAssistant->resize(400, 312);
        xToolsPingAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsPingAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(xToolsPingAssistant);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayoutStatusBar = new QHBoxLayout();
        horizontalLayoutStatusBar->setObjectName(QString::fromUtf8("horizontalLayoutStatusBar"));

        gridLayout->addLayout(horizontalLayoutStatusBar, 2, 0, 1, 1);

        horizontalLayoutToolBar = new QHBoxLayout();
        horizontalLayoutToolBar->setObjectName(QString::fromUtf8("horizontalLayoutToolBar"));

        gridLayout->addLayout(horizontalLayoutToolBar, 0, 0, 1, 1);


        retranslateUi(xToolsPingAssistant);

        QMetaObject::connectSlotsByName(xToolsPingAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsPingAssistant)
    {
        Q_UNUSED(xToolsPingAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsPingAssistant: public Ui_xToolsPingAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSPINGASSISTANT_H
