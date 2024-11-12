/********************************************************************************
** Form generated from reading UI file 'choose1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE1_H
#define UI_CHOOSE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choose1
{
public:
    QPushButton *pushButton4;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QComboBox *comboBox;

    void setupUi(QWidget *choose1)
    {
        if (choose1->objectName().isEmpty())
            choose1->setObjectName(QString::fromUtf8("choose1"));
        choose1->resize(2004, 986);
        choose1->setStyleSheet(QString::fromUtf8(""));
        pushButton4 = new QPushButton(choose1);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setGeometry(QRect(790, 890, 311, 41));
        pushButton4->setStyleSheet(QString::fromUtf8("QPushButton{  \n"
"    background-color: #808080; /* \350\203\214\346\231\257\351\242\234\350\211\262 */  \n"
"    color: #FFFFFF; /* \346\226\207\345\255\227\351\242\234\350\211\262 */  \n"
"    border: 1px solid gray; /* \350\276\271\346\241\206\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */  \n"
"    border-top-left-radius: 10px; /* \345\267\246\344\270\212\350\247\222\345\234\206\350\247\222 */  \n"
"    border-top-right-radius: 10px; /* \345\217\263\344\270\212\350\247\222\345\234\206\350\247\222 */  \n"
"    border-bottom-left-radius: 10px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */  \n"
"    border-bottom-right-radius: 10px; /* \345\217\263\344\270\213\350\247\222\345\234\206\350\247\222 */  \n"
"    padding: 5px 15px; /* \345\206\205\350\276\271\350\267\235\357\274\214\350\277\231\351\207\214\346\210\221\347\250\215\345\276\256\350\260\203\346\225\264\344\272\206\346\260\264\345\271\263\345\206\205\350\276\271\350\267\235\344\273"
                        "\245\345\214\271\351\205\215\345\216\237\345\247\213CSS\347\232\204\350\247\206\350\247\211\346\225\210\346\236\234 */  \n"
"    font-size: 16px; /* \346\263\250\346\204\217\357\274\232Qt\346\240\267\345\274\217\350\241\250\344\270\215\346\224\257\346\214\201\347\233\264\346\216\245\350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217\357\274\214\350\277\231\351\200\232\345\270\270\351\234\200\350\246\201\345\234\250\346\216\247\344\273\266\347\232\204\347\210\266\347\252\227\345\217\243\346\210\226\345\272\224\347\224\250\347\250\213\345\272\217\347\272\247\345\210\253\350\256\276\347\275\256 */  \n"
"    transition: background-color 0.3s; /* \350\203\214\346\231\257\351\242\234\350\211\262\350\277\207\346\270\241\346\225\210\346\236\234\357\274\214Qt\346\224\257\346\214\201\346\255\244\345\261\236\346\200\247 */  \n"
"}  \n"
"  \n"
"QPushButton:hover {\n"
"    /* \346\202\254\345\201\234\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"    background-color: #007bff; /* \350\223\235\350"
                        "\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    /* \346\214\211\344\270\213\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"    background-color: #0056b3; /* \346\233\264\346\267\261\347\232\204\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"\n"
"}"));
        label = new QLabel(choose1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(850, 30, 231, 61));
        tabWidget = new QTabWidget(choose1);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(70, 100, 1841, 741));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tabWidget->addTab(tab1, QString());
        comboBox = new QComboBox(choose1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1730, 80, 181, 21));

        retranslateUi(choose1);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(choose1);
    } // setupUi

    void retranslateUi(QWidget *choose1)
    {
        choose1->setWindowTitle(QApplication::translate("choose1", "Form", nullptr));
        pushButton4->setText(QApplication::translate("choose1", "\344\270\213\344\270\200\346\255\245", nullptr));
        label->setText(QApplication::translate("choose1", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\351\200\211\346\213\251\346\250\241\346\213\237\345\231\250</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("choose1", "Tab 1", nullptr));
        comboBox->setItemText(0, QApplication::translate("choose1", "\350\257\267\351\200\211\346\213\251\346\263\242\345\275\242", nullptr));
        comboBox->setItemText(1, QApplication::translate("choose1", "Link4A", nullptr));
        comboBox->setItemText(2, QApplication::translate("choose1", "Link11", nullptr));
        comboBox->setItemText(3, QApplication::translate("choose1", "Link11B", nullptr));
        comboBox->setItemText(4, QApplication::translate("choose1", "Link16", nullptr));
        comboBox->setItemText(5, QApplication::translate("choose1", "TTNT", nullptr));
        comboBox->setItemText(6, QApplication::translate("choose1", "Sincgars", nullptr));
        comboBox->setItemText(7, QApplication::translate("choose1", "HaveQuick", nullptr));
        comboBox->setItemText(8, QApplication::translate("choose1", "EPLRS", nullptr));
        comboBox->setItemText(9, QApplication::translate("choose1", "\345\270\270\350\247\204\346\250\241\346\213\237", nullptr));
        comboBox->setItemText(10, QApplication::translate("choose1", "\345\270\270\350\247\204\346\225\260\345\255\227", nullptr));
        comboBox->setItemText(11, QApplication::translate("choose1", "\346\250\241\346\213\237J\351\223\276", nullptr));
        comboBox->setItemText(12, QApplication::translate("choose1", "\346\250\241\346\213\237UV\351\223\276", nullptr));
        comboBox->setItemText(13, QApplication::translate("choose1", "\346\250\241\346\213\237171\351\223\276", nullptr));

    } // retranslateUi

};

namespace Ui {
    class choose1: public Ui_choose1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE1_H
