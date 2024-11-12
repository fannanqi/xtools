/********************************************************************************
** Form generated from reading UI file 'xToolsFileCheckAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSFILECHECKASSISTANT_H
#define UI_XTOOLSFILECHECKASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsFileCheckAssistant
{
public:
    QGridLayout *gridLayout;
    QLabel *remainTimeLabel;
    QLabel *messageLabel;
    QCheckBox *upperCheckBox;
    QProgressBar *calculatorProgressBar;
    QLineEdit *resultLineEdit;
    QLineEdit *filePathlineEdit;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *algorithmComboBox;
    QPushButton *startStopPushButton;
    QPushButton *openPushButton;

    void setupUi(QWidget *xToolsFileCheckAssistant)
    {
        if (xToolsFileCheckAssistant->objectName().isEmpty())
            xToolsFileCheckAssistant->setObjectName(QString::fromUtf8("xToolsFileCheckAssistant"));
        xToolsFileCheckAssistant->resize(446, 178);
        gridLayout = new QGridLayout(xToolsFileCheckAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        remainTimeLabel = new QLabel(xToolsFileCheckAssistant);
        remainTimeLabel->setObjectName(QString::fromUtf8("remainTimeLabel"));

        gridLayout->addWidget(remainTimeLabel, 4, 0, 1, 2);

        messageLabel = new QLabel(xToolsFileCheckAssistant);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(messageLabel, 5, 0, 1, 5);

        upperCheckBox = new QCheckBox(xToolsFileCheckAssistant);
        upperCheckBox->setObjectName(QString::fromUtf8("upperCheckBox"));

        gridLayout->addWidget(upperCheckBox, 4, 4, 1, 1);

        calculatorProgressBar = new QProgressBar(xToolsFileCheckAssistant);
        calculatorProgressBar->setObjectName(QString::fromUtf8("calculatorProgressBar"));
        calculatorProgressBar->setLayoutDirection(Qt::LeftToRight);
        calculatorProgressBar->setAutoFillBackground(false);
        calculatorProgressBar->setValue(24);
        calculatorProgressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(calculatorProgressBar, 3, 1, 1, 4);

        resultLineEdit = new QLineEdit(xToolsFileCheckAssistant);
        resultLineEdit->setObjectName(QString::fromUtf8("resultLineEdit"));

        gridLayout->addWidget(resultLineEdit, 2, 1, 1, 4);

        filePathlineEdit = new QLineEdit(xToolsFileCheckAssistant);
        filePathlineEdit->setObjectName(QString::fromUtf8("filePathlineEdit"));
        filePathlineEdit->setText(QString::fromUtf8("E:/ISO/Linux/Debian/debian-live-9.9.0-amd64-kde.iso"));

        gridLayout->addWidget(filePathlineEdit, 0, 1, 1, 4);

        label = new QLabel(xToolsFileCheckAssistant);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(xToolsFileCheckAssistant);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(xToolsFileCheckAssistant);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(xToolsFileCheckAssistant);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        algorithmComboBox = new QComboBox(xToolsFileCheckAssistant);
        algorithmComboBox->setObjectName(QString::fromUtf8("algorithmComboBox"));

        gridLayout->addWidget(algorithmComboBox, 1, 1, 1, 4);

        startStopPushButton = new QPushButton(xToolsFileCheckAssistant);
        startStopPushButton->setObjectName(QString::fromUtf8("startStopPushButton"));

        gridLayout->addWidget(startStopPushButton, 4, 2, 1, 1);

        openPushButton = new QPushButton(xToolsFileCheckAssistant);
        openPushButton->setObjectName(QString::fromUtf8("openPushButton"));

        gridLayout->addWidget(openPushButton, 4, 3, 1, 1);


        retranslateUi(xToolsFileCheckAssistant);

        QMetaObject::connectSlotsByName(xToolsFileCheckAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsFileCheckAssistant)
    {
        xToolsFileCheckAssistant->setWindowTitle(QApplication::translate("xToolsFileCheckAssistant", "Form", nullptr));
        remainTimeLabel->setText(QString());
        messageLabel->setText(QString());
        upperCheckBox->setText(QApplication::translate("xToolsFileCheckAssistant", "Upper result", nullptr));
        label->setText(QApplication::translate("xToolsFileCheckAssistant", "Checked file", nullptr));
        label_4->setText(QApplication::translate("xToolsFileCheckAssistant", "Checked progress", nullptr));
        label_2->setText(QApplication::translate("xToolsFileCheckAssistant", "Checked algorithm", nullptr));
        label_3->setText(QApplication::translate("xToolsFileCheckAssistant", "Checked result", nullptr));
        startStopPushButton->setText(QApplication::translate("xToolsFileCheckAssistant", "Calculate", nullptr));
        openPushButton->setText(QApplication::translate("xToolsFileCheckAssistant", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsFileCheckAssistant: public Ui_xToolsFileCheckAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSFILECHECKASSISTANT_H
