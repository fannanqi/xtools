/********************************************************************************
** Form generated from reading UI file 'xToolsPrestorerToolUiEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSPRESTORERTOOLUIEDITOR_H
#define UI_XTOOLSPRESTORERTOOLUIEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <xToolsAffixesComboBox.h>
#include <xToolsCrcAlgorithmComboBox.h>
#include <xToolsEscapeCharacterComboBox.h>
#include <xToolsTextFormatComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsPrestorerToolUiEditor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    xToolsAffixesComboBox *comboBoxPrefix;
    QLabel *label_2;
    xToolsTextFormatComboBox *comboBoxFormat;
    xToolsCrcAlgorithmComboBox *comboBoxAlgorithm;
    QSpinBox *spinBoxEnd;
    QSpinBox *spinBoxStart;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEditData;
    xToolsEscapeCharacterComboBox *comboBoxEscape;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxCrc;
    QCheckBox *checkBoxBigEndian;
    xToolsAffixesComboBox *comboBoxSuffix;
    QLabel *label;
    QLineEdit *lineEditDescription;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOk;

    void setupUi(QWidget *xToolsPrestorerToolUiEditor)
    {
        if (xToolsPrestorerToolUiEditor->objectName().isEmpty())
            xToolsPrestorerToolUiEditor->setObjectName(QString::fromUtf8("xToolsPrestorerToolUiEditor"));
        xToolsPrestorerToolUiEditor->resize(637, 259);
        xToolsPrestorerToolUiEditor->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsPrestorerToolUiEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(xToolsPrestorerToolUiEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_8, 4, 2, 1, 1);

        comboBoxPrefix = new xToolsAffixesComboBox(groupBox);
        comboBoxPrefix->setObjectName(QString::fromUtf8("comboBoxPrefix"));

        gridLayout_2->addWidget(comboBoxPrefix, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboBoxFormat = new xToolsTextFormatComboBox(groupBox);
        comboBoxFormat->setObjectName(QString::fromUtf8("comboBoxFormat"));

        gridLayout_2->addWidget(comboBoxFormat, 1, 1, 1, 1);

        comboBoxAlgorithm = new xToolsCrcAlgorithmComboBox(groupBox);
        comboBoxAlgorithm->setObjectName(QString::fromUtf8("comboBoxAlgorithm"));

        gridLayout_2->addWidget(comboBoxAlgorithm, 2, 3, 1, 1);

        spinBoxEnd = new QSpinBox(groupBox);
        spinBoxEnd->setObjectName(QString::fromUtf8("spinBoxEnd"));
        spinBoxEnd->setMaximum(1024);

        gridLayout_2->addWidget(spinBoxEnd, 4, 3, 1, 1);

        spinBoxStart = new QSpinBox(groupBox);
        spinBoxStart->setObjectName(QString::fromUtf8("spinBoxStart"));
        spinBoxStart->setMaximum(1024);

        gridLayout_2->addWidget(spinBoxStart, 3, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_7, 3, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_9, 6, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        lineEditData = new QLineEdit(groupBox);
        lineEditData->setObjectName(QString::fromUtf8("lineEditData"));

        gridLayout_2->addWidget(lineEditData, 6, 1, 1, 3);

        comboBoxEscape = new xToolsEscapeCharacterComboBox(groupBox);
        comboBoxEscape->setObjectName(QString::fromUtf8("comboBoxEscape"));

        gridLayout_2->addWidget(comboBoxEscape, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxCrc = new QCheckBox(groupBox);
        checkBoxCrc->setObjectName(QString::fromUtf8("checkBoxCrc"));

        horizontalLayout->addWidget(checkBoxCrc);

        checkBoxBigEndian = new QCheckBox(groupBox);
        checkBoxBigEndian->setObjectName(QString::fromUtf8("checkBoxBigEndian"));

        horizontalLayout->addWidget(checkBoxBigEndian);


        gridLayout_2->addLayout(horizontalLayout, 1, 2, 1, 2);

        comboBoxSuffix = new xToolsAffixesComboBox(groupBox);
        comboBoxSuffix->setObjectName(QString::fromUtf8("comboBoxSuffix"));

        gridLayout_2->addWidget(comboBoxSuffix, 4, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 7, 0, 1, 1);

        lineEditDescription = new QLineEdit(groupBox);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));

        gridLayout_2->addWidget(lineEditDescription, 7, 1, 1, 3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonCancel = new QPushButton(xToolsPrestorerToolUiEditor);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        gridLayout->addWidget(pushButtonCancel, 1, 1, 1, 1);

        pushButtonOk = new QPushButton(xToolsPrestorerToolUiEditor);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        gridLayout->addWidget(pushButtonOk, 1, 2, 1, 1);


        retranslateUi(xToolsPrestorerToolUiEditor);

        QMetaObject::connectSlotsByName(xToolsPrestorerToolUiEditor);
    } // setupUi

    void retranslateUi(QWidget *xToolsPrestorerToolUiEditor)
    {
        groupBox->setTitle(QApplication::translate("xToolsPrestorerToolUiEditor", "Parameters", nullptr));
        label_8->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "End index", nullptr));
        label_2->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Format", nullptr));
        label_7->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Start index", nullptr));
        label_9->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Data", nullptr));
        label_6->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Algorithm", nullptr));
        label_5->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Suffix", nullptr));
        label_4->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Prefix", nullptr));
        label_3->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Escape", nullptr));
        checkBoxCrc->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Append CRC data", nullptr));
        checkBoxBigEndian->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Big endian byte order", nullptr));
        label->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Description", nullptr));
        pushButtonCancel->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "Cancel", nullptr));
        pushButtonOk->setText(QApplication::translate("xToolsPrestorerToolUiEditor", "OK", nullptr));
        Q_UNUSED(xToolsPrestorerToolUiEditor);
    } // retranslateUi

};

namespace Ui {
    class xToolsPrestorerToolUiEditor: public Ui_xToolsPrestorerToolUiEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSPRESTORERTOOLUIEDITOR_H
