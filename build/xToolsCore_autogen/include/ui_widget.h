/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLabel *lb_dev;
    QLabel *lb_pac;
    QLabel *lb_par;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_search;
    QPushButton *searchmgm;
    QPushButton *newmgm;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tb_mgm;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1024, 1024);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(16777215, 16777215));
        Widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(10, 0));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lb_dev = new QLabel(widget_3);
        lb_dev->setObjectName(QString::fromUtf8("lb_dev"));
        lb_dev->setMinimumSize(QSize(100, 0));
        lb_dev->setMaximumSize(QSize(100, 16777215));
        lb_dev->setSizeIncrement(QSize(100, 0));
        lb_dev->setLayoutDirection(Qt::LeftToRight);
        lb_dev->setStyleSheet(QString::fromUtf8("color:white"));

        verticalLayout->addWidget(lb_dev);

        lb_pac = new QLabel(widget_3);
        lb_pac->setObjectName(QString::fromUtf8("lb_pac"));
        lb_pac->setMaximumSize(QSize(100, 16777215));
        lb_pac->setStyleSheet(QString::fromUtf8("color: rgb(161, 161, 161)"));

        verticalLayout->addWidget(lb_pac);

        lb_par = new QLabel(widget_3);
        lb_par->setObjectName(QString::fromUtf8("lb_par"));
        lb_par->setMaximumSize(QSize(100, 16777215));
        lb_par->setStyleSheet(QString::fromUtf8("color: rgb(161, 161, 161)"));

        verticalLayout->addWidget(lb_par);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_search = new QLineEdit(widget_5);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));

        horizontalLayout_2->addWidget(lineEdit_search);

        searchmgm = new QPushButton(widget_5);
        searchmgm->setObjectName(QString::fromUtf8("searchmgm"));

        horizontalLayout_2->addWidget(searchmgm);

        newmgm = new QPushButton(widget_5);
        newmgm->setObjectName(QString::fromUtf8("newmgm"));

        horizontalLayout_2->addWidget(newmgm);

        horizontalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_5);

        tb_mgm = new QTableWidget(widget_4);
        tb_mgm->setObjectName(QString::fromUtf8("tb_mgm"));
        tb_mgm->setEnabled(true);
        tb_mgm->setMaximumSize(QSize(1677215, 16777215));
        QFont font;
        font.setPointSize(9);
        tb_mgm->setFont(font);
        tb_mgm->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        tb_mgm->setDragEnabled(false);
        tb_mgm->setSortingEnabled(false);
        tb_mgm->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tb_mgm);


        horizontalLayout_3->addWidget(widget_4);


        verticalLayout_3->addWidget(widget_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        lb_dev->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\350\256\276\345\244\207\347\256\241\347\220\206</span></p></body></html>", nullptr));
        lb_pac->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\346\212\245\346\226\207\347\256\241\347\220\206</span></p></body></html>", nullptr));
        lb_par->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\345\217\202\346\225\260\347\256\241\347\220\206</span></p></body></html>", nullptr));
        searchmgm->setText(QApplication::translate("Widget", "\346\220\234\347\264\242", nullptr));
        newmgm->setText(QApplication::translate("Widget", "\346\226\260\345\242\236", nullptr));
        Q_UNUSED(Widget);
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
