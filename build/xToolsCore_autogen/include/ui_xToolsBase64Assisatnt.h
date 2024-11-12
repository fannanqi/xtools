/********************************************************************************
** Form generated from reading UI file 'xToolsBase64Assisatnt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSBASE64ASSISATNT_H
#define UI_XTOOLSBASE64ASSISATNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsBase64Assisatnt
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainText;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *cipherText;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *image;
    QPushButton *decrypt;
    QPushButton *encrypt;

    void setupUi(QWidget *xToolsBase64Assisatnt)
    {
        if (xToolsBase64Assisatnt->objectName().isEmpty())
            xToolsBase64Assisatnt->setObjectName(QString::fromUtf8("xToolsBase64Assisatnt"));
        xToolsBase64Assisatnt->resize(776, 386);
        gridLayout = new QGridLayout(xToolsBase64Assisatnt);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(xToolsBase64Assisatnt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainText = new QPlainTextEdit(groupBox);
        plainText->setObjectName(QString::fromUtf8("plainText"));

        gridLayout_2->addWidget(plainText, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(xToolsBase64Assisatnt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cipherText = new QPlainTextEdit(groupBox_2);
        cipherText->setObjectName(QString::fromUtf8("cipherText"));

        gridLayout_3->addWidget(cipherText, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        image = new QPushButton(xToolsBase64Assisatnt);
        image->setObjectName(QString::fromUtf8("image"));

        horizontalLayout->addWidget(image);

        decrypt = new QPushButton(xToolsBase64Assisatnt);
        decrypt->setObjectName(QString::fromUtf8("decrypt"));

        horizontalLayout->addWidget(decrypt);

        encrypt = new QPushButton(xToolsBase64Assisatnt);
        encrypt->setObjectName(QString::fromUtf8("encrypt"));

        horizontalLayout->addWidget(encrypt);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(xToolsBase64Assisatnt);

        QMetaObject::connectSlotsByName(xToolsBase64Assisatnt);
    } // setupUi

    void retranslateUi(QWidget *xToolsBase64Assisatnt)
    {
        xToolsBase64Assisatnt->setWindowTitle(QApplication::translate("xToolsBase64Assisatnt", "Base64 Assistant", nullptr));
        groupBox->setTitle(QApplication::translate("xToolsBase64Assisatnt", "Plaintext", nullptr));
        groupBox_2->setTitle(QApplication::translate("xToolsBase64Assisatnt", "Ciphertext", nullptr));
        image->setText(QApplication::translate("xToolsBase64Assisatnt", "Image", nullptr));
        decrypt->setText(QApplication::translate("xToolsBase64Assisatnt", "Decrypt", nullptr));
        encrypt->setText(QApplication::translate("xToolsBase64Assisatnt", "Encrypt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsBase64Assisatnt: public Ui_xToolsBase64Assisatnt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSBASE64ASSISATNT_H
