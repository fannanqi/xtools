/********************************************************************************
** Form generated from reading UI file 'xToolsCrcCalculatorToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSCRCCALCULATORTOOLUI_H
#define UI_XTOOLSCRCCALCULATORTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <xToolsCrcAlgorithmComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsCrcCalculatorToolUi
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxStartIndex;
    QLabel *label_2;
    QSpinBox *spinBoxEndIndex;
    QLabel *label_3;
    xToolsCrcAlgorithmComboBox *comboBoxAlgorithm;
    QCheckBox *checkBoxBigEndian;

    void setupUi(QWidget *xToolsCrcCalculatorToolUi)
    {
        if (xToolsCrcCalculatorToolUi->objectName().isEmpty())
            xToolsCrcCalculatorToolUi->setObjectName(QString::fromUtf8("xToolsCrcCalculatorToolUi"));
        xToolsCrcCalculatorToolUi->resize(169, 124);
        xToolsCrcCalculatorToolUi->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsCrcCalculatorToolUi);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(xToolsCrcCalculatorToolUi);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxStartIndex = new QSpinBox(xToolsCrcCalculatorToolUi);
        spinBoxStartIndex->setObjectName(QString::fromUtf8("spinBoxStartIndex"));

        gridLayout->addWidget(spinBoxStartIndex, 0, 1, 1, 1);

        label_2 = new QLabel(xToolsCrcCalculatorToolUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxEndIndex = new QSpinBox(xToolsCrcCalculatorToolUi);
        spinBoxEndIndex->setObjectName(QString::fromUtf8("spinBoxEndIndex"));

        gridLayout->addWidget(spinBoxEndIndex, 1, 1, 1, 1);

        label_3 = new QLabel(xToolsCrcCalculatorToolUi);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBoxAlgorithm = new xToolsCrcAlgorithmComboBox(xToolsCrcCalculatorToolUi);
        comboBoxAlgorithm->setObjectName(QString::fromUtf8("comboBoxAlgorithm"));

        gridLayout->addWidget(comboBoxAlgorithm, 2, 1, 1, 1);

        checkBoxBigEndian = new QCheckBox(xToolsCrcCalculatorToolUi);
        checkBoxBigEndian->setObjectName(QString::fromUtf8("checkBoxBigEndian"));

        gridLayout->addWidget(checkBoxBigEndian, 3, 0, 1, 2);


        retranslateUi(xToolsCrcCalculatorToolUi);

        QMetaObject::connectSlotsByName(xToolsCrcCalculatorToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsCrcCalculatorToolUi)
    {
        label->setText(QApplication::translate("xToolsCrcCalculatorToolUi", "Start index", nullptr));
        label_2->setText(QApplication::translate("xToolsCrcCalculatorToolUi", "End index", nullptr));
        label_3->setText(QApplication::translate("xToolsCrcCalculatorToolUi", "Algorithm", nullptr));
        checkBoxBigEndian->setText(QApplication::translate("xToolsCrcCalculatorToolUi", "BigEndian", nullptr));
        Q_UNUSED(xToolsCrcCalculatorToolUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsCrcCalculatorToolUi: public Ui_xToolsCrcCalculatorToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSCRCCALCULATORTOOLUI_H
