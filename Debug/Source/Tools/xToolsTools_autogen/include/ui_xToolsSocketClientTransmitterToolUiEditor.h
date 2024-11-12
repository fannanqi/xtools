/********************************************************************************
** Form generated from reading UI file 'xToolsSocketClientTransmitterToolUiEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSOCKETCLIENTTRANSMITTERTOOLUIEDITOR_H
#define UI_XTOOLSSOCKETCLIENTTRANSMITTERTOOLUIEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <xToolsIpComboBox.h>
#include <xToolsWebSocketMessageTypeComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsSocketClientTransmitterToolUiEditor
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spinBoxClientPort;
    QLabel *label_3;
    QSpinBox *spinBoxServerPort;
    QLabel *label_2;
    xToolsIpComboBox *comboBoxServerIp;
    xToolsIpComboBox *comboBoxClientIp;
    QLabel *label_4;
    QLabel *labelMessageType;
    QCheckBox *checkBoxEnable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonApply;
    xToolsWebSocketMessageTypeComboBox *comboBoxMessageType;
    QLabel *label;
    QCheckBox *checkBoxSpecifiedClientIpAndPort;
    QFrame *line;

    void setupUi(QWidget *xToolsSocketClientTransmitterToolUiEditor)
    {
        if (xToolsSocketClientTransmitterToolUiEditor->objectName().isEmpty())
            xToolsSocketClientTransmitterToolUiEditor->setObjectName(QString::fromUtf8("xToolsSocketClientTransmitterToolUiEditor"));
        xToolsSocketClientTransmitterToolUiEditor->resize(295, 240);
        gridLayout = new QGridLayout(xToolsSocketClientTransmitterToolUiEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBoxClientPort = new QSpinBox(xToolsSocketClientTransmitterToolUiEditor);
        spinBoxClientPort->setObjectName(QString::fromUtf8("spinBoxClientPort"));
        spinBoxClientPort->setMaximum(65535);

        gridLayout->addWidget(spinBoxClientPort, 2, 1, 1, 1);

        label_3 = new QLabel(xToolsSocketClientTransmitterToolUiEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        spinBoxServerPort = new QSpinBox(xToolsSocketClientTransmitterToolUiEditor);
        spinBoxServerPort->setObjectName(QString::fromUtf8("spinBoxServerPort"));
        spinBoxServerPort->setMaximum(65535);

        gridLayout->addWidget(spinBoxServerPort, 6, 1, 1, 1);

        label_2 = new QLabel(xToolsSocketClientTransmitterToolUiEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBoxServerIp = new xToolsIpComboBox(xToolsSocketClientTransmitterToolUiEditor);
        comboBoxServerIp->setObjectName(QString::fromUtf8("comboBoxServerIp"));
        comboBoxServerIp->setEditable(true);

        gridLayout->addWidget(comboBoxServerIp, 5, 1, 1, 1);

        comboBoxClientIp = new xToolsIpComboBox(xToolsSocketClientTransmitterToolUiEditor);
        comboBoxClientIp->setObjectName(QString::fromUtf8("comboBoxClientIp"));

        gridLayout->addWidget(comboBoxClientIp, 1, 1, 1, 1);

        label_4 = new QLabel(xToolsSocketClientTransmitterToolUiEditor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        labelMessageType = new QLabel(xToolsSocketClientTransmitterToolUiEditor);
        labelMessageType->setObjectName(QString::fromUtf8("labelMessageType"));
        sizePolicy.setHeightForWidth(labelMessageType->sizePolicy().hasHeightForWidth());
        labelMessageType->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelMessageType, 3, 0, 1, 1);

        checkBoxEnable = new QCheckBox(xToolsSocketClientTransmitterToolUiEditor);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        gridLayout->addWidget(checkBoxEnable, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(xToolsSocketClientTransmitterToolUiEditor);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);

        pushButtonApply = new QPushButton(xToolsSocketClientTransmitterToolUiEditor);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 2);

        comboBoxMessageType = new xToolsWebSocketMessageTypeComboBox(xToolsSocketClientTransmitterToolUiEditor);
        comboBoxMessageType->setObjectName(QString::fromUtf8("comboBoxMessageType"));

        gridLayout->addWidget(comboBoxMessageType, 3, 1, 1, 1);

        label = new QLabel(xToolsSocketClientTransmitterToolUiEditor);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        checkBoxSpecifiedClientIpAndPort = new QCheckBox(xToolsSocketClientTransmitterToolUiEditor);
        checkBoxSpecifiedClientIpAndPort->setObjectName(QString::fromUtf8("checkBoxSpecifiedClientIpAndPort"));

        gridLayout->addWidget(checkBoxSpecifiedClientIpAndPort, 0, 1, 1, 1);

        line = new QFrame(xToolsSocketClientTransmitterToolUiEditor);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);


        retranslateUi(xToolsSocketClientTransmitterToolUiEditor);

        QMetaObject::connectSlotsByName(xToolsSocketClientTransmitterToolUiEditor);
    } // setupUi

    void retranslateUi(QWidget *xToolsSocketClientTransmitterToolUiEditor)
    {
        xToolsSocketClientTransmitterToolUiEditor->setWindowTitle(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Item Editor", nullptr));
        label_3->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Server IP", nullptr));
        label_2->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Client port", nullptr));
        label_4->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Server port", nullptr));
        labelMessageType->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Message type", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "enable", nullptr));
        pushButtonCancel->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Cancel", nullptr));
        pushButtonApply->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Apply", nullptr));
        label->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Client IP", nullptr));
        checkBoxSpecifiedClientIpAndPort->setText(QApplication::translate("xToolsSocketClientTransmitterToolUiEditor", "Specified client ip and port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsSocketClientTransmitterToolUiEditor: public Ui_xToolsSocketClientTransmitterToolUiEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSOCKETCLIENTTRANSMITTERTOOLUIEDITOR_H
