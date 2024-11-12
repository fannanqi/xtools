/********************************************************************************
** Form generated from reading UI file 'selectparameters.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPARAMETERS_H
#define UI_SELECTPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectParameters
{
public:
    QAction *btn_dev;
    QAction *pac_btn;
    QAction *par_btn;
    QAction *btn_pac;
    QAction *btn_par;
    QWidget *centralwidget;
    QPushButton *SaveButton;
    QTreeWidget *treeWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *Widget;
    QLabel *label3;
    QWidget *widget3;
    QStackedWidget *stackedWidget;
    QWidget *Link11parts;
    QWidget *page2;
    QLabel *label_24;
    QWidget *widget2;
    QWidget *widget1;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SelectParameters)
    {
        if (SelectParameters->objectName().isEmpty())
            SelectParameters->setObjectName(QString::fromUtf8("SelectParameters"));
        SelectParameters->resize(2276, 933);
        SelectParameters->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256\346\225\264\344\270\252\347\225\214\351\235\242\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"QWidget {\n"
"    background-color: #121636;\n"
"	color: #FFFFFF;   \n"
"}"));
        btn_dev = new QAction(SelectParameters);
        btn_dev->setObjectName(QString::fromUtf8("btn_dev"));
        pac_btn = new QAction(SelectParameters);
        pac_btn->setObjectName(QString::fromUtf8("pac_btn"));
        par_btn = new QAction(SelectParameters);
        par_btn->setObjectName(QString::fromUtf8("par_btn"));
        btn_pac = new QAction(SelectParameters);
        btn_pac->setObjectName(QString::fromUtf8("btn_pac"));
        btn_par = new QAction(SelectParameters);
        btn_par->setObjectName(QString::fromUtf8("btn_par"));
        centralwidget = new QWidget(SelectParameters);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(850, 820, 181, 41));
        SaveButton->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: blue;      /* Set the background color */\n"
"        color: white;                /* Set the text color */\n"
"        border: none;                /* Remove default borders */\n"
"        border-radius: 15px;         /* Set rounded corners (ellipse shape) */\n"
"        padding: 10px 20px;          /* Add padding to adjust the size */\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: lightblue; /* Change color on hover */\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: darkblue;  /* Change color when pressed */\n"
"    }"));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 20, 211, 761));
        treeWidget->setStyleSheet(QString::fromUtf8("QTreeWidget {\n"
"    border: none;\n"
"    background-color: #121636; /* \350\203\214\346\231\257\351\242\234\350\211\262\344\270\216\347\225\214\351\235\242\344\270\200\350\207\264 */\n"
"    color: #FFFFFF;            /* \345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    show-decoration-selected: 1; /* \344\275\277\351\200\211\344\270\255\347\232\204\351\241\271\346\230\276\347\244\272\350\243\205\351\245\260 */\n"
"    font-family: 'Arial';\n"
"    font-size: 12px;\n"
"    padding: 0px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QTreeWidget::branch {\n"
"    border-image: none;\n"
"}\n"
"\n"
"QTreeWidget::item {\n"
"    background-color: #121636; /* \351\241\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #FFFFFF;            /* \351\241\271\347\232\204\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 5px;         /* Adjusted for consistency */\n"
"    paddi"
                        "ng-bottom: 5px;      /* Adjusted for consistency */\n"
"    border-radius: 4px;\n"
"    border: 1px solid transparent;\n"
"    margin-left: 1px;\n"
"    margin-right: 1px;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"}\n"
"\n"
"QTreeWidget::item:hover {\n"
"    border: 1px solid #C0C0C0; /* Optional: keep the border */\n"
"    background-color: #2E2E2E; /* A darker grey for hover */\n"
"}\n"
"\n"
"QTreeWidget::item:selected {\n"
"    background-color: #0000FF; /* \351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262 */\n"
"    color: #FFFFFF;            /* \351\200\211\344\270\255\351\241\271\347\232\204\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QTreeWidget::item:selected:!active {\n"
"    border: 1px solid #B0DDBD;\n"
"}\n"
"\n"
"QTreeWidget::item:active {\n"
"    border: 1px solid #333333;\n"
"}\n"
"\n"
"QTreeWidget::indicator {\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"/* \351\232"
                        "\220\350\227\217 QTreeWidget \347\232\204\346\273\232\345\212\250\346\235\241 */\n"
"QTreeWidget QScrollBar:vertical {\n"
"    width: 0px;\n"
"}\n"
"\n"
"QTreeWidget QScrollBar:horizontal {\n"
"    height: 0px;\n"
"}\n"
""));
        treeWidget->header()->setVisible(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 10, 1781, 791));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Widget = new QWidget(layoutWidget);
        Widget->setObjectName(QString::fromUtf8("Widget"));
        label3 = new QLabel(Widget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(20, 20, 123, 21));
        widget3 = new QWidget(Widget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 10, 1671, 761));
        widget3->setMaximumSize(QSize(2000, 16777215));
        widget3->setStyleSheet(QString::fromUtf8("QWidget#widget3 {\n"
"    border: 2px solid lightblue;\n"
"    border-top-right-radius: 0px;  /* \345\217\263\344\270\212\350\247\222\344\270\272\346\226\271\350\247\222 */\n"
"    border-top-left-radius: 0px;   /* \345\267\246\344\270\212\350\247\222\344\270\272\346\226\271\350\247\222 */\n"
"    border-bottom-right-radius: 10px; /* \345\217\263\344\270\213\350\247\222\344\270\272\345\234\206\350\247\222 */\n"
"    border-bottom-left-radius: 10px;  /* \345\267\246\344\270\213\350\247\222\344\270\272\345\234\206\350\247\222 */\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(widget3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 1641, 701));
        Link11parts = new QWidget();
        Link11parts->setObjectName(QString::fromUtf8("Link11parts"));
        stackedWidget->addWidget(Link11parts);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        stackedWidget->addWidget(page2);
        label_24 = new QLabel(widget3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(1570, 10, 90, 20));
        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(150, 10, 31, 41));
        widget2->setStyleSheet(QString::fromUtf8("border-left: 2px solid lightblue;\n"
"border-top: 2px solid lightblue;\n"
"border-right: none;\n"
"border-bottom: 2px solid lightblue;"));
        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 40, 1671, 16));
        widget1->setStyleSheet(QString::fromUtf8("border-left: 2px solid lightblue;\n"
"border-top: 2px solid lightblue;\n"
"border-right: 2px solid lightblue;\n"
"border-bottom: none;\n"
""));
        widget3->raise();
        label3->raise();
        widget2->raise();
        widget1->raise();

        horizontalLayout->addWidget(Widget);

        verticalSpacer = new QSpacerItem(20, 768, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(verticalSpacer);

        horizontalLayout->setStretch(0, 100);
        horizontalLayout->setStretch(1, 5);
        SelectParameters->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SelectParameters);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SelectParameters->setStatusBar(statusbar);

        retranslateUi(SelectParameters);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SelectParameters);
    } // setupUi

    void retranslateUi(QMainWindow *SelectParameters)
    {
        SelectParameters->setWindowTitle(QApplication::translate("SelectParameters", "MainWindow", nullptr));
        btn_dev->setText(QApplication::translate("SelectParameters", "\350\256\276\345\244\207\347\256\241\347\220\206", nullptr));
        pac_btn->setText(QApplication::translate("SelectParameters", "\346\212\245\346\226\207\347\256\241\347\220\206", nullptr));
        par_btn->setText(QApplication::translate("SelectParameters", "\345\217\202\346\225\260\347\256\241\347\220\206", nullptr));
        btn_pac->setText(QApplication::translate("SelectParameters", "\346\212\245\346\226\207\347\256\241\347\220\206", nullptr));
        btn_par->setText(QApplication::translate("SelectParameters", "\345\217\202\346\225\260\347\256\241\347\220\206", nullptr));
        SaveButton->setText(QApplication::translate("SelectParameters", "\344\277\235\345\255\230", nullptr));
        label3->setText(QApplication::translate("SelectParameters", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_24->setText(QApplication::translate("SelectParameters", "<html><head/><body><p><span style=\" color:#00aaff;\">\346\237\245\347\234\213\347\275\221\347\273\234\346\210\220\345\221\230</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectParameters: public Ui_SelectParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPARAMETERS_H
