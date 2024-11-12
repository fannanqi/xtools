/********************************************************************************
** Form generated from reading UI file 'xToolsEmitterToolUiEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSEMITTERTOOLUIEDITOR_H
#define UI_XTOOLSEMITTERTOOLUIEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_xToolsEmitterToolUiEditor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    xToolsCrcAlgorithmComboBox *comboBoxAlgorithm;
    QLabel *label_7;
    QLabel *label_5;
    QSpinBox *spinBoxInterval;
    xToolsAffixesComboBox *comboBoxSufix;
    xToolsEscapeCharacterComboBox *comboBoxEscaoe;
    QLabel *label_4;
    QSpinBox *spinBoxEndIndex;
    QLineEdit *lineEditData;
    QLabel *label;
    QLabel *label_9;
    QLineEdit *lineEditDescription;
    QCheckBox *checkBoxEnable;
    QLabel *label_13;
    xToolsAffixesComboBox *comboBoxPrefix;
    QLabel *label_12;
    QLabel *label_3;
    QSpinBox *spinBoxStartIndex;
    xToolsTextFormatComboBox *comboBoxFormat;
    QLabel *label_10;
    QCheckBox *checkBoxBigEndian;
    QLabel *label_6;
    QLabel *label_8;
    QCheckBox *checkBoxCrcEnable;
    QLabel *label_11;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonApply;

    void setupUi(QWidget *xToolsEmitterToolUiEditor)
    {
        if (xToolsEmitterToolUiEditor->objectName().isEmpty())
            xToolsEmitterToolUiEditor->setObjectName(QString::fromUtf8("xToolsEmitterToolUiEditor"));
        xToolsEmitterToolUiEditor->resize(482, 400);
        xToolsEmitterToolUiEditor->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsEmitterToolUiEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(xToolsEmitterToolUiEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        comboBoxAlgorithm = new xToolsCrcAlgorithmComboBox(groupBox);
        comboBoxAlgorithm->setObjectName(QString::fromUtf8("comboBoxAlgorithm"));

        gridLayout_2->addWidget(comboBoxAlgorithm, 4, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_7, 4, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        spinBoxInterval = new QSpinBox(groupBox);
        spinBoxInterval->setObjectName(QString::fromUtf8("spinBoxInterval"));
        spinBoxInterval->setMaximum(10000);

        gridLayout_2->addWidget(spinBoxInterval, 4, 1, 1, 1);

        comboBoxSufix = new xToolsAffixesComboBox(groupBox);
        comboBoxSufix->setObjectName(QString::fromUtf8("comboBoxSufix"));

        gridLayout_2->addWidget(comboBoxSufix, 6, 1, 1, 1);

        comboBoxEscaoe = new xToolsEscapeCharacterComboBox(groupBox);
        comboBoxEscaoe->setObjectName(QString::fromUtf8("comboBoxEscaoe"));

        gridLayout_2->addWidget(comboBoxEscaoe, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        spinBoxEndIndex = new QSpinBox(groupBox);
        spinBoxEndIndex->setObjectName(QString::fromUtf8("spinBoxEndIndex"));

        gridLayout_2->addWidget(spinBoxEndIndex, 5, 3, 1, 1);

        lineEditData = new QLineEdit(groupBox);
        lineEditData->setObjectName(QString::fromUtf8("lineEditData"));

        gridLayout_2->addWidget(lineEditData, 8, 1, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 9, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_9, 5, 2, 1, 1);

        lineEditDescription = new QLineEdit(groupBox);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditDescription->sizePolicy().hasHeightForWidth());
        lineEditDescription->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEditDescription, 9, 1, 1, 3);

        checkBoxEnable = new QCheckBox(groupBox);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        gridLayout_2->addWidget(checkBoxEnable, 0, 0, 1, 4);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 13, 0, 1, 4);

        comboBoxPrefix = new xToolsAffixesComboBox(groupBox);
        comboBoxPrefix->setObjectName(QString::fromUtf8("comboBoxPrefix"));

        gridLayout_2->addWidget(comboBoxPrefix, 5, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 12, 0, 1, 4);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        spinBoxStartIndex = new QSpinBox(groupBox);
        spinBoxStartIndex->setObjectName(QString::fromUtf8("spinBoxStartIndex"));
#ifndef QT_NO_TOOLTIP
        spinBoxStartIndex->setToolTip(QString::fromUtf8("11"));
#endif // QT_NO_TOOLTIP

        gridLayout_2->addWidget(spinBoxStartIndex, 6, 3, 1, 1);

        comboBoxFormat = new xToolsTextFormatComboBox(groupBox);
        comboBoxFormat->setObjectName(QString::fromUtf8("comboBoxFormat"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxFormat->sizePolicy().hasHeightForWidth());
        comboBoxFormat->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(comboBoxFormat, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_10, 8, 0, 1, 1);

        checkBoxBigEndian = new QCheckBox(groupBox);
        checkBoxBigEndian->setObjectName(QString::fromUtf8("checkBoxBigEndian"));

        gridLayout_2->addWidget(checkBoxBigEndian, 3, 2, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_8, 6, 2, 1, 1);

        checkBoxCrcEnable = new QCheckBox(groupBox);
        checkBoxCrcEnable->setObjectName(QString::fromUtf8("checkBoxCrcEnable"));

        gridLayout_2->addWidget(checkBoxCrcEnable, 2, 2, 1, 2);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setWordWrap(false);

        gridLayout_2->addWidget(label_11, 11, 0, 1, 4);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{color:red}"));

        gridLayout_2->addWidget(label_14, 10, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonCancel = new QPushButton(xToolsEmitterToolUiEditor);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        gridLayout->addWidget(pushButtonCancel, 1, 1, 1, 1);

        pushButtonApply = new QPushButton(xToolsEmitterToolUiEditor);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        gridLayout->addWidget(pushButtonApply, 1, 2, 1, 1);


        retranslateUi(xToolsEmitterToolUiEditor);

        QMetaObject::connectSlotsByName(xToolsEmitterToolUiEditor);
    } // setupUi

    void retranslateUi(QWidget *xToolsEmitterToolUiEditor)
    {
        groupBox->setTitle(QApplication::translate("xToolsEmitterToolUiEditor", "Parameters", nullptr));
        label_2->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Format", nullptr));
        label_7->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Algorithm", nullptr));
        label_5->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Prefix", nullptr));
        label_4->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Interval", nullptr));
        label->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Description", nullptr));
        label_9->setText(QApplication::translate("xToolsEmitterToolUiEditor", "End index", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Enable", nullptr));
        label_13->setText(QApplication::translate("xToolsEmitterToolUiEditor", "If the parameters of CRC is set error, all bytes of data will be calculcated.", nullptr));
        label_12->setText(QApplication::translate("xToolsEmitterToolUiEditor", "The CRC end index is from tail, the last byte of data is 0.", nullptr));
        label_3->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Escape", nullptr));
        label_10->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Data", nullptr));
        checkBoxBigEndian->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Big endian byte order", nullptr));
        label_6->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Sufix", nullptr));
        label_8->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Start index", nullptr));
        checkBoxCrcEnable->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Append CRC data", nullptr));
        label_11->setText(QApplication::translate("xToolsEmitterToolUiEditor", "The CRC start index is start form header, the first byte is 0.", nullptr));
        label_14->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Note:", nullptr));
        pushButtonCancel->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Cancel", nullptr));
        pushButtonApply->setText(QApplication::translate("xToolsEmitterToolUiEditor", "Apply", nullptr));
        Q_UNUSED(xToolsEmitterToolUiEditor);
    } // retranslateUi

};

namespace Ui {
    class xToolsEmitterToolUiEditor: public Ui_xToolsEmitterToolUiEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSEMITTERTOOLUIEDITOR_H
