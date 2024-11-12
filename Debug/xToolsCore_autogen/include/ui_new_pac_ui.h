/********************************************************************************
** Form generated from reading UI file 'new_pac_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PAC_UI_H
#define UI_NEW_PAC_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_pac_ui
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pac_add;
    QPushButton *pac_cancel;
    QWidget *widget_5;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QComboBox *comboBox;

    void setupUi(QWidget *new_pac_ui)
    {
        if (new_pac_ui->objectName().isEmpty())
            new_pac_ui->setObjectName(QString::fromUtf8("new_pac_ui"));
        new_pac_ui->resize(330, 312);
        verticalLayout = new QVBoxLayout(new_pac_ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_4 = new QWidget(new_pac_ui);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(new_pac_ui);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pac_add = new QPushButton(widget_2);
        pac_add->setObjectName(QString::fromUtf8("pac_add"));

        horizontalLayout->addWidget(pac_add);

        pac_cancel = new QPushButton(widget_2);
        pac_cancel->setObjectName(QString::fromUtf8("pac_cancel"));

        horizontalLayout->addWidget(pac_cancel);


        verticalLayout_3->addWidget(widget_2);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        formLayout = new QFormLayout(widget_5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(widget_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(widget_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(widget_5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(widget_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(widget_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox);


        verticalLayout_3->addWidget(widget_5);


        verticalLayout->addWidget(widget);


        retranslateUi(new_pac_ui);

        QMetaObject::connectSlotsByName(new_pac_ui);
    } // setupUi

    void retranslateUi(QWidget *new_pac_ui)
    {
        new_pac_ui->setWindowTitle(QApplication::translate("new_pac_ui", "Form", nullptr));
        label->setText(QApplication::translate("new_pac_ui", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#3f8cff;\">\346\212\245\346\226\207\346\226\260\345\242\236\347\225\214\351\235\242</span></p></body></html>", nullptr));
        pac_add->setText(QApplication::translate("new_pac_ui", "\346\267\273\345\212\240", nullptr));
        pac_cancel->setText(QApplication::translate("new_pac_ui", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QApplication::translate("new_pac_ui", "\346\212\245\346\226\207\347\263\273\345\210\227", nullptr));
        label_3->setText(QApplication::translate("new_pac_ui", "\346\212\245\346\226\207\347\274\226\345\217\267", nullptr));
        label_4->setText(QApplication::translate("new_pac_ui", "\346\212\245\346\226\207\345\220\215\347\247\260", nullptr));
        label_5->setText(QApplication::translate("new_pac_ui", "\351\273\230\350\256\244\346\225\260\346\215\256\345\214\205", nullptr));
        label_7->setText(QApplication::translate("new_pac_ui", "\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_pac_ui: public Ui_new_pac_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PAC_UI_H
