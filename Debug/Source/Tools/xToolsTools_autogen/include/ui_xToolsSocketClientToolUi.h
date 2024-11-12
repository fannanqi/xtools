/********************************************************************************
** Form generated from reading UI file 'xToolsSocketClientToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSOCKETCLIENTTOOLUI_H
#define UI_XTOOLSSOCKETCLIENTTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <xToolsCheckBox.h>
#include <xToolsIpComboBox.h>
#include <xToolsSpinBox.h>
#include <xToolsWebSocketMessageTypeComboBox.h>
#include "xToolsLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_xToolsSocketClientToolUi
{
public:
    QGridLayout *gridLayout;
    xToolsSpinBox *spinBoxClientPort;
    xToolsIpComboBox *comboBoxServerAddress;
    xToolsWebSocketMessageTypeComboBox *comboBoxMessageType;
    QFrame *line;
    QLabel *label;
    QLabel *labelMessageType;
    QLabel *label_4;
    QWidget *widgetAuthentication;
    QGridLayout *gridLayout_4;
    xToolsCheckBox *checkBoxAuthentication;
    xToolsLineEdit *lineEditUserName;
    QLabel *label_6;
    QLabel *label_7;
    xToolsLineEdit *lineEditPassword;
    QLabel *label_2;
    xToolsSpinBox *spinBoxServerPort;
    xToolsIpComboBox *comboBoxClientAddress;
    QLabel *label_3;

    void setupUi(QWidget *xToolsSocketClientToolUi)
    {
        if (xToolsSocketClientToolUi->objectName().isEmpty())
            xToolsSocketClientToolUi->setObjectName(QString::fromUtf8("xToolsSocketClientToolUi"));
        xToolsSocketClientToolUi->resize(144, 235);
        xToolsSocketClientToolUi->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsSocketClientToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBoxClientPort = new xToolsSpinBox(xToolsSocketClientToolUi);
        spinBoxClientPort->setObjectName(QString::fromUtf8("spinBoxClientPort"));
        spinBoxClientPort->setMaximum(65535);
        spinBoxClientPort->setValue(44444);

        gridLayout->addWidget(spinBoxClientPort, 2, 1, 1, 1);

        comboBoxServerAddress = new xToolsIpComboBox(xToolsSocketClientToolUi);
        comboBoxServerAddress->setObjectName(QString::fromUtf8("comboBoxServerAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxServerAddress->sizePolicy().hasHeightForWidth());
        comboBoxServerAddress->setSizePolicy(sizePolicy);
        comboBoxServerAddress->setEditable(true);
        comboBoxServerAddress->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBoxServerAddress, 9, 1, 1, 1);

        comboBoxMessageType = new xToolsWebSocketMessageTypeComboBox(xToolsSocketClientToolUi);
        comboBoxMessageType->setObjectName(QString::fromUtf8("comboBoxMessageType"));
        comboBoxMessageType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBoxMessageType, 3, 1, 1, 1);

        line = new QFrame(xToolsSocketClientToolUi);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 2);

        label = new QLabel(xToolsSocketClientToolUi);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelMessageType = new QLabel(xToolsSocketClientToolUi);
        labelMessageType->setObjectName(QString::fromUtf8("labelMessageType"));
        sizePolicy1.setHeightForWidth(labelMessageType->sizePolicy().hasHeightForWidth());
        labelMessageType->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelMessageType, 3, 0, 1, 1);

        label_4 = new QLabel(xToolsSocketClientToolUi);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 10, 0, 1, 1);

        widgetAuthentication = new QWidget(xToolsSocketClientToolUi);
        widgetAuthentication->setObjectName(QString::fromUtf8("widgetAuthentication"));
        gridLayout_4 = new QGridLayout(widgetAuthentication);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxAuthentication = new xToolsCheckBox(widgetAuthentication);
        checkBoxAuthentication->setObjectName(QString::fromUtf8("checkBoxAuthentication"));

        gridLayout_4->addWidget(checkBoxAuthentication, 0, 1, 1, 2);

        lineEditUserName = new xToolsLineEdit(widgetAuthentication);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditUserName->sizePolicy().hasHeightForWidth());
        lineEditUserName->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(lineEditUserName, 1, 2, 1, 1);

        label_6 = new QLabel(widgetAuthentication);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(widgetAuthentication);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 2, 1, 1, 1);

        lineEditPassword = new xToolsLineEdit(widgetAuthentication);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        sizePolicy2.setHeightForWidth(lineEditPassword->sizePolicy().hasHeightForWidth());
        lineEditPassword->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(lineEditPassword, 2, 2, 1, 1);


        gridLayout->addWidget(widgetAuthentication, 4, 0, 1, 2);

        label_2 = new QLabel(xToolsSocketClientToolUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinBoxServerPort = new xToolsSpinBox(xToolsSocketClientToolUi);
        spinBoxServerPort->setObjectName(QString::fromUtf8("spinBoxServerPort"));
        spinBoxServerPort->setMaximum(65535);
        spinBoxServerPort->setSingleStep(1);
        spinBoxServerPort->setValue(55555);

        gridLayout->addWidget(spinBoxServerPort, 10, 1, 1, 1);

        comboBoxClientAddress = new xToolsIpComboBox(xToolsSocketClientToolUi);
        comboBoxClientAddress->setObjectName(QString::fromUtf8("comboBoxClientAddress"));
        sizePolicy.setHeightForWidth(comboBoxClientAddress->sizePolicy().hasHeightForWidth());
        comboBoxClientAddress->setSizePolicy(sizePolicy);
        comboBoxClientAddress->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBoxClientAddress, 1, 1, 1, 1);

        label_3 = new QLabel(xToolsSocketClientToolUi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 9, 0, 1, 1);


        retranslateUi(xToolsSocketClientToolUi);

        QMetaObject::connectSlotsByName(xToolsSocketClientToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsSocketClientToolUi)
    {
        label->setText(QApplication::translate("xToolsSocketClientToolUi", "Client IP", nullptr));
        labelMessageType->setText(QApplication::translate("xToolsSocketClientToolUi", "Message", nullptr));
        label_4->setText(QApplication::translate("xToolsSocketClientToolUi", "Server port", nullptr));
        checkBoxAuthentication->setText(QApplication::translate("xToolsSocketClientToolUi", "Authentication", nullptr));
        label_6->setText(QApplication::translate("xToolsSocketClientToolUi", "User name", nullptr));
        label_7->setText(QApplication::translate("xToolsSocketClientToolUi", "Password", nullptr));
        label_2->setText(QApplication::translate("xToolsSocketClientToolUi", "Client port", nullptr));
        label_3->setText(QApplication::translate("xToolsSocketClientToolUi", "Server IP", nullptr));
        Q_UNUSED(xToolsSocketClientToolUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsSocketClientToolUi: public Ui_xToolsSocketClientToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSOCKETCLIENTTOOLUI_H
