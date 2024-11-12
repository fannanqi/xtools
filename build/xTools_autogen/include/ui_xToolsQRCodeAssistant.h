/********************************************************************************
** Form generated from reading UI file 'xToolsQRCodeAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSQRCODEASSISTANT_H
#define UI_XTOOLSQRCODEASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsQRCodeAssistant
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonExport;
    QLineEdit *lineEditData;
    QPushButton *pushButtonGenerate;
    QLabel *labelImage;

    void setupUi(QWidget *xToolsQRCodeAssistant)
    {
        if (xToolsQRCodeAssistant->objectName().isEmpty())
            xToolsQRCodeAssistant->setObjectName(QString::fromUtf8("xToolsQRCodeAssistant"));
        xToolsQRCodeAssistant->resize(480, 347);
        xToolsQRCodeAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsQRCodeAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonExport = new QPushButton(xToolsQRCodeAssistant);
        pushButtonExport->setObjectName(QString::fromUtf8("pushButtonExport"));

        gridLayout->addWidget(pushButtonExport, 1, 1, 1, 1);

        lineEditData = new QLineEdit(xToolsQRCodeAssistant);
        lineEditData->setObjectName(QString::fromUtf8("lineEditData"));
        lineEditData->setMinimumSize(QSize(300, 0));

        gridLayout->addWidget(lineEditData, 1, 0, 1, 1);

        pushButtonGenerate = new QPushButton(xToolsQRCodeAssistant);
        pushButtonGenerate->setObjectName(QString::fromUtf8("pushButtonGenerate"));

        gridLayout->addWidget(pushButtonGenerate, 1, 2, 1, 1);

        labelImage = new QLabel(xToolsQRCodeAssistant);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(0, 300));
        labelImage->setText(QString::fromUtf8(""));

        gridLayout->addWidget(labelImage, 0, 0, 1, 3);


        retranslateUi(xToolsQRCodeAssistant);

        QMetaObject::connectSlotsByName(xToolsQRCodeAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsQRCodeAssistant)
    {
        pushButtonExport->setText(QApplication::translate("xToolsQRCodeAssistant", "Export", nullptr));
        pushButtonGenerate->setText(QApplication::translate("xToolsQRCodeAssistant", "Generate", nullptr));
        Q_UNUSED(xToolsQRCodeAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsQRCodeAssistant: public Ui_xToolsQRCodeAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSQRCODEASSISTANT_H
