/********************************************************************************
** Form generated from reading UI file 'xToolsResponserToolUiEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSRESPONSERTOOLUIEDITOR_H
#define UI_XTOOLSRESPONSERTOOLUIEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
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
#include <xToolsResponseOptionComboBox.h>
#include <xToolsTextFormatComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsResponserToolUiEditor
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonOk;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    xToolsAffixesComboBox *comboBoxResSuffix;
    QLabel *label;
    QCheckBox *checkBoxEnable;
    QLabel *label_15;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxRefCrcEnable;
    QCheckBox *checkBoxRefCrcBigEndian;
    QLabel *label_18;
    QLabel *label_6;
    QLabel *label_19;
    xToolsTextFormatComboBox *comboBoxRefFormat;
    QLabel *label_5;
    QLabel *label_16;
    QLineEdit *lineEditRefData;
    xToolsCrcAlgorithmComboBox *comboBoxResAlgorithm;
    xToolsAffixesComboBox *comboBoxResPrefix;
    QLineEdit *lineEditResData;
    xToolsResponseOptionComboBox *comboBoxOption;
    QLabel *label_12;
    QLabel *label_14;
    xToolsTextFormatComboBox *comboBoxResFormat;
    QSpinBox *spinBoxResEnd;
    xToolsAffixesComboBox *comboBoxRefSuffix;
    QLabel *label_13;
    QSpinBox *spinBoxResStart;
    QLabel *label_11;
    QSpinBox *spinBoxRefStart;
    QLabel *label_4;
    xToolsAffixesComboBox *comboBoxRefPrefix;
    xToolsCrcAlgorithmComboBox *comboBoxRefAlgorithm;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_2;
    xToolsEscapeCharacterComboBox *comboBoxResEscape;
    QLabel *label_9;
    QLabel *label_20;
    QSpinBox *spinBoxRefEnd;
    QLabel *label_17;
    QFrame *line;
    xToolsTextFormatComboBox *comboBoxRefEscape;
    QLineEdit *lineEditDescription;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxResCrcEnable;
    QCheckBox *checkBoxResCrcBigEndian;
    QLabel *label_21;
    QSpinBox *spinBoxResDelay;

    void setupUi(QWidget *xToolsResponserToolUiEditor)
    {
        if (xToolsResponserToolUiEditor->objectName().isEmpty())
            xToolsResponserToolUiEditor->setObjectName(QString::fromUtf8("xToolsResponserToolUiEditor"));
        xToolsResponserToolUiEditor->resize(647, 474);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xToolsResponserToolUiEditor->sizePolicy().hasHeightForWidth());
        xToolsResponserToolUiEditor->setSizePolicy(sizePolicy);
        xToolsResponserToolUiEditor->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsResponserToolUiEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonOk = new QPushButton(xToolsResponserToolUiEditor);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        gridLayout->addWidget(pushButtonOk, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonCancel = new QPushButton(xToolsResponserToolUiEditor);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        gridLayout->addWidget(pushButtonCancel, 1, 1, 1, 1);

        groupBox = new QGroupBox(xToolsResponserToolUiEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBoxResSuffix = new xToolsAffixesComboBox(groupBox);
        comboBoxResSuffix->setObjectName(QString::fromUtf8("comboBoxResSuffix"));

        gridLayout_2->addWidget(comboBoxResSuffix, 6, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        checkBoxEnable = new QCheckBox(groupBox);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        gridLayout_2->addWidget(checkBoxEnable, 0, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_15, 9, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_8, 4, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxRefCrcEnable = new QCheckBox(groupBox);
        checkBoxRefCrcEnable->setObjectName(QString::fromUtf8("checkBoxRefCrcEnable"));

        horizontalLayout->addWidget(checkBoxRefCrcEnable);

        checkBoxRefCrcBigEndian = new QCheckBox(groupBox);
        checkBoxRefCrcBigEndian->setObjectName(QString::fromUtf8("checkBoxRefCrcBigEndian"));

        horizontalLayout->addWidget(checkBoxRefCrcBigEndian);


        gridLayout_2->addLayout(horizontalLayout, 7, 0, 1, 2);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_18, 10, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_6, 3, 3, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 12, 0, 1, 2);

        comboBoxRefFormat = new xToolsTextFormatComboBox(groupBox);
        comboBoxRefFormat->setObjectName(QString::fromUtf8("comboBoxRefFormat"));

        gridLayout_2->addWidget(comboBoxRefFormat, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_16, 10, 0, 1, 1);

        lineEditRefData = new QLineEdit(groupBox);
        lineEditRefData->setObjectName(QString::fromUtf8("lineEditRefData"));

        gridLayout_2->addWidget(lineEditRefData, 13, 0, 1, 2);

        comboBoxResAlgorithm = new xToolsCrcAlgorithmComboBox(groupBox);
        comboBoxResAlgorithm->setObjectName(QString::fromUtf8("comboBoxResAlgorithm"));

        gridLayout_2->addWidget(comboBoxResAlgorithm, 8, 4, 1, 1);

        comboBoxResPrefix = new xToolsAffixesComboBox(groupBox);
        comboBoxResPrefix->setObjectName(QString::fromUtf8("comboBoxResPrefix"));

        gridLayout_2->addWidget(comboBoxResPrefix, 5, 4, 1, 1);

        lineEditResData = new QLineEdit(groupBox);
        lineEditResData->setObjectName(QString::fromUtf8("lineEditResData"));

        gridLayout_2->addWidget(lineEditResData, 13, 3, 1, 2);

        comboBoxOption = new xToolsResponseOptionComboBox(groupBox);
        comboBoxOption->setObjectName(QString::fromUtf8("comboBoxOption"));

        gridLayout_2->addWidget(comboBoxOption, 1, 4, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_12, 6, 3, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_14, 8, 3, 1, 1);

        comboBoxResFormat = new xToolsTextFormatComboBox(groupBox);
        comboBoxResFormat->setObjectName(QString::fromUtf8("comboBoxResFormat"));

        gridLayout_2->addWidget(comboBoxResFormat, 3, 4, 1, 1);

        spinBoxResEnd = new QSpinBox(groupBox);
        spinBoxResEnd->setObjectName(QString::fromUtf8("spinBoxResEnd"));
        spinBoxResEnd->setMaximum(1024);

        gridLayout_2->addWidget(spinBoxResEnd, 10, 4, 1, 1);

        comboBoxRefSuffix = new xToolsAffixesComboBox(groupBox);
        comboBoxRefSuffix->setObjectName(QString::fromUtf8("comboBoxRefSuffix"));

        gridLayout_2->addWidget(comboBoxRefSuffix, 6, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_13, 8, 0, 1, 1);

        spinBoxResStart = new QSpinBox(groupBox);
        spinBoxResStart->setObjectName(QString::fromUtf8("spinBoxResStart"));
        spinBoxResStart->setMaximum(1024);

        gridLayout_2->addWidget(spinBoxResStart, 9, 4, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_11, 5, 3, 1, 1);

        spinBoxRefStart = new QSpinBox(groupBox);
        spinBoxRefStart->setObjectName(QString::fromUtf8("spinBoxRefStart"));
        spinBoxRefStart->setMaximum(1024);

        gridLayout_2->addWidget(spinBoxRefStart, 9, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 2, 3, 1, 2);

        comboBoxRefPrefix = new xToolsAffixesComboBox(groupBox);
        comboBoxRefPrefix->setObjectName(QString::fromUtf8("comboBoxRefPrefix"));

        gridLayout_2->addWidget(comboBoxRefPrefix, 5, 1, 1, 1);

        comboBoxRefAlgorithm = new xToolsCrcAlgorithmComboBox(groupBox);
        comboBoxRefAlgorithm->setObjectName(QString::fromUtf8("comboBoxRefAlgorithm"));

        gridLayout_2->addWidget(comboBoxRefAlgorithm, 8, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_10, 6, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);

        comboBoxResEscape = new xToolsEscapeCharacterComboBox(groupBox);
        comboBoxResEscape->setObjectName(QString::fromUtf8("comboBoxResEscape"));

        gridLayout_2->addWidget(comboBoxResEscape, 4, 4, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_9, 5, 0, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 12, 3, 1, 2);

        spinBoxRefEnd = new QSpinBox(groupBox);
        spinBoxRefEnd->setObjectName(QString::fromUtf8("spinBoxRefEnd"));
        spinBoxRefEnd->setMaximum(1024);

        gridLayout_2->addWidget(spinBoxRefEnd, 10, 1, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_17, 9, 3, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 2, 12, 1);

        comboBoxRefEscape = new xToolsTextFormatComboBox(groupBox);
        comboBoxRefEscape->setObjectName(QString::fromUtf8("comboBoxRefEscape"));

        gridLayout_2->addWidget(comboBoxRefEscape, 4, 1, 1, 1);

        lineEditDescription = new QLineEdit(groupBox);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditDescription->sizePolicy().hasHeightForWidth());
        lineEditDescription->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lineEditDescription, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxResCrcEnable = new QCheckBox(groupBox);
        checkBoxResCrcEnable->setObjectName(QString::fromUtf8("checkBoxResCrcEnable"));

        horizontalLayout_2->addWidget(checkBoxResCrcEnable);

        checkBoxResCrcBigEndian = new QCheckBox(groupBox);
        checkBoxResCrcBigEndian->setObjectName(QString::fromUtf8("checkBoxResCrcBigEndian"));

        horizontalLayout_2->addWidget(checkBoxResCrcBigEndian);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 3, 1, 2);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 11, 3, 1, 1);

        spinBoxResDelay = new QSpinBox(groupBox);
        spinBoxResDelay->setObjectName(QString::fromUtf8("spinBoxResDelay"));
        spinBoxResDelay->setMaximum(10000);

        gridLayout_2->addWidget(spinBoxResDelay, 11, 4, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);


        retranslateUi(xToolsResponserToolUiEditor);

        QMetaObject::connectSlotsByName(xToolsResponserToolUiEditor);
    } // setupUi

    void retranslateUi(QWidget *xToolsResponserToolUiEditor)
    {
        pushButtonOk->setText(QApplication::translate("xToolsResponserToolUiEditor", "OK", nullptr));
        pushButtonCancel->setText(QApplication::translate("xToolsResponserToolUiEditor", "Cancel", nullptr));
        groupBox->setTitle(QApplication::translate("xToolsResponserToolUiEditor", "Parameters", nullptr));
        label->setText(QApplication::translate("xToolsResponserToolUiEditor", "Description", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsResponserToolUiEditor", "Enable", nullptr));
        label_15->setText(QApplication::translate("xToolsResponserToolUiEditor", "Start index", nullptr));
        label_8->setText(QApplication::translate("xToolsResponserToolUiEditor", "Escape", nullptr));
        checkBoxRefCrcEnable->setText(QApplication::translate("xToolsResponserToolUiEditor", "Append CRC data", nullptr));
        checkBoxRefCrcBigEndian->setText(QApplication::translate("xToolsResponserToolUiEditor", "Big endian byte order", nullptr));
        label_18->setText(QApplication::translate("xToolsResponserToolUiEditor", "End index", nullptr));
        label_6->setText(QApplication::translate("xToolsResponserToolUiEditor", "Fromat", nullptr));
        label_19->setText(QApplication::translate("xToolsResponserToolUiEditor", "Reference data", nullptr));
        label_5->setText(QApplication::translate("xToolsResponserToolUiEditor", "Format", nullptr));
        label_16->setText(QApplication::translate("xToolsResponserToolUiEditor", "End index", nullptr));
        label_12->setText(QApplication::translate("xToolsResponserToolUiEditor", "Suffix", nullptr));
        label_14->setText(QApplication::translate("xToolsResponserToolUiEditor", "Algorithm", nullptr));
        label_13->setText(QApplication::translate("xToolsResponserToolUiEditor", "Algorithm", nullptr));
        label_11->setText(QApplication::translate("xToolsResponserToolUiEditor", "Prefix", nullptr));
        label_4->setText(QApplication::translate("xToolsResponserToolUiEditor", "Response", nullptr));
        label_7->setText(QApplication::translate("xToolsResponserToolUiEditor", "Escape", nullptr));
        label_3->setText(QApplication::translate("xToolsResponserToolUiEditor", "Reference", nullptr));
        label_10->setText(QApplication::translate("xToolsResponserToolUiEditor", "Suffix", nullptr));
        label_2->setText(QApplication::translate("xToolsResponserToolUiEditor", "Option", nullptr));
        label_9->setText(QApplication::translate("xToolsResponserToolUiEditor", "Prefix", nullptr));
        label_20->setText(QApplication::translate("xToolsResponserToolUiEditor", "Response data", nullptr));
        label_17->setText(QApplication::translate("xToolsResponserToolUiEditor", "Start index", nullptr));
        checkBoxResCrcEnable->setText(QApplication::translate("xToolsResponserToolUiEditor", "Append CRC data", nullptr));
        checkBoxResCrcBigEndian->setText(QApplication::translate("xToolsResponserToolUiEditor", "Big endian byte order", nullptr));
        label_21->setText(QApplication::translate("xToolsResponserToolUiEditor", "Delay(ms)", nullptr));
        Q_UNUSED(xToolsResponserToolUiEditor);
    } // retranslateUi

};

namespace Ui {
    class xToolsResponserToolUiEditor: public Ui_xToolsResponserToolUiEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSRESPONSERTOOLUIEDITOR_H
