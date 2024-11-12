/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFrame *frame;
    QLineEdit *nameEdit;
    QLineEdit *networkCountEdit;
    QPushButton *btn_log;
    QLabel *label;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(966, 529);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 30, 481, 411));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 50, 411, 311));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"}\n"
"QFrame {\n"
"    background-color: #121636;\n"
"}"));
        frame->setFrameShape(QFrame::NoFrame);
        nameEdit = new QLineEdit(frame);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(110, 70, 179, 29));
        nameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #121636t;\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
""));
        networkCountEdit = new QLineEdit(frame);
        networkCountEdit->setObjectName(QString::fromUtf8("networkCountEdit"));
        networkCountEdit->setGeometry(QRect(110, 100, 179, 29));
        networkCountEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #121636t;\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
""));
        btn_log = new QPushButton(frame);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setGeometry(QRect(110, 250, 179, 27));
        btn_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: blue;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: gray;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: darkblue;\n"
"    border-color: blue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: lightblue;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 0, 241, 51));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        login->setToolTip(QApplication::translate("login", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        nameEdit->setText(QString());
        nameEdit->setPlaceholderText(QApplication::translate("login", "\350\276\223\345\205\245\345\234\272\346\231\257\345\220\215\347\247\260", nullptr));
        networkCountEdit->setText(QString());
        networkCountEdit->setPlaceholderText(QApplication::translate("login", "\350\276\223\345\205\245\347\275\221\347\273\234\346\225\260", nullptr));
        btn_log->setText(QApplication::translate("login", "\347\241\256\350\256\244", nullptr));
        label->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\345\210\233\345\273\272\347\275\221\347\273\234\350\247\204\345\210\222</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
