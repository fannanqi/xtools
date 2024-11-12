/********************************************************************************
** Form generated from reading UI file 'xToolsModbusStudioUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSMODBUSSTUDIOUI_H
#define UI_XTOOLSMODBUSSTUDIOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsModbusStudioUi
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QDockWidget *dockWidgetDeviceSettings;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBoxDeviceList;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonCloese;
    QPushButton *pushButtonOpen;
    QVBoxLayout *verticalLayout;
    QDockWidget *dockWidgetConsole;
    QWidget *dockWidgetContents_6;
    QGridLayout *gridLayout_6;
    QTextBrowser *textBrowser;
    QDockWidget *dockWidgetClientRegisters;
    QWidget *dockWidgetContents_7;
    QGridLayout *gridLayout_10;
    QTableView *tabViewClientRegisters;
    QDockWidget *dockWidgetCustomCommand;
    QWidget *dockWidgetContents_9;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEditPdu;
    QPushButton *send_;
    QDockWidget *dockWidgetServerRegisters;
    QWidget *dockWidgetContents_10;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidgetServerRegisters;
    QDockWidget *dockWidgetNetworkSettings;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *comboBoxAddress;
    QSpinBox *spinBoxPort;
    QLabel *label_3;
    QDockWidget *dockWidgetClientParameters;
    QWidget *dockWidgetContents_5;
    QGridLayout *gridLayout_8;
    QFrame *line_6;
    QLabel *label_19;
    QSpinBox *spinBoxDeviceAddress;
    QSpinBox *spinBoxQuantity;
    QLabel *label_18;
    QLabel *label_4;
    QSpinBox *spinBoxRepeatTime;
    QSpinBox *spinBoxTimeout;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonRead;
    QPushButton *pushButtonWrite;
    QLabel *label_5;
    QSpinBox *spinBoxStartAddress;
    QComboBox *comboBoxFunctionCode;
    QLabel *label_17;
    QDockWidget *dockWidgetSerialPortSettings;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QComboBox *comboBoxDataBits;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBoxStopBits;
    QComboBox *comboBoxPortName;
    QLabel *label_11;
    QComboBox *comboBoxBaudRate;
    QLabel *label_12;
    QComboBox *comboBoxParity;
    QDockWidget *dockWidgetServerParameters;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QSpinBox *spinBoxServerAddress;
    QCheckBox *checkBoxListenOnlyMode;
    QCheckBox *checkBoxDeviceBusy;

    void setupUi(QWidget *xToolsModbusStudioUi)
    {
        if (xToolsModbusStudioUi->objectName().isEmpty())
            xToolsModbusStudioUi->setObjectName(QString::fromUtf8("xToolsModbusStudioUi"));
        xToolsModbusStudioUi->resize(912, 709);
        xToolsModbusStudioUi->setMinimumSize(QSize(0, 0));
        xToolsModbusStudioUi->setWindowTitle(QString::fromUtf8("Modbus Studio"));
        gridLayout = new QGridLayout(xToolsModbusStudioUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        dockWidgetDeviceSettings = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetDeviceSettings->setObjectName(QString::fromUtf8("dockWidgetDeviceSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidgetDeviceSettings->sizePolicy().hasHeightForWidth());
        dockWidgetDeviceSettings->setSizePolicy(sizePolicy);
        dockWidgetDeviceSettings->setMinimumSize(QSize(230, 75));
        dockWidgetDeviceSettings->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetDeviceSettings->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidgetContents->setMinimumSize(QSize(200, 0));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBoxDeviceList = new QComboBox(dockWidgetContents);
        comboBoxDeviceList->setObjectName(QString::fromUtf8("comboBoxDeviceList"));

        gridLayout_2->addWidget(comboBoxDeviceList, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonCloese = new QPushButton(dockWidgetContents);
        pushButtonCloese->setObjectName(QString::fromUtf8("pushButtonCloese"));

        horizontalLayout_3->addWidget(pushButtonCloese);

        pushButtonOpen = new QPushButton(dockWidgetContents);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));

        horizontalLayout_3->addWidget(pushButtonOpen);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        dockWidgetDeviceSettings->setWidget(dockWidgetContents);

        gridLayout->addWidget(dockWidgetDeviceSettings, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dockWidgetConsole = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetConsole->setObjectName(QString::fromUtf8("dockWidgetConsole"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dockWidgetConsole->sizePolicy().hasHeightForWidth());
        dockWidgetConsole->setSizePolicy(sizePolicy2);
        dockWidgetConsole->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetConsole->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        gridLayout_6 = new QGridLayout(dockWidgetContents_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(dockWidgetContents_6);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_6->addWidget(textBrowser, 0, 0, 1, 1);

        dockWidgetConsole->setWidget(dockWidgetContents_6);

        verticalLayout->addWidget(dockWidgetConsole);

        dockWidgetClientRegisters = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetClientRegisters->setObjectName(QString::fromUtf8("dockWidgetClientRegisters"));
        sizePolicy2.setHeightForWidth(dockWidgetClientRegisters->sizePolicy().hasHeightForWidth());
        dockWidgetClientRegisters->setSizePolicy(sizePolicy2);
        dockWidgetClientRegisters->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetClientRegisters->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        gridLayout_10 = new QGridLayout(dockWidgetContents_7);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        tabViewClientRegisters = new QTableView(dockWidgetContents_7);
        tabViewClientRegisters->setObjectName(QString::fromUtf8("tabViewClientRegisters"));

        gridLayout_10->addWidget(tabViewClientRegisters, 0, 0, 1, 1);

        dockWidgetClientRegisters->setWidget(dockWidgetContents_7);

        verticalLayout->addWidget(dockWidgetClientRegisters);

        dockWidgetCustomCommand = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetCustomCommand->setObjectName(QString::fromUtf8("dockWidgetCustomCommand"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dockWidgetCustomCommand->sizePolicy().hasHeightForWidth());
        dockWidgetCustomCommand->setSizePolicy(sizePolicy3);
        dockWidgetCustomCommand->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetCustomCommand->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QString::fromUtf8("dockWidgetContents_9"));
        gridLayout_7 = new QGridLayout(dockWidgetContents_9);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEditPdu = new QLineEdit(dockWidgetContents_9);
        lineEditPdu->setObjectName(QString::fromUtf8("lineEditPdu"));

        gridLayout_7->addWidget(lineEditPdu, 0, 0, 1, 1);

        send_ = new QPushButton(dockWidgetContents_9);
        send_->setObjectName(QString::fromUtf8("send_"));

        gridLayout_7->addWidget(send_, 0, 1, 1, 1);

        dockWidgetCustomCommand->setWidget(dockWidgetContents_9);

        verticalLayout->addWidget(dockWidgetCustomCommand);

        dockWidgetServerRegisters = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetServerRegisters->setObjectName(QString::fromUtf8("dockWidgetServerRegisters"));
        sizePolicy2.setHeightForWidth(dockWidgetServerRegisters->sizePolicy().hasHeightForWidth());
        dockWidgetServerRegisters->setSizePolicy(sizePolicy2);
        dockWidgetServerRegisters->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetServerRegisters->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QString::fromUtf8("dockWidgetContents_10"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidgetServerRegisters = new QTabWidget(dockWidgetContents_10);
        tabWidgetServerRegisters->setObjectName(QString::fromUtf8("tabWidgetServerRegisters"));

        verticalLayout_2->addWidget(tabWidgetServerRegisters);

        dockWidgetServerRegisters->setWidget(dockWidgetContents_10);

        verticalLayout->addWidget(dockWidgetServerRegisters);


        gridLayout->addLayout(verticalLayout, 0, 1, 9, 1);

        dockWidgetNetworkSettings = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetNetworkSettings->setObjectName(QString::fromUtf8("dockWidgetNetworkSettings"));
        sizePolicy.setHeightForWidth(dockWidgetNetworkSettings->sizePolicy().hasHeightForWidth());
        dockWidgetNetworkSettings->setSizePolicy(sizePolicy);
        dockWidgetNetworkSettings->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetNetworkSettings->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(dockWidgetContents_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        comboBoxAddress = new QComboBox(dockWidgetContents_2);
        comboBoxAddress->setObjectName(QString::fromUtf8("comboBoxAddress"));
        comboBoxAddress->setEditable(true);

        gridLayout_3->addWidget(comboBoxAddress, 0, 1, 1, 1);

        spinBoxPort = new QSpinBox(dockWidgetContents_2);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMaximum(65535);

        gridLayout_3->addWidget(spinBoxPort, 1, 1, 1, 1);

        label_3 = new QLabel(dockWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        dockWidgetNetworkSettings->setWidget(dockWidgetContents_2);

        gridLayout->addWidget(dockWidgetNetworkSettings, 1, 0, 1, 1);

        dockWidgetClientParameters = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetClientParameters->setObjectName(QString::fromUtf8("dockWidgetClientParameters"));
        sizePolicy.setHeightForWidth(dockWidgetClientParameters->sizePolicy().hasHeightForWidth());
        dockWidgetClientParameters->setSizePolicy(sizePolicy);
        dockWidgetClientParameters->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetClientParameters->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        gridLayout_8 = new QGridLayout(dockWidgetContents_5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        line_6 = new QFrame(dockWidgetContents_5);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_6, 2, 0, 1, 2);

        label_19 = new QLabel(dockWidgetContents_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(label_19, 6, 0, 1, 1);

        spinBoxDeviceAddress = new QSpinBox(dockWidgetContents_5);
        spinBoxDeviceAddress->setObjectName(QString::fromUtf8("spinBoxDeviceAddress"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxDeviceAddress->sizePolicy().hasHeightForWidth());
        spinBoxDeviceAddress->setSizePolicy(sizePolicy4);
        spinBoxDeviceAddress->setMaximum(255);

        gridLayout_8->addWidget(spinBoxDeviceAddress, 5, 1, 1, 1);

        spinBoxQuantity = new QSpinBox(dockWidgetContents_5);
        spinBoxQuantity->setObjectName(QString::fromUtf8("spinBoxQuantity"));
        sizePolicy4.setHeightForWidth(spinBoxQuantity->sizePolicy().hasHeightForWidth());
        spinBoxQuantity->setSizePolicy(sizePolicy4);
        spinBoxQuantity->setMinimum(1);
        spinBoxQuantity->setMaximum(128);

        gridLayout_8->addWidget(spinBoxQuantity, 7, 1, 1, 1);

        label_18 = new QLabel(dockWidgetContents_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(label_18, 5, 0, 1, 1);

        label_4 = new QLabel(dockWidgetContents_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(label_4, 0, 0, 1, 1);

        spinBoxRepeatTime = new QSpinBox(dockWidgetContents_5);
        spinBoxRepeatTime->setObjectName(QString::fromUtf8("spinBoxRepeatTime"));
        spinBoxRepeatTime->setMinimum(0);
        spinBoxRepeatTime->setValue(3);

        gridLayout_8->addWidget(spinBoxRepeatTime, 0, 1, 1, 1);

        spinBoxTimeout = new QSpinBox(dockWidgetContents_5);
        spinBoxTimeout->setObjectName(QString::fromUtf8("spinBoxTimeout"));
        spinBoxTimeout->setMinimum(500);
        spinBoxTimeout->setMaximum(10000);
        spinBoxTimeout->setSingleStep(100);
        spinBoxTimeout->setValue(500);

        gridLayout_8->addWidget(spinBoxTimeout, 1, 1, 1, 1);

        label_20 = new QLabel(dockWidgetContents_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(label_20, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonRead = new QPushButton(dockWidgetContents_5);
        pushButtonRead->setObjectName(QString::fromUtf8("pushButtonRead"));

        horizontalLayout_2->addWidget(pushButtonRead);

        pushButtonWrite = new QPushButton(dockWidgetContents_5);
        pushButtonWrite->setObjectName(QString::fromUtf8("pushButtonWrite"));

        horizontalLayout_2->addWidget(pushButtonWrite);


        gridLayout_8->addLayout(horizontalLayout_2, 8, 0, 1, 2);

        label_5 = new QLabel(dockWidgetContents_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(label_5, 1, 0, 1, 1);

        spinBoxStartAddress = new QSpinBox(dockWidgetContents_5);
        spinBoxStartAddress->setObjectName(QString::fromUtf8("spinBoxStartAddress"));
        sizePolicy4.setHeightForWidth(spinBoxStartAddress->sizePolicy().hasHeightForWidth());
        spinBoxStartAddress->setSizePolicy(sizePolicy4);
        spinBoxStartAddress->setMaximum(65535);

        gridLayout_8->addWidget(spinBoxStartAddress, 6, 1, 1, 1);

        comboBoxFunctionCode = new QComboBox(dockWidgetContents_5);
        comboBoxFunctionCode->setObjectName(QString::fromUtf8("comboBoxFunctionCode"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(comboBoxFunctionCode->sizePolicy().hasHeightForWidth());
        comboBoxFunctionCode->setSizePolicy(sizePolicy5);
        comboBoxFunctionCode->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_8->addWidget(comboBoxFunctionCode, 4, 0, 1, 2);

        label_17 = new QLabel(dockWidgetContents_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy6);

        gridLayout_8->addWidget(label_17, 3, 0, 1, 2);

        dockWidgetClientParameters->setWidget(dockWidgetContents_5);

        gridLayout->addWidget(dockWidgetClientParameters, 4, 0, 1, 1);

        dockWidgetSerialPortSettings = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetSerialPortSettings->setObjectName(QString::fromUtf8("dockWidgetSerialPortSettings"));
        sizePolicy.setHeightForWidth(dockWidgetSerialPortSettings->sizePolicy().hasHeightForWidth());
        dockWidgetSerialPortSettings->setSizePolicy(sizePolicy);
        dockWidgetSerialPortSettings->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetSerialPortSettings->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_4 = new QGridLayout(dockWidgetContents_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(dockWidgetContents_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        comboBoxDataBits = new QComboBox(dockWidgetContents_3);
        comboBoxDataBits->setObjectName(QString::fromUtf8("comboBoxDataBits"));

        gridLayout_4->addWidget(comboBoxDataBits, 2, 1, 1, 1);

        label_8 = new QLabel(dockWidgetContents_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(dockWidgetContents_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        comboBoxStopBits = new QComboBox(dockWidgetContents_3);
        comboBoxStopBits->setObjectName(QString::fromUtf8("comboBoxStopBits"));

        gridLayout_4->addWidget(comboBoxStopBits, 3, 1, 1, 1);

        comboBoxPortName = new QComboBox(dockWidgetContents_3);
        comboBoxPortName->setObjectName(QString::fromUtf8("comboBoxPortName"));

        gridLayout_4->addWidget(comboBoxPortName, 0, 1, 1, 1);

        label_11 = new QLabel(dockWidgetContents_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_11, 3, 0, 1, 1);

        comboBoxBaudRate = new QComboBox(dockWidgetContents_3);
        comboBoxBaudRate->setObjectName(QString::fromUtf8("comboBoxBaudRate"));
        comboBoxBaudRate->setEditable(true);

        gridLayout_4->addWidget(comboBoxBaudRate, 1, 1, 1, 1);

        label_12 = new QLabel(dockWidgetContents_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_12, 4, 0, 1, 1);

        comboBoxParity = new QComboBox(dockWidgetContents_3);
        comboBoxParity->setObjectName(QString::fromUtf8("comboBoxParity"));

        gridLayout_4->addWidget(comboBoxParity, 4, 1, 1, 1);

        dockWidgetSerialPortSettings->setWidget(dockWidgetContents_3);

        gridLayout->addWidget(dockWidgetSerialPortSettings, 2, 0, 1, 1);

        dockWidgetServerParameters = new QDockWidget(xToolsModbusStudioUi);
        dockWidgetServerParameters->setObjectName(QString::fromUtf8("dockWidgetServerParameters"));
        sizePolicy.setHeightForWidth(dockWidgetServerParameters->sizePolicy().hasHeightForWidth());
        dockWidgetServerParameters->setSizePolicy(sizePolicy);
        dockWidgetServerParameters->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetServerParameters->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout_5 = new QGridLayout(dockWidgetContents_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(dockWidgetContents_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 2, 0, 1, 1);

        spinBoxServerAddress = new QSpinBox(dockWidgetContents_4);
        spinBoxServerAddress->setObjectName(QString::fromUtf8("spinBoxServerAddress"));
        spinBoxServerAddress->setMaximum(265);

        gridLayout_5->addWidget(spinBoxServerAddress, 2, 1, 1, 1);

        checkBoxListenOnlyMode = new QCheckBox(dockWidgetContents_4);
        checkBoxListenOnlyMode->setObjectName(QString::fromUtf8("checkBoxListenOnlyMode"));

        gridLayout_5->addWidget(checkBoxListenOnlyMode, 1, 0, 1, 2);

        checkBoxDeviceBusy = new QCheckBox(dockWidgetContents_4);
        checkBoxDeviceBusy->setObjectName(QString::fromUtf8("checkBoxDeviceBusy"));

        gridLayout_5->addWidget(checkBoxDeviceBusy, 0, 0, 1, 2);

        dockWidgetServerParameters->setWidget(dockWidgetContents_4);

        gridLayout->addWidget(dockWidgetServerParameters, 3, 0, 1, 1);


        retranslateUi(xToolsModbusStudioUi);

        tabWidgetServerRegisters->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(xToolsModbusStudioUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsModbusStudioUi)
    {
        dockWidgetDeviceSettings->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Device Operations", nullptr));
        label->setText(QApplication::translate("xToolsModbusStudioUi", "Device list", nullptr));
        pushButtonCloese->setText(QApplication::translate("xToolsModbusStudioUi", "Close", nullptr));
        pushButtonOpen->setText(QApplication::translate("xToolsModbusStudioUi", "Open", nullptr));
        dockWidgetConsole->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Console", nullptr));
        dockWidgetClientRegisters->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Client Registers", nullptr));
        dockWidgetCustomCommand->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Custom Protocol Data Unit", nullptr));
        send_->setText(QApplication::translate("xToolsModbusStudioUi", "Send", nullptr));
        dockWidgetServerRegisters->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Server Register", nullptr));
        dockWidgetNetworkSettings->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Network Settings", nullptr));
        label_2->setText(QApplication::translate("xToolsModbusStudioUi", "Address", nullptr));
        label_3->setText(QApplication::translate("xToolsModbusStudioUi", "Port", nullptr));
        dockWidgetClientParameters->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Client parameters", nullptr));
        label_19->setText(QApplication::translate("xToolsModbusStudioUi", "Start address", nullptr));
        label_18->setText(QApplication::translate("xToolsModbusStudioUi", "Target address", nullptr));
        label_4->setText(QApplication::translate("xToolsModbusStudioUi", "Timeout", nullptr));
        label_20->setText(QApplication::translate("xToolsModbusStudioUi", "Address number", nullptr));
        pushButtonRead->setText(QApplication::translate("xToolsModbusStudioUi", "Read", nullptr));
        pushButtonWrite->setText(QApplication::translate("xToolsModbusStudioUi", "Write", nullptr));
        label_5->setText(QApplication::translate("xToolsModbusStudioUi", "Repeat times", nullptr));
        label_17->setText(QApplication::translate("xToolsModbusStudioUi", "Function code", nullptr));
        dockWidgetSerialPortSettings->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Serial Port Settings", nullptr));
        label_10->setText(QApplication::translate("xToolsModbusStudioUi", "Data bits", nullptr));
        label_8->setText(QApplication::translate("xToolsModbusStudioUi", "Port name", nullptr));
        label_9->setText(QApplication::translate("xToolsModbusStudioUi", "Baud rate", nullptr));
        label_11->setText(QApplication::translate("xToolsModbusStudioUi", "Stop bits", nullptr));
        label_12->setText(QApplication::translate("xToolsModbusStudioUi", "Parity", nullptr));
        dockWidgetServerParameters->setWindowTitle(QApplication::translate("xToolsModbusStudioUi", "Server Parameters", nullptr));
        label_6->setText(QApplication::translate("xToolsModbusStudioUi", "Server address", nullptr));
        checkBoxListenOnlyMode->setText(QApplication::translate("xToolsModbusStudioUi", "Listen only mode", nullptr));
        checkBoxDeviceBusy->setText(QApplication::translate("xToolsModbusStudioUi", "Device busy", nullptr));
        Q_UNUSED(xToolsModbusStudioUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsModbusStudioUi: public Ui_xToolsModbusStudioUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSMODBUSSTUDIOUI_H
