/********************************************************************************
** Form generated from reading UI file 'xToolsToolBoxUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSTOOLBOXUI_H
#define UI_XTOOLSTOOLBOXUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <xToolsCheckBox.h>
#include <xToolsComboBox.h>
#include <xToolsStatisticianToolUi.h>
#include <xToolsTextFormatComboBox.h>
#include <xToolsVelometerToolUi.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsToolBoxUi
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widgetControl;
    QVBoxLayout *verticalLayout;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_8;
    QWidget *widgetCommunicationToolUi;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonCommunicationSettings;
    QPushButton *pushButtonCommunicationOpen;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    xToolsTextFormatComboBox *comboBoxOutputFormat;
    QGridLayout *gridLayout_5;
    xToolsCheckBox *checkBoxOutputTx;
    xToolsCheckBox *checkBoxOutputMs;
    xToolsCheckBox *checkBoxOutputWrap;
    xToolsCheckBox *checkBoxOutputRx;
    xToolsCheckBox *checkBoxOutputDate;
    xToolsCheckBox *checkBoxOutputTime;
    xToolsCheckBox *checkBoxFromTo;
    xToolsCheckBox *checkBoxConsoleMode;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonOutputSettings;
    QPushButton *pushButtonOutputClear;
    QSpacerItem *verticalSpacer;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QComboBox *comboBoxInputIntervel;
    QLabel *label_6;
    xToolsTextFormatComboBox *comboBoxInputFormat;
    QGridLayout *gridLayout;
    QPushButton *pushButtonInputSend;
    QPushButton *pushButtonInputSettings;
    QTabWidget *tabWidget;
    QWidget *tabIO;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowserOutput;
    QToolButton *toolButtonPrestore;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label_2;
    xToolsStatisticianToolUi *widgetRxStatistician;
    xToolsVelometerToolUi *widgetRxVelometer;
    QLabel *label_11;
    xToolsStatisticianToolUi *widgetTxStatistician;
    xToolsVelometerToolUi *widgetTxVelometer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAlgorithm;
    QLabel *label_7;
    QLabel *labelCrc;
    xToolsComboBox *comboBoxInputText;
    QWidget *tabEmiter;
    QWidget *tabResponser;
    QWidget *tabPrestorer;
    QWidget *tabTransmitter;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidgetTransmitter;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *xToolsToolBoxUi)
    {
        if (xToolsToolBoxUi->objectName().isEmpty())
            xToolsToolBoxUi->setObjectName(QString::fromUtf8("xToolsToolBoxUi"));
        xToolsToolBoxUi->resize(883, 690);
        xToolsToolBoxUi->setMinimumSize(QSize(0, 0));
        xToolsToolBoxUi->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(xToolsToolBoxUi);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widgetControl = new QWidget(xToolsToolBoxUi);
        widgetControl->setObjectName(QString::fromUtf8("widgetControl"));
        widgetControl->setMinimumSize(QSize(220, 0));
        verticalLayout = new QVBoxLayout(widgetControl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dockWidget_3 = new QDockWidget(widgetControl);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget_3->sizePolicy().hasHeightForWidth());
        dockWidget_3->setSizePolicy(sizePolicy);
        dockWidget_3->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_3->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_8 = new QGridLayout(dockWidgetContents_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 4, 0, 0);
        widgetCommunicationToolUi = new QWidget(dockWidgetContents_3);
        widgetCommunicationToolUi->setObjectName(QString::fromUtf8("widgetCommunicationToolUi"));
        widgetCommunicationToolUi->setMinimumSize(QSize(0, 0));

        gridLayout_8->addWidget(widgetCommunicationToolUi, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButtonCommunicationSettings = new QPushButton(dockWidgetContents_3);
        pushButtonCommunicationSettings->setObjectName(QString::fromUtf8("pushButtonCommunicationSettings"));

        horizontalLayout_5->addWidget(pushButtonCommunicationSettings);

        pushButtonCommunicationOpen = new QPushButton(dockWidgetContents_3);
        pushButtonCommunicationOpen->setObjectName(QString::fromUtf8("pushButtonCommunicationOpen"));

        horizontalLayout_5->addWidget(pushButtonCommunicationOpen);


        gridLayout_8->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        dockWidget_3->setWidget(dockWidgetContents_3);

        verticalLayout->addWidget(dockWidget_3);

        dockWidget = new QDockWidget(widgetControl);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidget->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_6 = new QGridLayout(dockWidgetContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 4, 0, 0);
        label_9 = new QLabel(dockWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        comboBoxOutputFormat = new xToolsTextFormatComboBox(dockWidgetContents);
        comboBoxOutputFormat->setObjectName(QString::fromUtf8("comboBoxOutputFormat"));

        gridLayout_6->addWidget(comboBoxOutputFormat, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBoxOutputTx = new xToolsCheckBox(dockWidgetContents);
        checkBoxOutputTx->setObjectName(QString::fromUtf8("checkBoxOutputTx"));

        gridLayout_5->addWidget(checkBoxOutputTx, 0, 1, 1, 1);

        checkBoxOutputMs = new xToolsCheckBox(dockWidgetContents);
        checkBoxOutputMs->setObjectName(QString::fromUtf8("checkBoxOutputMs"));

        gridLayout_5->addWidget(checkBoxOutputMs, 1, 2, 1, 1);

        checkBoxOutputWrap = new xToolsCheckBox(dockWidgetContents);
        checkBoxOutputWrap->setObjectName(QString::fromUtf8("checkBoxOutputWrap"));

        gridLayout_5->addWidget(checkBoxOutputWrap, 0, 2, 1, 1);

        checkBoxOutputRx = new xToolsCheckBox(dockWidgetContents);
        checkBoxOutputRx->setObjectName(QString::fromUtf8("checkBoxOutputRx"));

        gridLayout_5->addWidget(checkBoxOutputRx, 0, 0, 1, 1);

        checkBoxOutputDate = new xToolsCheckBox(dockWidgetContents);
        checkBoxOutputDate->setObjectName(QString::fromUtf8("checkBoxOutputDate"));

        gridLayout_5->addWidget(checkBoxOutputDate, 1, 0, 1, 1);

        checkBoxOutputTime = new xToolsCheckBox(dockWidgetContents);
        checkBoxOutputTime->setObjectName(QString::fromUtf8("checkBoxOutputTime"));
        checkBoxOutputTime->setChecked(true);

        gridLayout_5->addWidget(checkBoxOutputTime, 1, 1, 1, 1);

        checkBoxFromTo = new xToolsCheckBox(dockWidgetContents);
        checkBoxFromTo->setObjectName(QString::fromUtf8("checkBoxFromTo"));
        checkBoxFromTo->setCheckable(true);
        checkBoxFromTo->setChecked(true);

        gridLayout_5->addWidget(checkBoxFromTo, 2, 0, 1, 1);

        checkBoxConsoleMode = new xToolsCheckBox(dockWidgetContents);
        checkBoxConsoleMode->setObjectName(QString::fromUtf8("checkBoxConsoleMode"));

        gridLayout_5->addWidget(checkBoxConsoleMode, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButtonOutputSettings = new QPushButton(dockWidgetContents);
        pushButtonOutputSettings->setObjectName(QString::fromUtf8("pushButtonOutputSettings"));

        horizontalLayout_4->addWidget(pushButtonOutputSettings);

        pushButtonOutputClear = new QPushButton(dockWidgetContents);
        pushButtonOutputClear->setObjectName(QString::fromUtf8("pushButtonOutputClear"));

        horizontalLayout_4->addWidget(pushButtonOutputClear);


        gridLayout_6->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        dockWidget->setWidget(dockWidgetContents);

        verticalLayout->addWidget(dockWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        dockWidget_2 = new QDockWidget(widgetControl);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        sizePolicy.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy);
        dockWidget_2->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_2->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_7 = new QGridLayout(dockWidgetContents_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 4, 0, 0);
        label_5 = new QLabel(dockWidgetContents_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        comboBoxInputIntervel = new QComboBox(dockWidgetContents_2);
        comboBoxInputIntervel->setObjectName(QString::fromUtf8("comboBoxInputIntervel"));
        comboBoxInputIntervel->setEditable(false);

        gridLayout_7->addWidget(comboBoxInputIntervel, 0, 1, 1, 1);

        label_6 = new QLabel(dockWidgetContents_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        comboBoxInputFormat = new xToolsTextFormatComboBox(dockWidgetContents_2);
        comboBoxInputFormat->setObjectName(QString::fromUtf8("comboBoxInputFormat"));

        gridLayout_7->addWidget(comboBoxInputFormat, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonInputSend = new QPushButton(dockWidgetContents_2);
        pushButtonInputSend->setObjectName(QString::fromUtf8("pushButtonInputSend"));

        gridLayout->addWidget(pushButtonInputSend, 0, 1, 1, 1);

        pushButtonInputSettings = new QPushButton(dockWidgetContents_2);
        pushButtonInputSettings->setObjectName(QString::fromUtf8("pushButtonInputSettings"));

        gridLayout->addWidget(pushButtonInputSettings, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 2, 0, 1, 2);

        dockWidget_2->setWidget(dockWidgetContents_2);

        verticalLayout->addWidget(dockWidget_2);


        gridLayout_3->addWidget(widgetControl, 0, 0, 1, 1);

        tabWidget = new QTabWidget(xToolsToolBoxUi);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabIO = new QWidget();
        tabIO->setObjectName(QString::fromUtf8("tabIO"));
        gridLayout_2 = new QGridLayout(tabIO);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowserOutput = new QTextBrowser(tabIO);
        textBrowserOutput->setObjectName(QString::fromUtf8("textBrowserOutput"));

        gridLayout_2->addWidget(textBrowserOutput, 1, 0, 1, 6);

        toolButtonPrestore = new QToolButton(tabIO);
        toolButtonPrestore->setObjectName(QString::fromUtf8("toolButtonPrestore"));
        toolButtonPrestore->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(toolButtonPrestore, 3, 5, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(tabIO);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label_8);

        label_2 = new QLabel(tabIO);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: \"blue\"\n"
"}"));

        horizontalLayout->addWidget(label_2);

        widgetRxStatistician = new xToolsStatisticianToolUi(tabIO);
        widgetRxStatistician->setObjectName(QString::fromUtf8("widgetRxStatistician"));
        widgetRxStatistician->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(widgetRxStatistician);

        widgetRxVelometer = new xToolsVelometerToolUi(tabIO);
        widgetRxVelometer->setObjectName(QString::fromUtf8("widgetRxVelometer"));
        widgetRxVelometer->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(widgetRxVelometer);

        label_11 = new QLabel(tabIO);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: \"green\"\n"
"}"));

        horizontalLayout->addWidget(label_11);

        widgetTxStatistician = new xToolsStatisticianToolUi(tabIO);
        widgetTxStatistician->setObjectName(QString::fromUtf8("widgetTxStatistician"));
        widgetTxStatistician->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(widgetTxStatistician);

        widgetTxVelometer = new xToolsVelometerToolUi(tabIO);
        widgetTxVelometer->setObjectName(QString::fromUtf8("widgetTxVelometer"));
        widgetTxVelometer->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(widgetTxVelometer);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tabIO);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelAlgorithm = new QLabel(tabIO);
        labelAlgorithm->setObjectName(QString::fromUtf8("labelAlgorithm"));
        labelAlgorithm->setText(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(labelAlgorithm);

        label_7 = new QLabel(tabIO);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setText(QString::fromUtf8(":"));

        horizontalLayout_2->addWidget(label_7);

        labelCrc = new QLabel(tabIO);
        labelCrc->setObjectName(QString::fromUtf8("labelCrc"));

        horizontalLayout_2->addWidget(labelCrc);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 6);

        comboBoxInputText = new xToolsComboBox(tabIO);
        comboBoxInputText->setObjectName(QString::fromUtf8("comboBoxInputText"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxInputText->sizePolicy().hasHeightForWidth());
        comboBoxInputText->setSizePolicy(sizePolicy3);
        comboBoxInputText->setEditable(true);

        gridLayout_2->addWidget(comboBoxInputText, 3, 0, 1, 5);

        tabWidget->addTab(tabIO, QString());
        tabEmiter = new QWidget();
        tabEmiter->setObjectName(QString::fromUtf8("tabEmiter"));
        tabWidget->addTab(tabEmiter, QString());
        tabResponser = new QWidget();
        tabResponser->setObjectName(QString::fromUtf8("tabResponser"));
        tabWidget->addTab(tabResponser, QString());
        tabPrestorer = new QWidget();
        tabPrestorer->setObjectName(QString::fromUtf8("tabPrestorer"));
        tabWidget->addTab(tabPrestorer, QString());
        tabTransmitter = new QWidget();
        tabTransmitter->setObjectName(QString::fromUtf8("tabTransmitter"));
        gridLayout_4 = new QGridLayout(tabTransmitter);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidgetTransmitter = new QTabWidget(tabTransmitter);
        tabWidgetTransmitter->setObjectName(QString::fromUtf8("tabWidgetTransmitter"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidgetTransmitter->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidgetTransmitter->addTab(tab_2, QString());

        gridLayout_4->addWidget(tabWidgetTransmitter, 0, 0, 1, 1);

        tabWidget->addTab(tabTransmitter, QString());

        gridLayout_3->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(xToolsToolBoxUi);
        QObject::connect(pushButtonOutputClear, SIGNAL(clicked()), textBrowserOutput, SLOT(clear()));

        tabWidget->setCurrentIndex(0);
        tabWidgetTransmitter->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(xToolsToolBoxUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsToolBoxUi)
    {
        dockWidget_3->setWindowTitle(QApplication::translate("xToolsToolBoxUi", "Communication control", nullptr));
        pushButtonCommunicationSettings->setText(QApplication::translate("xToolsToolBoxUi", "Settings", nullptr));
        pushButtonCommunicationOpen->setText(QApplication::translate("xToolsToolBoxUi", "Open", nullptr));
        dockWidget->setWindowTitle(QApplication::translate("xToolsToolBoxUi", "Output control", nullptr));
        label_9->setText(QApplication::translate("xToolsToolBoxUi", "Format", nullptr));
        checkBoxOutputTx->setText(QApplication::translate("xToolsToolBoxUi", "Tx", nullptr));
        checkBoxOutputMs->setText(QApplication::translate("xToolsToolBoxUi", "MS", nullptr));
        checkBoxOutputWrap->setText(QApplication::translate("xToolsToolBoxUi", "Wrap", nullptr));
        checkBoxOutputRx->setText(QApplication::translate("xToolsToolBoxUi", "Rx", nullptr));
        checkBoxOutputDate->setText(QApplication::translate("xToolsToolBoxUi", "Date", nullptr));
        checkBoxOutputTime->setText(QApplication::translate("xToolsToolBoxUi", "Time", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxFromTo->setToolTip(QApplication::translate("xToolsToolBoxUi", "Show the data origin or sending target", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxFromTo->setText(QApplication::translate("xToolsToolBoxUi", "From-To", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxConsoleMode->setToolTip(QApplication::translate("xToolsToolBoxUi", "Console mode", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxConsoleMode->setText(QApplication::translate("xToolsToolBoxUi", "Console", nullptr));
        pushButtonOutputSettings->setText(QApplication::translate("xToolsToolBoxUi", "Settings", nullptr));
        pushButtonOutputClear->setText(QApplication::translate("xToolsToolBoxUi", "Clear", nullptr));
        dockWidget_2->setWindowTitle(QApplication::translate("xToolsToolBoxUi", "Input control", nullptr));
        label_5->setText(QApplication::translate("xToolsToolBoxUi", "Cycle", nullptr));
        label_6->setText(QApplication::translate("xToolsToolBoxUi", "Format", nullptr));
        pushButtonInputSend->setText(QApplication::translate("xToolsToolBoxUi", "Send", nullptr));
        pushButtonInputSettings->setText(QApplication::translate("xToolsToolBoxUi", "Settings", nullptr));
        label_8->setText(QApplication::translate("xToolsToolBoxUi", "Output", nullptr));
        label_2->setText(QApplication::translate("xToolsToolBoxUi", "Rx", nullptr));
        label_11->setText(QApplication::translate("xToolsToolBoxUi", "Tx", nullptr));
        label->setText(QApplication::translate("xToolsToolBoxUi", "Input", nullptr));
        labelCrc->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabIO), QApplication::translate("xToolsToolBoxUi", "I/O", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabEmiter), QApplication::translate("xToolsToolBoxUi", "Emiter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabResponser), QApplication::translate("xToolsToolBoxUi", "Responser", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPrestorer), QApplication::translate("xToolsToolBoxUi", "Prestorer", nullptr));
        tabWidgetTransmitter->setTabText(tabWidgetTransmitter->indexOf(tab), QApplication::translate("xToolsToolBoxUi", "Tab 1", nullptr));
        tabWidgetTransmitter->setTabText(tabWidgetTransmitter->indexOf(tab_2), QApplication::translate("xToolsToolBoxUi", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTransmitter), QApplication::translate("xToolsToolBoxUi", "Transmitter", nullptr));
        Q_UNUSED(xToolsToolBoxUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsToolBoxUi: public Ui_xToolsToolBoxUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSTOOLBOXUI_H
