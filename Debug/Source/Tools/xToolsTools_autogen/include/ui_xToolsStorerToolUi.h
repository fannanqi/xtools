/********************************************************************************
** Form generated from reading UI file 'xToolsStorerToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSTORERTOOLUI_H
#define UI_XTOOLSSTORERTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <xToolsCheckBox.h>
#include "xToolsLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_xToolsStorerToolUi
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    xToolsCheckBox *checkBoxEnable;
    xToolsCheckBox *checkBoxRx;
    xToolsCheckBox *checkBoxTx;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSelectFile;
    xToolsLineEdit *lineEditStorerPath;

    void setupUi(QWidget *xToolsStorerToolUi)
    {
        if (xToolsStorerToolUi->objectName().isEmpty())
            xToolsStorerToolUi->setObjectName(QString::fromUtf8("xToolsStorerToolUi"));
        xToolsStorerToolUi->resize(327, 96);
        xToolsStorerToolUi->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsStorerToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(xToolsStorerToolUi);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxEnable = new xToolsCheckBox(groupBox_5);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        horizontalLayout->addWidget(checkBoxEnable);

        checkBoxRx = new xToolsCheckBox(groupBox_5);
        checkBoxRx->setObjectName(QString::fromUtf8("checkBoxRx"));

        horizontalLayout->addWidget(checkBoxRx);

        checkBoxTx = new xToolsCheckBox(groupBox_5);
        checkBoxTx->setObjectName(QString::fromUtf8("checkBoxTx"));

        horizontalLayout->addWidget(checkBoxTx);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonSelectFile = new QPushButton(groupBox_5);
        pushButtonSelectFile->setObjectName(QString::fromUtf8("pushButtonSelectFile"));

        horizontalLayout->addWidget(pushButtonSelectFile);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        lineEditStorerPath = new xToolsLineEdit(groupBox_5);
        lineEditStorerPath->setObjectName(QString::fromUtf8("lineEditStorerPath"));
        lineEditStorerPath->setMinimumSize(QSize(230, 0));
        lineEditStorerPath->setText(QString::fromUtf8(""));
        lineEditStorerPath->setReadOnly(true);

        gridLayout_2->addWidget(lineEditStorerPath, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);


        retranslateUi(xToolsStorerToolUi);

        QMetaObject::connectSlotsByName(xToolsStorerToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsStorerToolUi)
    {
        groupBox_5->setTitle(QApplication::translate("xToolsStorerToolUi", "Storer", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsStorerToolUi", "Enable", nullptr));
        checkBoxRx->setText(QApplication::translate("xToolsStorerToolUi", "Save rx", nullptr));
        checkBoxTx->setText(QApplication::translate("xToolsStorerToolUi", "Save tx", nullptr));
        pushButtonSelectFile->setText(QApplication::translate("xToolsStorerToolUi", "Browser", nullptr));
        Q_UNUSED(xToolsStorerToolUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsStorerToolUi: public Ui_xToolsStorerToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSTORERTOOLUI_H
