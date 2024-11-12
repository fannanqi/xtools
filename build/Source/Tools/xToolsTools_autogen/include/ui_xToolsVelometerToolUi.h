/********************************************************************************
** Form generated from reading UI file 'xToolsVelometerToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSVELOMETERTOOLUI_H
#define UI_XTOOLSVELOMETERTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsVelometerToolUi
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelVelocity;

    void setupUi(QWidget *xToolsVelometerToolUi)
    {
        if (xToolsVelometerToolUi->objectName().isEmpty())
            xToolsVelometerToolUi->setObjectName(QString::fromUtf8("xToolsVelometerToolUi"));
        xToolsVelometerToolUi->resize(124, 17);
        xToolsVelometerToolUi->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(xToolsVelometerToolUi);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(xToolsVelometerToolUi);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelVelocity = new QLabel(xToolsVelometerToolUi);
        labelVelocity->setObjectName(QString::fromUtf8("labelVelocity"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelVelocity->sizePolicy().hasHeightForWidth());
        labelVelocity->setSizePolicy(sizePolicy);
        labelVelocity->setText(QString::fromUtf8("0Bytes/s"));

        horizontalLayout->addWidget(labelVelocity);


        retranslateUi(xToolsVelometerToolUi);

        QMetaObject::connectSlotsByName(xToolsVelometerToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsVelometerToolUi)
    {
        xToolsVelometerToolUi->setWindowTitle(QApplication::translate("xToolsVelometerToolUi", "Form", nullptr));
        label->setText(QApplication::translate("xToolsVelometerToolUi", "Velometer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsVelometerToolUi: public Ui_xToolsVelometerToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSVELOMETERTOOLUI_H
