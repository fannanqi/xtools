/********************************************************************************
** Form generated from reading UI file 'xToolsAnalyzerToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSANALYZERTOOLUI_H
#define UI_XTOOLSANALYZERTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <xToolsCheckBox.h>
#include <xToolsLineEdit.h>
#include <xToolsSpinBox.h>

QT_BEGIN_NAMESPACE

class Ui_xToolsAnalyzerToolUi
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    xToolsCheckBox *checkBoxFixedLength;
    QLabel *label_2;
    xToolsSpinBox *spinBoxMaxTempBytes;
    xToolsCheckBox *checkBoxEnable;
    QLabel *label;
    xToolsSpinBox *spinBoxFrameLength;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QLabel *label_3;
    xToolsLineEdit *lineEditSeparationMark;

    void setupUi(QWidget *xToolsAnalyzerToolUi)
    {
        if (xToolsAnalyzerToolUi->objectName().isEmpty())
            xToolsAnalyzerToolUi->setObjectName(QString::fromUtf8("xToolsAnalyzerToolUi"));
        xToolsAnalyzerToolUi->resize(298, 144);
        xToolsAnalyzerToolUi->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(xToolsAnalyzerToolUi);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(xToolsAnalyzerToolUi);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxFixedLength = new xToolsCheckBox(groupBox);
        checkBoxFixedLength->setObjectName(QString::fromUtf8("checkBoxFixedLength"));

        gridLayout_2->addWidget(checkBoxFixedLength, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        spinBoxMaxTempBytes = new xToolsSpinBox(groupBox);
        spinBoxMaxTempBytes->setObjectName(QString::fromUtf8("spinBoxMaxTempBytes"));
        spinBoxMaxTempBytes->setMinimum(64);
        spinBoxMaxTempBytes->setMaximum(2048);

        gridLayout_2->addWidget(spinBoxMaxTempBytes, 0, 2, 1, 1);

        checkBoxEnable = new xToolsCheckBox(groupBox);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        gridLayout_2->addWidget(checkBoxEnable, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        spinBoxFrameLength = new xToolsSpinBox(groupBox);
        spinBoxFrameLength->setObjectName(QString::fromUtf8("spinBoxFrameLength"));
        spinBoxFrameLength->setMinimum(1);
        spinBoxFrameLength->setMaximum(2048);

        gridLayout_2->addWidget(spinBoxFrameLength, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 2);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditSeparationMark = new xToolsLineEdit(groupBox);
        lineEditSeparationMark->setObjectName(QString::fromUtf8("lineEditSeparationMark"));

        gridLayout->addWidget(lineEditSeparationMark, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(xToolsAnalyzerToolUi);

        QMetaObject::connectSlotsByName(xToolsAnalyzerToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsAnalyzerToolUi)
    {
        groupBox->setTitle(QApplication::translate("xToolsAnalyzerToolUi", "Analyzer parameters", nullptr));
        checkBoxFixedLength->setText(QApplication::translate("xToolsAnalyzerToolUi", "Fixed length", nullptr));
        label_2->setText(QApplication::translate("xToolsAnalyzerToolUi", "Frame length", nullptr));
        checkBoxEnable->setText(QApplication::translate("xToolsAnalyzerToolUi", "Enable", nullptr));
        label->setText(QApplication::translate("xToolsAnalyzerToolUi", "Max temp bytes", nullptr));
        label_3->setText(QApplication::translate("xToolsAnalyzerToolUi", "Separation mark", nullptr));
        lineEditSeparationMark->setPlaceholderText(QApplication::translate("xToolsAnalyzerToolUi", "Hex format", nullptr));
        Q_UNUSED(xToolsAnalyzerToolUi);
    } // retranslateUi

};

namespace Ui {
    class xToolsAnalyzerToolUi: public Ui_xToolsAnalyzerToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSANALYZERTOOLUI_H
