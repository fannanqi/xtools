/********************************************************************************
** Form generated from reading UI file 'xToolsCanBusStudioUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSCANBUSSTUDIOUI_H
#define UI_XTOOLSCANBUSSTUDIOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsCanBusStudioUi
{
public:
    QGridLayout *gridLayout_2;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout;
    QCheckBox *extendedFormatCheckBox;
    QCheckBox *flexibleDataRateCheckBox;
    QLabel *label;
    QComboBox *frameIdComboBox;
    QLabel *label_9;
    QComboBox *frameTypeComboBox;
    QLabel *label_12;
    QCheckBox *bitrateSwitchCheckBox;
    QFrame *line;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *disconnectPushButton;
    QPushButton *connectPushButton;
    QLabel *label_11;
    QComboBox *pluginComboBox;
    QLabel *label_6;
    QComboBox *interfaceNameComboBox;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_6;
    QTextBrowser *textBrowser;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout_4;
    QComboBox *receivOwnComboBox;
    QLabel *label_3;
    QComboBox *loopbackComboBox;
    QCheckBox *customConfigurationCheckBox;
    QLabel *label_8;
    QComboBox *bitrateComboBox;
    QComboBox *dataBitrateComboBox;
    QLabel *label_4;
    QLabel *label_10;
    QComboBox *canFdComboBox;
    QComboBox *errorFilterComboBox;
    QLabel *label_7;
    QLabel *label_5;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *payloadComboBox;
    QPushButton *sendPushButton;

    void setupUi(QWidget *xToolsCanBusStudioUi)
    {
        if (xToolsCanBusStudioUi->objectName().isEmpty())
            xToolsCanBusStudioUi->setObjectName(QString::fromUtf8("xToolsCanBusStudioUi"));
        xToolsCanBusStudioUi->resize(643, 579);
        gridLayout_2 = new QGridLayout(xToolsCanBusStudioUi);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dockWidget_3 = new QDockWidget(xToolsCanBusStudioUi);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget_3->sizePolicy().hasHeightForWidth());
        dockWidget_3->setSizePolicy(sizePolicy);
        dockWidget_3->setMinimumSize(QSize(143, 182));
        dockWidget_3->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_3->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout = new QGridLayout(dockWidgetContents_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        extendedFormatCheckBox = new QCheckBox(dockWidgetContents_3);
        extendedFormatCheckBox->setObjectName(QString::fromUtf8("extendedFormatCheckBox"));

        gridLayout->addWidget(extendedFormatCheckBox, 4, 0, 1, 2);

        flexibleDataRateCheckBox = new QCheckBox(dockWidgetContents_3);
        flexibleDataRateCheckBox->setObjectName(QString::fromUtf8("flexibleDataRateCheckBox"));

        gridLayout->addWidget(flexibleDataRateCheckBox, 5, 0, 1, 2);

        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        frameIdComboBox = new QComboBox(dockWidgetContents_3);
        frameIdComboBox->setObjectName(QString::fromUtf8("frameIdComboBox"));
        frameIdComboBox->setEditable(true);

        gridLayout->addWidget(frameIdComboBox, 1, 1, 1, 1);

        label_9 = new QLabel(dockWidgetContents_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        frameTypeComboBox = new QComboBox(dockWidgetContents_3);
        frameTypeComboBox->setObjectName(QString::fromUtf8("frameTypeComboBox"));

        gridLayout->addWidget(frameTypeComboBox, 0, 1, 1, 1);

        label_12 = new QLabel(dockWidgetContents_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 2);

        bitrateSwitchCheckBox = new QCheckBox(dockWidgetContents_3);
        bitrateSwitchCheckBox->setObjectName(QString::fromUtf8("bitrateSwitchCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bitrateSwitchCheckBox->sizePolicy().hasHeightForWidth());
        bitrateSwitchCheckBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(bitrateSwitchCheckBox, 6, 0, 1, 2);

        line = new QFrame(dockWidgetContents_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        dockWidget_3->setWidget(dockWidgetContents_3);

        gridLayout_2->addWidget(dockWidget_3, 2, 0, 1, 1);

        dockWidget_5 = new QDockWidget(xToolsCanBusStudioUi);
        dockWidget_5->setObjectName(QString::fromUtf8("dockWidget_5"));
        sizePolicy.setHeightForWidth(dockWidget_5->sizePolicy().hasHeightForWidth());
        dockWidget_5->setSizePolicy(sizePolicy);
        dockWidget_5->setMinimumSize(QSize(220, 102));
        dockWidget_5->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_5->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        disconnectPushButton = new QPushButton(dockWidgetContents_5);
        disconnectPushButton->setObjectName(QString::fromUtf8("disconnectPushButton"));

        horizontalLayout->addWidget(disconnectPushButton);

        connectPushButton = new QPushButton(dockWidgetContents_5);
        connectPushButton->setObjectName(QString::fromUtf8("connectPushButton"));

        horizontalLayout->addWidget(connectPushButton);


        gridLayout_3->addLayout(horizontalLayout, 4, 0, 1, 2);

        label_11 = new QLabel(dockWidgetContents_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setItalic(false);
        label_11->setFont(font);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        pluginComboBox = new QComboBox(dockWidgetContents_5);
        pluginComboBox->setObjectName(QString::fromUtf8("pluginComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pluginComboBox->sizePolicy().hasHeightForWidth());
        pluginComboBox->setSizePolicy(sizePolicy3);
        pluginComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(pluginComboBox, 0, 1, 1, 1);

        label_6 = new QLabel(dockWidgetContents_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        interfaceNameComboBox = new QComboBox(dockWidgetContents_5);
        interfaceNameComboBox->setObjectName(QString::fromUtf8("interfaceNameComboBox"));
        interfaceNameComboBox->setEditable(true);

        gridLayout_3->addWidget(interfaceNameComboBox, 2, 1, 1, 1);

        dockWidget_5->setWidget(dockWidgetContents_5);

        gridLayout_2->addWidget(dockWidget_5, 0, 0, 1, 1);

        dockWidget = new QDockWidget(xToolsCanBusStudioUi);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy5);
        dockWidget->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_6 = new QGridLayout(dockWidgetContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(dockWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_6->addWidget(textBrowser, 0, 0, 3, 1);

        dockWidget->setWidget(dockWidgetContents);

        gridLayout_2->addWidget(dockWidget, 0, 1, 4, 1);

        dockWidget_4 = new QDockWidget(xToolsCanBusStudioUi);
        dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
        sizePolicy.setHeightForWidth(dockWidget_4->sizePolicy().hasHeightForWidth());
        dockWidget_4->setSizePolicy(sizePolicy);
        dockWidget_4->setMinimumSize(QSize(156, 214));
        dockWidget_4->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_4->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout_4 = new QGridLayout(dockWidgetContents_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        receivOwnComboBox = new QComboBox(dockWidgetContents_4);
        receivOwnComboBox->setObjectName(QString::fromUtf8("receivOwnComboBox"));

        gridLayout_4->addWidget(receivOwnComboBox, 4, 1, 1, 1);

        label_3 = new QLabel(dockWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        loopbackComboBox = new QComboBox(dockWidgetContents_4);
        loopbackComboBox->setObjectName(QString::fromUtf8("loopbackComboBox"));

        gridLayout_4->addWidget(loopbackComboBox, 3, 1, 1, 1);

        customConfigurationCheckBox = new QCheckBox(dockWidgetContents_4);
        customConfigurationCheckBox->setObjectName(QString::fromUtf8("customConfigurationCheckBox"));

        gridLayout_4->addWidget(customConfigurationCheckBox, 1, 0, 1, 2);

        label_8 = new QLabel(dockWidgetContents_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_8, 5, 0, 1, 1);

        bitrateComboBox = new QComboBox(dockWidgetContents_4);
        bitrateComboBox->setObjectName(QString::fromUtf8("bitrateComboBox"));
        bitrateComboBox->setEditable(true);

        gridLayout_4->addWidget(bitrateComboBox, 6, 1, 1, 1);

        dataBitrateComboBox = new QComboBox(dockWidgetContents_4);
        dataBitrateComboBox->setObjectName(QString::fromUtf8("dataBitrateComboBox"));
        dataBitrateComboBox->setEditable(true);

        gridLayout_4->addWidget(dataBitrateComboBox, 7, 1, 1, 1);

        label_4 = new QLabel(dockWidgetContents_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        label_10 = new QLabel(dockWidgetContents_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_10, 7, 0, 1, 1);

        canFdComboBox = new QComboBox(dockWidgetContents_4);
        canFdComboBox->setObjectName(QString::fromUtf8("canFdComboBox"));

        gridLayout_4->addWidget(canFdComboBox, 5, 1, 1, 1);

        errorFilterComboBox = new QComboBox(dockWidgetContents_4);
        errorFilterComboBox->setObjectName(QString::fromUtf8("errorFilterComboBox"));
        errorFilterComboBox->setEditable(true);

        gridLayout_4->addWidget(errorFilterComboBox, 2, 1, 1, 1);

        label_7 = new QLabel(dockWidgetContents_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_7, 6, 0, 1, 1);

        label_5 = new QLabel(dockWidgetContents_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_5, 4, 0, 1, 1);

        dockWidget_4->setWidget(dockWidgetContents_4);

        gridLayout_2->addWidget(dockWidget_4, 1, 0, 1, 1);

        dockWidget_2 = new QDockWidget(xToolsCanBusStudioUi);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        sizePolicy3.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy3);
        dockWidget_2->setMinimumSize(QSize(198, 45));
        dockWidget_2->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_2->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        horizontalLayout_11 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        payloadComboBox = new QComboBox(dockWidgetContents_2);
        payloadComboBox->setObjectName(QString::fromUtf8("payloadComboBox"));
        sizePolicy3.setHeightForWidth(payloadComboBox->sizePolicy().hasHeightForWidth());
        payloadComboBox->setSizePolicy(sizePolicy3);
        payloadComboBox->setEditable(true);

        horizontalLayout_11->addWidget(payloadComboBox);

        sendPushButton = new QPushButton(dockWidgetContents_2);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));
        sizePolicy.setHeightForWidth(sendPushButton->sizePolicy().hasHeightForWidth());
        sendPushButton->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(sendPushButton);

        dockWidget_2->setWidget(dockWidgetContents_2);

        gridLayout_2->addWidget(dockWidget_2, 4, 1, 1, 1);


        retranslateUi(xToolsCanBusStudioUi);

        QMetaObject::connectSlotsByName(xToolsCanBusStudioUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsCanBusStudioUi)
    {
        xToolsCanBusStudioUi->setWindowTitle(QApplication::translate("xToolsCanBusStudioUi", "CANBus Studio", nullptr));
        dockWidget_3->setWindowTitle(QApplication::translate("xToolsCanBusStudioUi", "CAN Frame", nullptr));
        extendedFormatCheckBox->setText(QApplication::translate("xToolsCanBusStudioUi", "Extended format", nullptr));
        flexibleDataRateCheckBox->setText(QApplication::translate("xToolsCanBusStudioUi", "Flexible data rate", nullptr));
        label->setText(QApplication::translate("xToolsCanBusStudioUi", "Frame ID", nullptr));
        label_9->setText(QApplication::translate("xToolsCanBusStudioUi", "Frame type", nullptr));
        label_12->setText(QApplication::translate("xToolsCanBusStudioUi", "Frame options", nullptr));
        bitrateSwitchCheckBox->setText(QApplication::translate("xToolsCanBusStudioUi", "Bitrate switch", nullptr));
        dockWidget_5->setWindowTitle(QApplication::translate("xToolsCanBusStudioUi", "Device Control", nullptr));
        disconnectPushButton->setText(QApplication::translate("xToolsCanBusStudioUi", "Disconnect", nullptr));
        connectPushButton->setText(QApplication::translate("xToolsCanBusStudioUi", "Connect", nullptr));
        label_11->setText(QApplication::translate("xToolsCanBusStudioUi", "Plugin", nullptr));
        label_6->setText(QApplication::translate("xToolsCanBusStudioUi", "Name", nullptr));
        dockWidget->setWindowTitle(QApplication::translate("xToolsCanBusStudioUi", "Data View", nullptr));
        dockWidget_4->setWindowTitle(QApplication::translate("xToolsCanBusStudioUi", "Specify Configuration", nullptr));
        label_3->setText(QApplication::translate("xToolsCanBusStudioUi", "Error filter", nullptr));
        customConfigurationCheckBox->setText(QApplication::translate("xToolsCanBusStudioUi", "Custom configurations", nullptr));
        label_8->setText(QApplication::translate("xToolsCanBusStudioUi", "CAN FD", nullptr));
        label_4->setText(QApplication::translate("xToolsCanBusStudioUi", "Loopback", nullptr));
        label_10->setText(QApplication::translate("xToolsCanBusStudioUi", "Data bitrate", nullptr));
        label_7->setText(QApplication::translate("xToolsCanBusStudioUi", "Bitrate", nullptr));
        label_5->setText(QApplication::translate("xToolsCanBusStudioUi", "Receive own", nullptr));
        dockWidget_2->setWindowTitle(QApplication::translate("xToolsCanBusStudioUi", "CAN Frame Payload", nullptr));
        sendPushButton->setText(QApplication::translate("xToolsCanBusStudioUi", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsCanBusStudioUi: public Ui_xToolsCanBusStudioUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSCANBUSSTUDIOUI_H
