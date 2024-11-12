/********************************************************************************
** Form generated from reading UI file 'xToolsSerialPortTransmitterToolUiEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSERIALPORTTRANSMITTERTOOLUIEDITOR_H
#define UI_XTOOLSSERIALPORTTRANSMITTERTOOLUIEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <xToolsBaudRateComboBox.h>
#include <xToolsDataBitsComboBox.h>
#include <xToolsFlowControlComboBox.h>
#include <xToolsParityComboBox.h>
#include <xToolsPortNameComboBox.h>
#include <xToolsStopBitsComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsSerialPortTransmitterToolUiEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_4;
    xToolsFlowControlComboBox *comboBoxFlowControl;
    QCheckBox *checkBoxEnable;
    xToolsBaudRateComboBox *comboBoxBaudrate;
    xToolsParityComboBox *comboBoxParity;
    QLabel *label_2;
    QLabel *label_3;
    xToolsStopBitsComboBox *comboBoxStopBits;
    xToolsPortNameComboBox *comboBoxPortName;
    QLabel *label;
    QLabel *label_6;
    xToolsDataBitsComboBox *comboBoxDataBits;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonApply;

    void setupUi(QWidget *xToolsSerialPortTransmitterToolUiEditor)
    {
        if (xToolsSerialPortTransmitterToolUiEditor->objectName().isEmpty())
            xToolsSerialPortTransmitterToolUiEditor->setObjectName(QString::fromUtf8("xToolsSerialPortTransmitterToolUiEditor"));
        xToolsSerialPortTransmitterToolUiEditor->resize(192, 260);
        gridLayout = new QGridLayout(xToolsSerialPortTransmitterToolUiEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(xToolsSerialPortTransmitterToolUiEditor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_4 = new QLabel(xToolsSerialPortTransmitterToolUiEditor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        comboBoxFlowControl = new xToolsFlowControlComboBox(xToolsSerialPortTransmitterToolUiEditor);
        comboBoxFlowControl->setObjectName(QString::fromUtf8("comboBoxFlowControl"));

        gridLayout->addWidget(comboBoxFlowControl, 6, 1, 1, 1);

        checkBoxEnable = new QCheckBox(xToolsSerialPortTransmitterToolUiEditor);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        gridLayout->addWidget(checkBoxEnable, 0, 0, 1, 2);

        comboBoxBaudrate = new xToolsBaudRateComboBox(xToolsSerialPortTransmitterToolUiEditor);
        comboBoxBaudrate->setObjectName(QString::fromUtf8("comboBoxBaudrate"));
        comboBoxBaudrate->setEditable(true);

        gridLayout->addWidget(comboBoxBaudrate, 2, 1, 1, 1);

        comboBoxParity = new xToolsParityComboBox(xToolsSerialPortTransmitterToolUiEditor);
        comboBoxParity->setObjectName(QString::fromUtf8("comboBoxParity"));

        gridLayout->addWidget(comboBoxParity, 5, 1, 1, 1);

        label_2 = new QLabel(xToolsSerialPortTransmitterToolUiEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(xToolsSerialPortTransmitterToolUiEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBoxStopBits = new xToolsStopBitsComboBox(xToolsSerialPortTransmitterToolUiEditor);
        comboBoxStopBits->setObjectName(QString::fromUtf8("comboBoxStopBits"));

        gridLayout->addWidget(comboBoxStopBits, 4, 1, 1, 1);

        comboBoxPortName = new xToolsPortNameComboBox(xToolsSerialPortTransmitterToolUiEditor);
        comboBoxPortName->setObjectName(QString::fromUtf8("comboBoxPortName"));

        gridLayout->addWidget(comboBoxPortName, 1, 1, 1, 1);

        label = new QLabel(xToolsSerialPortTransmitterToolUiEditor);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_6 = new QLabel(xToolsSerialPortTransmitterToolUiEditor);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        comboBoxDataBits = new xToolsDataBitsComboBox(xToolsSerialPortTransmitterToolUiEditor);
        comboBoxDataBits->setObjectName(QString::fromUtf8("comboBoxDataBits"));

        gridLayout->addWidget(comboBoxDataBits, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(xToolsSerialPortTransmitterToolUiEditor);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);

        pushButtonApply = new QPushButton(xToolsSerialPortTransmitterToolUiEditor);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 2);


        retranslateUi(xToolsSerialPortTransmitterToolUiEditor);

        QMetaObject::connectSlotsByName(xToolsSerialPortTransmitterToolUiEditor);
    } // setupUi

    void retranslateUi(QWidget *xToolsSerialPortTransmitterToolUiEditor)
    {
        xToolsSerialPortTransmitterToolUiEditor->setWindowTitle(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Serial Port Transmitter Item Editor", nullptr));
        label_5->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Parity", nullptr));
        label_4->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Stop bits", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Enable", nullptr));
        label_2->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Baudrate", nullptr));
        label_3->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Data bits", nullptr));
        label->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Port name", nullptr));
        label_6->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Flow control", nullptr));
        pushButtonCancel->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Cancel", nullptr));
        pushButtonApply->setText(QApplication::translate("xToolsSerialPortTransmitterToolUiEditor", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsSerialPortTransmitterToolUiEditor: public Ui_xToolsSerialPortTransmitterToolUiEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSERIALPORTTRANSMITTERTOOLUIEDITOR_H
