/********************************************************************************
** Form generated from reading UI file 'xToolsSerialPortToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSERIALPORTTOOLUI_H
#define UI_XTOOLSSERIALPORTTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <xToolsBaudRateComboBox.h>
#include <xToolsDataBitsComboBox.h>
#include <xToolsFlowControlComboBox.h>
#include <xToolsParityComboBox.h>
#include <xToolsPortNameComboBox.h>
#include <xToolsStopBitsComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsSerialPortToolUi
{
public:
    QGridLayout *gridLayout;
    xToolsPortNameComboBox *comboBoxPortNames;
    QLabel *label_2;
    xToolsDataBitsComboBox *comboBoxDataBits;
    xToolsStopBitsComboBox *comboBoxStopBits;
    xToolsParityComboBox *comboBoxParity;
    xToolsBaudRateComboBox *comboBoxBaudRate;
    xToolsFlowControlComboBox *comboBoxFlowControl;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *xToolsSerialPortToolUi)
    {
        if (xToolsSerialPortToolUi->objectName().isEmpty())
            xToolsSerialPortToolUi->setObjectName(QString::fromUtf8("xToolsSerialPortToolUi"));
        xToolsSerialPortToolUi->resize(171, 186);
        gridLayout = new QGridLayout(xToolsSerialPortToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBoxPortNames = new xToolsPortNameComboBox(xToolsSerialPortToolUi);
        comboBoxPortNames->setObjectName(QString::fromUtf8("comboBoxPortNames"));
        comboBoxPortNames->setEditable(false);

        gridLayout->addWidget(comboBoxPortNames, 0, 1, 1, 1);

        label_2 = new QLabel(xToolsSerialPortToolUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBoxDataBits = new xToolsDataBitsComboBox(xToolsSerialPortToolUi);
        comboBoxDataBits->setObjectName(QString::fromUtf8("comboBoxDataBits"));

        gridLayout->addWidget(comboBoxDataBits, 2, 1, 1, 1);

        comboBoxStopBits = new xToolsStopBitsComboBox(xToolsSerialPortToolUi);
        comboBoxStopBits->setObjectName(QString::fromUtf8("comboBoxStopBits"));

        gridLayout->addWidget(comboBoxStopBits, 3, 1, 1, 1);

        comboBoxParity = new xToolsParityComboBox(xToolsSerialPortToolUi);
        comboBoxParity->setObjectName(QString::fromUtf8("comboBoxParity"));

        gridLayout->addWidget(comboBoxParity, 4, 1, 1, 1);

        comboBoxBaudRate = new xToolsBaudRateComboBox(xToolsSerialPortToolUi);
        comboBoxBaudRate->setObjectName(QString::fromUtf8("comboBoxBaudRate"));
        comboBoxBaudRate->setEditable(true);

        gridLayout->addWidget(comboBoxBaudRate, 1, 1, 1, 1);

        comboBoxFlowControl = new xToolsFlowControlComboBox(xToolsSerialPortToolUi);
        comboBoxFlowControl->setObjectName(QString::fromUtf8("comboBoxFlowControl"));

        gridLayout->addWidget(comboBoxFlowControl, 5, 1, 1, 1);

        label = new QLabel(xToolsSerialPortToolUi);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(xToolsSerialPortToolUi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(xToolsSerialPortToolUi);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(xToolsSerialPortToolUi);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(xToolsSerialPortToolUi);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);


        retranslateUi(xToolsSerialPortToolUi);

        QMetaObject::connectSlotsByName(xToolsSerialPortToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsSerialPortToolUi)
    {
        xToolsSerialPortToolUi->setWindowTitle(QString());
        label_2->setText(QApplication::translate("xToolsSerialPortToolUi", "Port name", nullptr));
        label->setText(QApplication::translate("xToolsSerialPortToolUi", "Baud rate", nullptr));
        label_3->setText(QApplication::translate("xToolsSerialPortToolUi", "Data bits", nullptr));
        label_4->setText(QApplication::translate("xToolsSerialPortToolUi", "Stop bits", nullptr));
        label_5->setText(QApplication::translate("xToolsSerialPortToolUi", "Parity", nullptr));
        label_6->setText(QApplication::translate("xToolsSerialPortToolUi", "Flow control", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsSerialPortToolUi: public Ui_xToolsSerialPortToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSERIALPORTTOOLUI_H
