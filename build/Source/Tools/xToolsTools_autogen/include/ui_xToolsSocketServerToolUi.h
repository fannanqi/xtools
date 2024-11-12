/********************************************************************************
** Form generated from reading UI file 'xToolsSocketServerToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSOCKETSERVERTOOLUI_H
#define UI_XTOOLSSOCKETSERVERTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <xToolsIpComboBox.h>
#include <xToolsSpinBox.h>
#include <xToolsWebSocketMessageTypeComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsSocketServerToolUi
{
public:
    QGridLayout *gridLayout;
    xToolsSpinBox *spinBoxServerPort;
    QLabel *label;
    QPushButton *pushButtonClear;
    xToolsIpComboBox *comboBoxServerIp;
    QComboBox *comboBoxClientList;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *labelMessageType;
    xToolsWebSocketMessageTypeComboBox *comboBoxMessageType;

    void setupUi(QWidget *xToolsSocketServerToolUi)
    {
        if (xToolsSocketServerToolUi->objectName().isEmpty())
            xToolsSocketServerToolUi->setObjectName(QString::fromUtf8("xToolsSocketServerToolUi"));
        xToolsSocketServerToolUi->resize(172, 140);
        xToolsSocketServerToolUi->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsSocketServerToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBoxServerPort = new xToolsSpinBox(xToolsSocketServerToolUi);
        spinBoxServerPort->setObjectName(QString::fromUtf8("spinBoxServerPort"));
        spinBoxServerPort->setMinimum(1);
        spinBoxServerPort->setMaximum(65535);
        spinBoxServerPort->setValue(55555);

        gridLayout->addWidget(spinBoxServerPort, 1, 1, 1, 1);

        label = new QLabel(xToolsSocketServerToolUi);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButtonClear = new QPushButton(xToolsSocketServerToolUi);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 5, 0, 1, 2);

        comboBoxServerIp = new xToolsIpComboBox(xToolsSocketServerToolUi);
        comboBoxServerIp->setObjectName(QString::fromUtf8("comboBoxServerIp"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxServerIp->sizePolicy().hasHeightForWidth());
        comboBoxServerIp->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxServerIp, 0, 1, 1, 1);

        comboBoxClientList = new QComboBox(xToolsSocketServerToolUi);
        comboBoxClientList->addItem(QString());
        comboBoxClientList->setObjectName(QString::fromUtf8("comboBoxClientList"));

        gridLayout->addWidget(comboBoxClientList, 3, 1, 1, 1);

        label_3 = new QLabel(xToolsSocketServerToolUi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(xToolsSocketServerToolUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        labelMessageType = new QLabel(xToolsSocketServerToolUi);
        labelMessageType->setObjectName(QString::fromUtf8("labelMessageType"));
        sizePolicy.setHeightForWidth(labelMessageType->sizePolicy().hasHeightForWidth());
        labelMessageType->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelMessageType, 4, 0, 1, 1);

        comboBoxMessageType = new xToolsWebSocketMessageTypeComboBox(xToolsSocketServerToolUi);
        comboBoxMessageType->setObjectName(QString::fromUtf8("comboBoxMessageType"));

        gridLayout->addWidget(comboBoxMessageType, 4, 1, 1, 1);


        retranslateUi(xToolsSocketServerToolUi);

        QMetaObject::connectSlotsByName(xToolsSocketServerToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsSocketServerToolUi)
    {
        label->setText(QApplication::translate("xToolsSocketServerToolUi", "Server IP", nullptr));
        pushButtonClear->setText(QApplication::translate("xToolsSocketServerToolUi", "Disconnect all clients", nullptr));
        comboBoxClientList->setItemText(0, QApplication::translate("xToolsSocketServerToolUi", "All clients", nullptr));

        label_3->setText(QApplication::translate("xToolsSocketServerToolUi", "Selected client", nullptr));
        label_2->setText(QApplication::translate("xToolsSocketServerToolUi", "Server port", nullptr));
        labelMessageType->setText(QApplication::translate("xToolsSocketServerToolUi", "Message type", nullptr));
        Q_UNUSED(xToolsSocketServerToolUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsSocketServerToolUi: public Ui_xToolsSocketServerToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSOCKETSERVERTOOLUI_H
