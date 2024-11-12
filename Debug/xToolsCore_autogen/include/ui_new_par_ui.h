/********************************************************************************
** Form generated from reading UI file 'new_par_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PAR_UI_H
#define UI_NEW_PAR_UI_H

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

class Ui_new_par_ui
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
    QPushButton *par_add;
    QPushButton *par_cancel;
    QWidget *widget_5;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;

    void setupUi(QWidget *new_par_ui)
    {
        if (new_par_ui->objectName().isEmpty())
            new_par_ui->setObjectName(QString::fromUtf8("new_par_ui"));
        new_par_ui->resize(345, 467);
        verticalLayout = new QVBoxLayout(new_par_ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_4 = new QWidget(new_par_ui);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(new_par_ui);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        par_add = new QPushButton(widget_2);
        par_add->setObjectName(QString::fromUtf8("par_add"));

        horizontalLayout->addWidget(par_add);

        par_cancel = new QPushButton(widget_2);
        par_cancel->setObjectName(QString::fromUtf8("par_cancel"));

        horizontalLayout->addWidget(par_cancel);


        verticalLayout_3->addWidget(widget_2);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        formLayout = new QFormLayout(widget_5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
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

        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEdit_5 = new QLineEdit(widget_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(widget_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_6 = new QLineEdit(widget_5);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        lineEdit_7 = new QLineEdit(widget_5);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_7);

        lineEdit_8 = new QLineEdit(widget_5);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_8);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);


        verticalLayout_3->addWidget(widget_5);


        verticalLayout->addWidget(widget);


        retranslateUi(new_par_ui);

        QMetaObject::connectSlotsByName(new_par_ui);
    } // setupUi

    void retranslateUi(QWidget *new_par_ui)
    {
        new_par_ui->setWindowTitle(QApplication::translate("new_par_ui", "Form", nullptr));
        label->setText(QApplication::translate("new_par_ui", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#3f8cff;\">\345\217\202\346\225\260\346\226\260\345\242\236\347\225\214\351\235\242</span></p></body></html>", nullptr));
        par_add->setText(QApplication::translate("new_par_ui", "\346\267\273\345\212\240", nullptr));
        par_cancel->setText(QApplication::translate("new_par_ui", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QApplication::translate("new_par_ui", "\345\217\202\346\225\260\347\274\226\345\217\267", nullptr));
        label_4->setText(QApplication::translate("new_par_ui", "\345\217\202\346\225\260\345\220\215\347\247\260", nullptr));
        label_5->setText(QApplication::translate("new_par_ui", "\346\257\224\347\211\271\346\225\260", nullptr));
        label_6->setText(QApplication::translate("new_par_ui", "\346\225\260\346\215\256\347\261\273\345\236\213", nullptr));
        label_7->setText(QApplication::translate("new_par_ui", "\347\212\266\346\200\201", nullptr));
        label_2->setText(QApplication::translate("new_par_ui", "\346\212\245\346\226\207\347\261\273\345\236\213", nullptr));
        lineEdit_8->setText(QApplication::translate("new_par_ui", "\345\244\207\346\263\250\345\206\205\345\256\271", nullptr));
        label_9->setText(QApplication::translate("new_par_ui", "\351\200\211\351\241\271", nullptr));
        label_10->setText(QApplication::translate("new_par_ui", "\351\273\230\350\256\244\345\200\274", nullptr));
        label_8->setText(QApplication::translate("new_par_ui", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_par_ui: public Ui_new_par_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PAR_UI_H
