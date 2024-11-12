/********************************************************************************
** Form generated from reading UI file 'xToolsNumberAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSNUMBERASSISTANT_H
#define UI_XTOOLSNUMBERASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsNumberAssistant
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_5;
    QComboBox *comboBoxCookedDataType;
    QLineEdit *lineEditCookedHex;
    QLineEdit *lineEditCookedBin;
    QLabel *label_2;
    QLineEdit *lineEditCookedDec;
    QLabel *label_6;
    QLineEdit *lineEditRawData;

    void setupUi(QWidget *xToolsNumberAssistant)
    {
        if (xToolsNumberAssistant->objectName().isEmpty())
            xToolsNumberAssistant->setObjectName(QString::fromUtf8("xToolsNumberAssistant"));
        xToolsNumberAssistant->resize(710, 161);
        xToolsNumberAssistant->setMinimumSize(QSize(680, 0));
        xToolsNumberAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsNumberAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(xToolsNumberAssistant);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(xToolsNumberAssistant);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        line = new QFrame(xToolsNumberAssistant);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label_5 = new QLabel(xToolsNumberAssistant);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        comboBoxCookedDataType = new QComboBox(xToolsNumberAssistant);
        comboBoxCookedDataType->setObjectName(QString::fromUtf8("comboBoxCookedDataType"));

        gridLayout->addWidget(comboBoxCookedDataType, 2, 1, 1, 1);

        lineEditCookedHex = new QLineEdit(xToolsNumberAssistant);
        lineEditCookedHex->setObjectName(QString::fromUtf8("lineEditCookedHex"));
        lineEditCookedHex->setText(QString::fromUtf8(""));
        lineEditCookedHex->setReadOnly(true);

        gridLayout->addWidget(lineEditCookedHex, 5, 1, 1, 1);

        lineEditCookedBin = new QLineEdit(xToolsNumberAssistant);
        lineEditCookedBin->setObjectName(QString::fromUtf8("lineEditCookedBin"));
        lineEditCookedBin->setText(QString::fromUtf8(""));
        lineEditCookedBin->setReadOnly(true);

        gridLayout->addWidget(lineEditCookedBin, 3, 1, 1, 1);

        label_2 = new QLabel(xToolsNumberAssistant);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        lineEditCookedDec = new QLineEdit(xToolsNumberAssistant);
        lineEditCookedDec->setObjectName(QString::fromUtf8("lineEditCookedDec"));
        lineEditCookedDec->setText(QString::fromUtf8(""));
        lineEditCookedDec->setReadOnly(false);

        gridLayout->addWidget(lineEditCookedDec, 4, 1, 1, 1);

        label_6 = new QLabel(xToolsNumberAssistant);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        lineEditRawData = new QLineEdit(xToolsNumberAssistant);
        lineEditRawData->setObjectName(QString::fromUtf8("lineEditRawData"));
        lineEditRawData->setText(QString::fromUtf8(""));

        gridLayout->addWidget(lineEditRawData, 0, 1, 1, 1);


        retranslateUi(xToolsNumberAssistant);

        QMetaObject::connectSlotsByName(xToolsNumberAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsNumberAssistant)
    {
        label->setText(QApplication::translate("xToolsNumberAssistant", "Raw data", nullptr));
        label_3->setText(QApplication::translate("xToolsNumberAssistant", "Cooked data(Hex)", nullptr));
        label_5->setText(QApplication::translate("xToolsNumberAssistant", "Cooked data type", nullptr));
        label_2->setText(QApplication::translate("xToolsNumberAssistant", "Cooked data(Dec)", nullptr));
        lineEditCookedDec->setPlaceholderText(QApplication::translate("xToolsNumberAssistant", "Such as: 1, -1, 1.1, -1.1", nullptr));
        label_6->setText(QApplication::translate("xToolsNumberAssistant", "Cooked data(Bin)", nullptr));
        lineEditRawData->setPlaceholderText(QApplication::translate("xToolsNumberAssistant", "From left to right is high to low", nullptr));
        Q_UNUSED(xToolsNumberAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsNumberAssistant: public Ui_xToolsNumberAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSNUMBERASSISTANT_H
