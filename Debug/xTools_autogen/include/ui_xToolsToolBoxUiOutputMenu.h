/********************************************************************************
** Form generated from reading UI file 'xToolsToolBoxUiOutputMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSTOOLBOXUIOUTPUTMENU_H
#define UI_XTOOLSTOOLBOXUIOUTPUTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsToolBoxUiOutputMenu
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *keyword;
    QLabel *label;
    QLineEdit *filter;

    void setupUi(QWidget *xToolsToolBoxUiOutputMenu)
    {
        if (xToolsToolBoxUiOutputMenu->objectName().isEmpty())
            xToolsToolBoxUiOutputMenu->setObjectName(QString::fromUtf8("xToolsToolBoxUiOutputMenu"));
        xToolsToolBoxUiOutputMenu->resize(236, 114);
        gridLayout = new QGridLayout(xToolsToolBoxUiOutputMenu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(xToolsToolBoxUiOutputMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        keyword = new QLineEdit(xToolsToolBoxUiOutputMenu);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setClearButtonEnabled(true);

        gridLayout->addWidget(keyword, 3, 0, 1, 1);

        label = new QLabel(xToolsToolBoxUiOutputMenu);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        filter = new QLineEdit(xToolsToolBoxUiOutputMenu);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setClearButtonEnabled(true);

        gridLayout->addWidget(filter, 1, 0, 1, 1);


        retranslateUi(xToolsToolBoxUiOutputMenu);

        QMetaObject::connectSlotsByName(xToolsToolBoxUiOutputMenu);
    } // setupUi

    void retranslateUi(QWidget *xToolsToolBoxUiOutputMenu)
    {
        xToolsToolBoxUiOutputMenu->setWindowTitle(QApplication::translate("xToolsToolBoxUiOutputMenu", "Form", nullptr));
        label_2->setText(QApplication::translate("xToolsToolBoxUiOutputMenu", "Filter", nullptr));
        keyword->setPlaceholderText(QApplication::translate("xToolsToolBoxUiOutputMenu", "Such as:hello;world", nullptr));
        label->setText(QApplication::translate("xToolsToolBoxUiOutputMenu", "High light key words(separator is' ;')", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsToolBoxUiOutputMenu: public Ui_xToolsToolBoxUiOutputMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSTOOLBOXUIOUTPUTMENU_H
