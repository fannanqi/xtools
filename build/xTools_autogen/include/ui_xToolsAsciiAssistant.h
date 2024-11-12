/********************************************************************************
** Form generated from reading UI file 'xToolsAsciiAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSASCIIASSISTANT_H
#define UI_XTOOLSASCIIASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsAsciiAssistant
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QTableWidget *tableWidget;

    void setupUi(QWidget *xToolsAsciiAssistant)
    {
        if (xToolsAsciiAssistant->objectName().isEmpty())
            xToolsAsciiAssistant->setObjectName(QString::fromUtf8("xToolsAsciiAssistant"));
        xToolsAsciiAssistant->resize(908, 480);
        xToolsAsciiAssistant->setMinimumSize(QSize(680, 480));
        xToolsAsciiAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsAsciiAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(xToolsAsciiAssistant);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(xToolsAsciiAssistant);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setText(QString::fromUtf8(""));
        lineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        checkBox = new QCheckBox(xToolsAsciiAssistant);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(checkBox, 0, 2, 1, 1);

        tableWidget = new QTableWidget(xToolsAsciiAssistant);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);


        retranslateUi(xToolsAsciiAssistant);

        QMetaObject::connectSlotsByName(xToolsAsciiAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsAsciiAssistant)
    {
        label->setText(QApplication::translate("xToolsAsciiAssistant", "Filter", nullptr));
        checkBox->setText(QApplication::translate("xToolsAsciiAssistant", "Preserve case", nullptr));
        Q_UNUSED(xToolsAsciiAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsAsciiAssistant: public Ui_xToolsAsciiAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSASCIIASSISTANT_H
