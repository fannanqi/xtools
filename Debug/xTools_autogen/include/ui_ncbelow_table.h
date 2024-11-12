/********************************************************************************
** Form generated from reading UI file 'ncbelow_table.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NCBELOW_TABLE_H
#define UI_NCBELOW_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ncbelow_table
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QSpinBox *spinBox;

    void setupUi(QWidget *ncbelow_table)
    {
        if (ncbelow_table->objectName().isEmpty())
            ncbelow_table->setObjectName(QString::fromUtf8("ncbelow_table"));
        ncbelow_table->resize(941, 623);
        ncbelow_table->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(ncbelow_table);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ncbelow_table);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 5, 1, 1);

        pushButton_3 = new QPushButton(ncbelow_table);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 5, 4, 1, 1);

        pushButton = new QPushButton(ncbelow_table);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 2, 1, 1);

        pushButton_2 = new QPushButton(ncbelow_table);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 5, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        tableWidget = new QTableWidget(ncbelow_table);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 5);

        spinBox = new QSpinBox(ncbelow_table);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 2, 0, 1, 5);


        retranslateUi(ncbelow_table);

        QMetaObject::connectSlotsByName(ncbelow_table);
    } // setupUi

    void retranslateUi(QWidget *ncbelow_table)
    {
        ncbelow_table->setWindowTitle(QApplication::translate("ncbelow_table", "Form", nullptr));
        label->setText(QString());
        pushButton_3->setText(QApplication::translate("ncbelow_table", "\350\267\263\350\275\254", nullptr));
        pushButton->setText(QApplication::translate("ncbelow_table", "\344\270\212\344\270\200\351\241\265", nullptr));
        pushButton_2->setText(QApplication::translate("ncbelow_table", "\344\270\213\344\270\200\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ncbelow_table: public Ui_ncbelow_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NCBELOW_TABLE_H
