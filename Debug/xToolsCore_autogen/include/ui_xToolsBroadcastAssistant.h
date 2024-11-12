/********************************************************************************
** Form generated from reading UI file 'xToolsBroadcastAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSBROADCASTASSISTANT_H
#define UI_XTOOLSBROADCASTASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <xToolsAffixesComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsBroadcastAssistant
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QComboBox *comboBoxOutputFormat;
    QPushButton *pushButtonClear;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    xToolsAffixesComboBox *comboBoxBroadcastSuffix;
    QLabel *label;
    QLineEdit *lineEditBroadcastPort;
    QFrame *line;
    QLabel *label_8;
    QComboBox *comboBoxBroadcastFormat;
    QComboBox *comboBoxBroadcastInterval;
    QLabel *label_5;
    QLabel *label_3;
    QComboBox *comboBoxBroadcastAddress;
    xToolsAffixesComboBox *comboBoxBroadcastPrefix;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEditBroadcastData;
    QLabel *label_4;
    QPushButton *pushButtonBroadcast;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowserInformation;

    void setupUi(QWidget *xToolsBroadcastAssistant)
    {
        if (xToolsBroadcastAssistant->objectName().isEmpty())
            xToolsBroadcastAssistant->setObjectName(QString::fromUtf8("xToolsBroadcastAssistant"));
        xToolsBroadcastAssistant->resize(785, 466);
        xToolsBroadcastAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(xToolsBroadcastAssistant);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_3 = new QGroupBox(xToolsBroadcastAssistant);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        comboBoxOutputFormat = new QComboBox(groupBox_3);
        comboBoxOutputFormat->setObjectName(QString::fromUtf8("comboBoxOutputFormat"));

        gridLayout_4->addWidget(comboBoxOutputFormat, 0, 1, 1, 1);

        pushButtonClear = new QPushButton(groupBox_3);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout_4->addWidget(pushButtonClear, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(xToolsBroadcastAssistant);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBoxBroadcastSuffix = new xToolsAffixesComboBox(groupBox);
        comboBoxBroadcastSuffix->setObjectName(QString::fromUtf8("comboBoxBroadcastSuffix"));

        gridLayout_3->addWidget(comboBoxBroadcastSuffix, 5, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lineEditBroadcastPort = new QLineEdit(groupBox);
        lineEditBroadcastPort->setObjectName(QString::fromUtf8("lineEditBroadcastPort"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditBroadcastPort->sizePolicy().hasHeightForWidth());
        lineEditBroadcastPort->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEditBroadcastPort, 1, 1, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 6, 0, 1, 2);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        comboBoxBroadcastFormat = new QComboBox(groupBox);
        comboBoxBroadcastFormat->setObjectName(QString::fromUtf8("comboBoxBroadcastFormat"));

        gridLayout_3->addWidget(comboBoxBroadcastFormat, 3, 1, 1, 1);

        comboBoxBroadcastInterval = new QComboBox(groupBox);
        comboBoxBroadcastInterval->setObjectName(QString::fromUtf8("comboBoxBroadcastInterval"));

        gridLayout_3->addWidget(comboBoxBroadcastInterval, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        comboBoxBroadcastAddress = new QComboBox(groupBox);
        comboBoxBroadcastAddress->setObjectName(QString::fromUtf8("comboBoxBroadcastAddress"));

        gridLayout_3->addWidget(comboBoxBroadcastAddress, 0, 1, 1, 1);

        comboBoxBroadcastPrefix = new xToolsAffixesComboBox(groupBox);
        comboBoxBroadcastPrefix->setObjectName(QString::fromUtf8("comboBoxBroadcastPrefix"));

        gridLayout_3->addWidget(comboBoxBroadcastPrefix, 4, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_7, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEditBroadcastData = new QLineEdit(groupBox);
        lineEditBroadcastData->setObjectName(QString::fromUtf8("lineEditBroadcastData"));
        sizePolicy1.setHeightForWidth(lineEditBroadcastData->sizePolicy().hasHeightForWidth());
        lineEditBroadcastData->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEditBroadcastData, 8, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_4, 7, 0, 1, 1);

        pushButtonBroadcast = new QPushButton(groupBox);
        pushButtonBroadcast->setObjectName(QString::fromUtf8("pushButtonBroadcast"));

        gridLayout_3->addWidget(pushButtonBroadcast, 7, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(xToolsBroadcastAssistant);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowserInformation = new QTextBrowser(groupBox_2);
        textBrowserInformation->setObjectName(QString::fromUtf8("textBrowserInformation"));

        gridLayout->addWidget(textBrowserInformation, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 3, 1);


        retranslateUi(xToolsBroadcastAssistant);

        QMetaObject::connectSlotsByName(xToolsBroadcastAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsBroadcastAssistant)
    {
        groupBox_3->setTitle(QApplication::translate("xToolsBroadcastAssistant", "Output control", nullptr));
        label_6->setText(QApplication::translate("xToolsBroadcastAssistant", "Output format", nullptr));
        pushButtonClear->setText(QApplication::translate("xToolsBroadcastAssistant", "Clear", nullptr));
        groupBox->setTitle(QApplication::translate("xToolsBroadcastAssistant", "Broadcast parameters", nullptr));
        label->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast address", nullptr));
        lineEditBroadcastPort->setText(QApplication::translate("xToolsBroadcastAssistant", "55443", nullptr));
        label_8->setText(QApplication::translate("xToolsBroadcastAssistant", "Data format", nullptr));
        label_5->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast prefix", nullptr));
        label_3->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast interval", nullptr));
        label_7->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast suffix", nullptr));
        label_2->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast port", nullptr));
        label_4->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast data", nullptr));
        pushButtonBroadcast->setText(QApplication::translate("xToolsBroadcastAssistant", "Broadcast", nullptr));
        groupBox_2->setTitle(QApplication::translate("xToolsBroadcastAssistant", "Information output", nullptr));
        Q_UNUSED(xToolsBroadcastAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsBroadcastAssistant: public Ui_xToolsBroadcastAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSBROADCASTASSISTANT_H
