/********************************************************************************
** Form generated from reading UI file 'xToolsMaskerToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSMASKERTOOLUI_H
#define UI_XTOOLSMASKERTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <xToolsCheckBox.h>
#include <xToolsSpinBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsMaskerToolUi
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    xToolsSpinBox *spinBoxMaskCode;
    xToolsCheckBox *checkBoxEnable;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *xToolsMaskerToolUi)
    {
        if (xToolsMaskerToolUi->objectName().isEmpty())
            xToolsMaskerToolUi->setObjectName(QString::fromUtf8("xToolsMaskerToolUi"));
        xToolsMaskerToolUi->resize(233, 70);
        xToolsMaskerToolUi->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(xToolsMaskerToolUi);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(xToolsMaskerToolUi);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        spinBoxMaskCode = new xToolsSpinBox(groupBox);
        spinBoxMaskCode->setObjectName(QString::fromUtf8("spinBoxMaskCode"));
        spinBoxMaskCode->setMaximum(256);

        gridLayout->addWidget(spinBoxMaskCode, 0, 2, 1, 1);

        checkBoxEnable = new xToolsCheckBox(groupBox);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        gridLayout->addWidget(checkBoxEnable, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(xToolsMaskerToolUi);

        QMetaObject::connectSlotsByName(xToolsMaskerToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsMaskerToolUi)
    {
        groupBox->setTitle(QApplication::translate("xToolsMaskerToolUi", "Masker", nullptr));
        label->setText(QApplication::translate("xToolsMaskerToolUi", "Mask code", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsMaskerToolUi", "Enable", nullptr));
        Q_UNUSED(xToolsMaskerToolUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsMaskerToolUi: public Ui_xToolsMaskerToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSMASKERTOOLUI_H
