/********************************************************************************
** Form generated from reading UI file 'xToolsToolBoxUiInputMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSTOOLBOXUIINPUTMENU_H
#define UI_XTOOLSTOOLBOXUIINPUTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <xToolsAffixesComboBox.h>
#include <xToolsCheckBox.h>
#include <xToolsCrcAlgorithmComboBox.h>
#include <xToolsEscapeCharacterComboBox.h>
#include <xToolsSpinBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsToolBoxUiInputMenu
{
public:
    QGridLayout *gridLayout;
    QFrame *line;
    QLabel *label_2;
    QLabel *label;
    xToolsAffixesComboBox *comboBoxPrefix;
    QLabel *label_3;
    QLabel *label_6;
    xToolsSpinBox *spinBoxEndIndex;
    xToolsAffixesComboBox *comboBoxSuffix;
    xToolsSpinBox *spinBoxStartIndex;
    xToolsEscapeCharacterComboBox *comboBoxEscape;
    xToolsCrcAlgorithmComboBox *comboBoxAglorithm;
    QLabel *label_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    xToolsCheckBox *checkBoxAppendCrc;
    xToolsCheckBox *checkBoxBigEndian;

    void setupUi(QWidget *xToolsToolBoxUiInputMenu)
    {
        if (xToolsToolBoxUiInputMenu->objectName().isEmpty())
            xToolsToolBoxUiInputMenu->setObjectName(QString::fromUtf8("xToolsToolBoxUiInputMenu"));
        xToolsToolBoxUiInputMenu->resize(244, 240);
        xToolsToolBoxUiInputMenu->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsToolBoxUiInputMenu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(xToolsToolBoxUiInputMenu);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 2);

        label_2 = new QLabel(xToolsToolBoxUiInputMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(xToolsToolBoxUiInputMenu);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxPrefix = new xToolsAffixesComboBox(xToolsToolBoxUiInputMenu);
        comboBoxPrefix->setObjectName(QString::fromUtf8("comboBoxPrefix"));

        gridLayout->addWidget(comboBoxPrefix, 0, 1, 1, 1);

        label_3 = new QLabel(xToolsToolBoxUiInputMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(xToolsToolBoxUiInputMenu);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        spinBoxEndIndex = new xToolsSpinBox(xToolsToolBoxUiInputMenu);
        spinBoxEndIndex->setObjectName(QString::fromUtf8("spinBoxEndIndex"));

        gridLayout->addWidget(spinBoxEndIndex, 7, 1, 1, 1);

        comboBoxSuffix = new xToolsAffixesComboBox(xToolsToolBoxUiInputMenu);
        comboBoxSuffix->setObjectName(QString::fromUtf8("comboBoxSuffix"));

        gridLayout->addWidget(comboBoxSuffix, 1, 1, 1, 1);

        spinBoxStartIndex = new xToolsSpinBox(xToolsToolBoxUiInputMenu);
        spinBoxStartIndex->setObjectName(QString::fromUtf8("spinBoxStartIndex"));

        gridLayout->addWidget(spinBoxStartIndex, 6, 1, 1, 1);

        comboBoxEscape = new xToolsEscapeCharacterComboBox(xToolsToolBoxUiInputMenu);
        comboBoxEscape->setObjectName(QString::fromUtf8("comboBoxEscape"));

        gridLayout->addWidget(comboBoxEscape, 2, 1, 1, 1);

        comboBoxAglorithm = new xToolsCrcAlgorithmComboBox(xToolsToolBoxUiInputMenu);
        comboBoxAglorithm->setObjectName(QString::fromUtf8("comboBoxAglorithm"));

        gridLayout->addWidget(comboBoxAglorithm, 8, 1, 1, 1);

        label_7 = new QLabel(xToolsToolBoxUiInputMenu);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_5 = new QLabel(xToolsToolBoxUiInputMenu);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxAppendCrc = new xToolsCheckBox(xToolsToolBoxUiInputMenu);
        checkBoxAppendCrc->setObjectName(QString::fromUtf8("checkBoxAppendCrc"));

        horizontalLayout->addWidget(checkBoxAppendCrc);

        checkBoxBigEndian = new xToolsCheckBox(xToolsToolBoxUiInputMenu);
        checkBoxBigEndian->setObjectName(QString::fromUtf8("checkBoxBigEndian"));

        horizontalLayout->addWidget(checkBoxBigEndian);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 2);


        retranslateUi(xToolsToolBoxUiInputMenu);

        QMetaObject::connectSlotsByName(xToolsToolBoxUiInputMenu);
    } // setupUi

    void retranslateUi(QWidget *xToolsToolBoxUiInputMenu)
    {
        label_2->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "Append suffix", nullptr));
        label->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "Append prefix", nullptr));
        label_3->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "Escape character", nullptr));
        label_6->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "CRC end index", nullptr));
        label_7->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "CRC algorithm", nullptr));
        label_5->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "CRC start index", nullptr));
        checkBoxAppendCrc->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "Append CRC", nullptr));
        checkBoxBigEndian->setText(QApplication::translate("xToolsToolBoxUiInputMenu", "Big endian CRC", nullptr));
        Q_UNUSED(xToolsToolBoxUiInputMenu);
    } // retranslateUi

};

namespace Ui {
    class xToolsToolBoxUiInputMenu: public Ui_xToolsToolBoxUiInputMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSTOOLBOXUIINPUTMENU_H
