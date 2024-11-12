/********************************************************************************
** Form generated from reading UI file 'xToolsCRCAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSCRCASSISTANT_H
#define UI_XTOOLSCRCASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsCRCAssistant
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButtonCopyHex;
    QLabel *labelInfo;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxRefIn;
    QCheckBox *checkBoxRefOut;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonCalculate;
    QLabel *label_11;
    QLineEdit *lineEditOutputBin;
    QLabel *label_7;
    QLabel *label_10;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonHex;
    QRadioButton *radioButtonASCII;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLabel *label;
    QLineEdit *lineEditOutputHex;
    QLabel *labelPolyFormula;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButtonCopyBin;
    QComboBox *comboBoxWidth;
    QLineEdit *lineEditInit;
    QLineEdit *lineEditPoly;
    QComboBox *comboBoxName;
    QLabel *label_4;
    QLineEdit *lineEditXOROUT;
    QLabel *label_3;
    QLabel *label_9;

    void setupUi(QWidget *xToolsCRCAssistant)
    {
        if (xToolsCRCAssistant->objectName().isEmpty())
            xToolsCRCAssistant->setObjectName(QString::fromUtf8("xToolsCRCAssistant"));
        xToolsCRCAssistant->resize(728, 322);
        gridLayout = new QGridLayout(xToolsCRCAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(xToolsCRCAssistant);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 3, 1, 1);

        label_6 = new QLabel(xToolsCRCAssistant);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        pushButtonCopyHex = new QPushButton(xToolsCRCAssistant);
        pushButtonCopyHex->setObjectName(QString::fromUtf8("pushButtonCopyHex"));

        gridLayout->addWidget(pushButtonCopyHex, 6, 2, 1, 1);

        labelInfo = new QLabel(xToolsCRCAssistant);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(labelInfo, 8, 1, 1, 5);

        frame_2 = new QFrame(xToolsCRCAssistant);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxRefIn = new QCheckBox(frame_2);
        checkBoxRefIn->setObjectName(QString::fromUtf8("checkBoxRefIn"));

        horizontalLayout_2->addWidget(checkBoxRefIn);

        checkBoxRefOut = new QCheckBox(frame_2);
        checkBoxRefOut->setObjectName(QString::fromUtf8("checkBoxRefOut"));

        horizontalLayout_2->addWidget(checkBoxRefOut);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonClear = new QPushButton(frame_2);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout_2->addWidget(pushButtonClear);

        pushButtonCalculate = new QPushButton(frame_2);
        pushButtonCalculate->setObjectName(QString::fromUtf8("pushButtonCalculate"));

        horizontalLayout_2->addWidget(pushButtonCalculate);


        gridLayout->addWidget(frame_2, 2, 1, 1, 5);

        label_11 = new QLabel(xToolsCRCAssistant);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        lineEditOutputBin = new QLineEdit(xToolsCRCAssistant);
        lineEditOutputBin->setObjectName(QString::fromUtf8("lineEditOutputBin"));

        gridLayout->addWidget(lineEditOutputBin, 6, 4, 1, 1);

        label_7 = new QLabel(xToolsCRCAssistant);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 3, 1, 1);

        label_10 = new QLabel(xToolsCRCAssistant);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_10, 7, 1, 1, 4);

        frame = new QFrame(xToolsCRCAssistant);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border:none\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonHex = new QRadioButton(frame);
        radioButtonHex->setObjectName(QString::fromUtf8("radioButtonHex"));
        radioButtonHex->setChecked(true);

        horizontalLayout->addWidget(radioButtonHex);

        radioButtonASCII = new QRadioButton(frame);
        radioButtonASCII->setObjectName(QString::fromUtf8("radioButtonASCII"));

        horizontalLayout->addWidget(radioButtonASCII);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(frame, 0, 1, 1, 5);

        label_8 = new QLabel(xToolsCRCAssistant);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label = new QLabel(xToolsCRCAssistant);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        lineEditOutputHex = new QLineEdit(xToolsCRCAssistant);
        lineEditOutputHex->setObjectName(QString::fromUtf8("lineEditOutputHex"));

        gridLayout->addWidget(lineEditOutputHex, 6, 1, 1, 1);

        labelPolyFormula = new QLabel(xToolsCRCAssistant);
        labelPolyFormula->setObjectName(QString::fromUtf8("labelPolyFormula"));

        gridLayout->addWidget(labelPolyFormula, 3, 4, 1, 2);

        label_2 = new QLabel(xToolsCRCAssistant);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        textEdit = new QTextEdit(xToolsCRCAssistant);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 1, 1, 5);

        pushButtonCopyBin = new QPushButton(xToolsCRCAssistant);
        pushButtonCopyBin->setObjectName(QString::fromUtf8("pushButtonCopyBin"));

        gridLayout->addWidget(pushButtonCopyBin, 6, 5, 1, 1);

        comboBoxWidth = new QComboBox(xToolsCRCAssistant);
        comboBoxWidth->setObjectName(QString::fromUtf8("comboBoxWidth"));

        gridLayout->addWidget(comboBoxWidth, 4, 1, 1, 2);

        lineEditInit = new QLineEdit(xToolsCRCAssistant);
        lineEditInit->setObjectName(QString::fromUtf8("lineEditInit"));
        lineEditInit->setPlaceholderText(QString::fromUtf8("0xFFFF"));

        gridLayout->addWidget(lineEditInit, 5, 1, 1, 2);

        lineEditPoly = new QLineEdit(xToolsCRCAssistant);
        lineEditPoly->setObjectName(QString::fromUtf8("lineEditPoly"));
        lineEditPoly->setPlaceholderText(QString::fromUtf8("0x3D65"));

        gridLayout->addWidget(lineEditPoly, 4, 4, 1, 2);

        comboBoxName = new QComboBox(xToolsCRCAssistant);
        comboBoxName->setObjectName(QString::fromUtf8("comboBoxName"));

        gridLayout->addWidget(comboBoxName, 3, 1, 1, 2);

        label_4 = new QLabel(xToolsCRCAssistant);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        lineEditXOROUT = new QLineEdit(xToolsCRCAssistant);
        lineEditXOROUT->setObjectName(QString::fromUtf8("lineEditXOROUT"));
        lineEditXOROUT->setPlaceholderText(QString::fromUtf8("0xFFFF"));

        gridLayout->addWidget(lineEditXOROUT, 5, 4, 1, 2);

        label_3 = new QLabel(xToolsCRCAssistant);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_9 = new QLabel(xToolsCRCAssistant);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 3, 1, 1);

        label_6->raise();
        lineEditOutputHex->raise();
        textEdit->raise();
        lineEditPoly->raise();
        labelInfo->raise();
        label_5->raise();
        label_7->raise();
        label->raise();
        pushButtonCopyBin->raise();
        lineEditXOROUT->raise();
        label_8->raise();
        frame_2->raise();
        comboBoxName->raise();
        label_3->raise();
        frame->raise();
        label_10->raise();
        lineEditOutputBin->raise();
        label_2->raise();
        pushButtonCopyHex->raise();
        label_9->raise();
        comboBoxWidth->raise();
        lineEditInit->raise();
        label_4->raise();
        labelPolyFormula->raise();
        label_11->raise();

        retranslateUi(xToolsCRCAssistant);
        QObject::connect(pushButtonClear, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(pushButtonCopyHex, SIGNAL(clicked()), lineEditOutputHex, SLOT(selectAll()));
        QObject::connect(pushButtonCopyHex, SIGNAL(clicked()), lineEditOutputHex, SLOT(copy()));
        QObject::connect(pushButtonCopyBin, SIGNAL(clicked()), lineEditOutputBin, SLOT(selectAll()));
        QObject::connect(pushButtonCopyBin, SIGNAL(clicked()), lineEditOutputBin, SLOT(copy()));
        QObject::connect(radioButtonHex, SIGNAL(clicked()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(xToolsCRCAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsCRCAssistant)
    {
        xToolsCRCAssistant->setWindowTitle(QApplication::translate("xToolsCRCAssistant", "CRC Assistant", nullptr));
        label_5->setText(QApplication::translate("xToolsCRCAssistant", "Paloy value", nullptr));
        label_6->setText(QApplication::translate("xToolsCRCAssistant", "Initial value", nullptr));
        pushButtonCopyHex->setText(QApplication::translate("xToolsCRCAssistant", "Copy", nullptr));
        labelInfo->setText(QApplication::translate("xToolsCRCAssistant", "More information about crc calculation, visit http://www.ip33.com/crc.html(double clicked to visit)", nullptr));
        checkBoxRefIn->setText(QApplication::translate("xToolsCRCAssistant", "Input reversal", nullptr));
        checkBoxRefOut->setText(QApplication::translate("xToolsCRCAssistant", "Output reversal", nullptr));
        pushButtonClear->setText(QApplication::translate("xToolsCRCAssistant", "Clear", nullptr));
        pushButtonCalculate->setText(QApplication::translate("xToolsCRCAssistant", "Calculate", nullptr));
        label_11->setText(QApplication::translate("xToolsCRCAssistant", "Parameters", nullptr));
        label_7->setText(QApplication::translate("xToolsCRCAssistant", "XOR value", nullptr));
        label_10->setText(QApplication::translate("xToolsCRCAssistant", "Height its is on the left and the low bits is on the right", nullptr));
        radioButtonHex->setText(QApplication::translate("xToolsCRCAssistant", "HEX", nullptr));
        radioButtonASCII->setText(QApplication::translate("xToolsCRCAssistant", "ASCII", nullptr));
        label_8->setText(QApplication::translate("xToolsCRCAssistant", "Result(HEX)", nullptr));
        label->setText(QApplication::translate("xToolsCRCAssistant", "Parameter model", nullptr));
        labelPolyFormula->setText(QString());
        label_2->setText(QApplication::translate("xToolsCRCAssistant", "Width", nullptr));
        textEdit->setHtml(QApplication::translate("xToolsCRCAssistant", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        pushButtonCopyBin->setText(QApplication::translate("xToolsCRCAssistant", "Copy", nullptr));
        lineEditPoly->setText(QString());
        label_4->setText(QApplication::translate("xToolsCRCAssistant", "Paloy", nullptr));
        label_3->setText(QApplication::translate("xToolsCRCAssistant", "Input data", nullptr));
        label_9->setText(QApplication::translate("xToolsCRCAssistant", "Result(BIN)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsCRCAssistant: public Ui_xToolsCRCAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSCRCASSISTANT_H
