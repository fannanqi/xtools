/********************************************************************************
** Form generated from reading UI file 'xToolsToolBoxUiCommunicationMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSTOOLBOXUICOMMUNICATIONMENU_H
#define UI_XTOOLSTOOLBOXUICOMMUNICATIONMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include <xToolsStorerToolUi.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsToolBoxUiCommunicationMenu
{
public:
    QGridLayout *gridLayout;
    xToolsStorerToolUi *widgetStorer;

    void setupUi(QWidget *xToolsToolBoxUiCommunicationMenu)
    {
        if (xToolsToolBoxUiCommunicationMenu->objectName().isEmpty())
            xToolsToolBoxUiCommunicationMenu->setObjectName(QString::fromUtf8("xToolsToolBoxUiCommunicationMenu"));
        xToolsToolBoxUiCommunicationMenu->resize(566, 287);
        gridLayout = new QGridLayout(xToolsToolBoxUiCommunicationMenu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widgetStorer = new xToolsStorerToolUi(xToolsToolBoxUiCommunicationMenu);
        widgetStorer->setObjectName(QString::fromUtf8("widgetStorer"));

        gridLayout->addWidget(widgetStorer, 1, 0, 1, 2);


        retranslateUi(xToolsToolBoxUiCommunicationMenu);

        QMetaObject::connectSlotsByName(xToolsToolBoxUiCommunicationMenu);
    } // setupUi

    void retranslateUi(QWidget *xToolsToolBoxUiCommunicationMenu)
    {
        xToolsToolBoxUiCommunicationMenu->setWindowTitle(QApplication::translate("xToolsToolBoxUiCommunicationMenu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsToolBoxUiCommunicationMenu: public Ui_xToolsToolBoxUiCommunicationMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSTOOLBOXUICOMMUNICATIONMENU_H
