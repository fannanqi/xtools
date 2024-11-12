/********************************************************************************
** Form generated from reading UI file 'xToolsStringAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSTRINGASSISTANT_H
#define UI_XTOOLSSTRINGASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <xToolsTextFormatComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsStringAssistant
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    xToolsTextFormatComboBox *inputFormatComboBox;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    xToolsTextFormatComboBox *outputFormatComboBox;
    QPushButton *createPushButton;

    void setupUi(QWidget *xToolsStringAssistant)
    {
        if (xToolsStringAssistant->objectName().isEmpty())
            xToolsStringAssistant->setObjectName(QString::fromUtf8("xToolsStringAssistant"));
        xToolsStringAssistant->resize(510, 272);
        xToolsStringAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsStringAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(xToolsStringAssistant);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 4);

        textEdit = new QTextEdit(xToolsStringAssistant);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 4);

        widget = new QWidget(xToolsStringAssistant);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        inputFormatComboBox = new xToolsTextFormatComboBox(widget);
        inputFormatComboBox->setObjectName(QString::fromUtf8("inputFormatComboBox"));

        horizontalLayout->addWidget(inputFormatComboBox);


        gridLayout->addWidget(widget, 2, 0, 1, 4);

        label_2 = new QLabel(xToolsStringAssistant);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        textBrowser = new QTextBrowser(xToolsStringAssistant);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 4, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(249, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        label_4 = new QLabel(xToolsStringAssistant);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        outputFormatComboBox = new xToolsTextFormatComboBox(xToolsStringAssistant);
        outputFormatComboBox->setObjectName(QString::fromUtf8("outputFormatComboBox"));

        gridLayout->addWidget(outputFormatComboBox, 5, 2, 1, 1);

        createPushButton = new QPushButton(xToolsStringAssistant);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));

        gridLayout->addWidget(createPushButton, 5, 3, 1, 1);


        retranslateUi(xToolsStringAssistant);

        QMetaObject::connectSlotsByName(xToolsStringAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsStringAssistant)
    {
        label->setText(QApplication::translate("xToolsStringAssistant", "Raw data", nullptr));
        label_3->setText(QApplication::translate("xToolsStringAssistant", "Input format", nullptr));
        label_2->setText(QApplication::translate("xToolsStringAssistant", "Cooked data", nullptr));
        label_4->setText(QApplication::translate("xToolsStringAssistant", "Output format", nullptr));
        createPushButton->setText(QApplication::translate("xToolsStringAssistant", "Create", nullptr));
        Q_UNUSED(xToolsStringAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsStringAssistant: public Ui_xToolsStringAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSTRINGASSISTANT_H
