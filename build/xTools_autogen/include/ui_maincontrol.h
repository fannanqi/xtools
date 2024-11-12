/********************************************************************************
** Form generated from reading UI file 'maincontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONTROL_H
#define UI_MAINCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_maincontrol
{
public:
    //整个的布局框
    QGridLayout *gridLayout_2;
    //整个的widget
    QWidget *centralwidget;
    //左侧树状的widegt
    QTreeWidget *treeWidget;
    //底部的widget
    QTabWidget *belowTabWidget;
    //消息统计tab
    QWidget *belowtab;
    //消息记录
    QWidget *belowtab_2;
    //通信协议参数的具体显示
    QWidget *widget2;
    //右侧tabWidget
    QTabWidget *rightTabWidget_2;
    //实时输出
    QWidget *righttab;
    //接收消息
    QWidget *righttab_2;
    //发送消息
    QWidget *righttab_3;
    //
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget_2;
    QWidget *widget;
    QWidget *widget_3;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;

    void setupUi(QWidget *maincontrol)
    {
        if (maincontrol->objectName().isEmpty())
            maincontrol->setObjectName(QString::fromUtf8("maincontrol"));
        maincontrol->resize(1874, 1070);
        maincontrol->setStyleSheet(QString::fromUtf8(
            "/* "
            "\350\256\276\347\275\256\346\225\264\344\270\252\347\225\214\351\235\242\347\232\204"
            "\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
            "QWidget {\n"
            "    background-color: #121636;\n"
            "}"));

        gridLayout_2 = new QGridLayout(maincontrol);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        centralwidget = new QWidget(maincontrol);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        //左侧的树状widget
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 0, 221, 931));
        treeWidget->setStyleSheet(QString::fromUtf8(
            "/* \350\256\276\347\275\256 QTreeWidget \347\232\204\346\240\267\345\274\217 */\n"
            "QTreeWidget {\n"
            "    border: none;\n"
            "    /*background-color: #121636;*/ /* "
            "\350\203\214\346\231\257\351\242\234\350\211\262\344\270\216\347\225\214\351\235\242"
            "\344\270\200\350\207\264 */\n"
            "    color: #FFFFFF;            /* "
            "\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 "
            "*/\n"
            "    /*show-decoration-selected: 1;*/ /* "
            "\344\275\277\351\200\211\344\270\255\347\232\204\351\241\271\346\230\276\347\244\272"
            "\350\243\205\351\245\260 */\n"
            "}\n"
            "\n"
            "/* \350\256\276\347\275\256 QTreeWidget "
            "\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
            "QTreeWidget::item {\n"
            "    /*background-color: #121636;*/ /* "
            "\351\241\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
            "    color: #FFFFFF;            /* "
            "\351\241\271\347\232\204\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
            "    padding: 5px;              /* "
            "\351\241\271\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
            ""
            "}\n"
            "\n"
            "/* \350\256\276\347\275\256 QTreeWidget "
            "\351\241\271\347\232\204\351\200\211\344\270\255\346\240\267\345\274\217 */\n"
            "/*QTreeWidget::item:selected {\n"
            "    background-color: #121636; /* "
            "\351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\351\242\234"
            "\350\211\262 */\n"
            "    /*color: #FFFFFF;            /* "
            "\351\200\211\344\270\255\351\241\271\347\232\204\345\255\227\344\275\223\351\242\234"
            "\350\211\262 */\n"
            "/*}*/\n"
            "\n"
            "/* \351\232\220\350\227\217 QTreeWidget "
            "\347\232\204\346\273\232\345\212\250\346\235\241 */\n"
            "QTreeWidget QScrollBar:vertical {\n"
            "    width: 0px;\n"
            "}\n"
            "\n"
            "QTreeWidget QScrollBar:horizontal {\n"
            "    height: 0px;\n"
            "}"));
        //？？？？？？
        belowTabWidget = new QTabWidget(centralwidget);
        belowTabWidget->setObjectName(QString::fromUtf8("belowTabWidget"));
        belowTabWidget->setGeometry(QRect(260, 650, 1601, 261));
        belowTabWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        belowtab = new QWidget();
        belowtab->setObjectName(QString::fromUtf8("belowtab"));
        belowtab->setStyleSheet(QString::fromUtf8(""));
        belowTabWidget->addTab(belowtab, QString());
        belowtab_2 = new QWidget();
        belowtab_2->setObjectName(QString::fromUtf8("belowtab_2"));
        belowtab_2->setStyleSheet(QString::fromUtf8(""));
        belowTabWidget->addTab(belowtab_2, QString());
        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(260, 50, 1601, 601));
        widget2->setStyleSheet(QString::fromUtf8(
            "QWidget#widget2 {\n"
            "    border-left: 1px solid lightblue; /* \345\267\246\350\276\271\346\241\206 1px */\n"
            "    border-bottom: 1px solid lightblue; /* \344\270\213\350\276\271\346\241\206 1px "
            "*/\n"
            "    border-top: 2px solid lightblue; /* \344\270\212\350\276\271\346\241\206 2px */\n"
            "    border-right: 2px solid lightblue; /* \345\217\263\350\276\271\346\241\206 2px "
            "*/\n"
            "    border-top-right-radius: 0px;  /* "
            "\345\217\263\344\270\212\350\247\222\344\270\272\346\226\271\350\247\222 */\n"
            "    border-top-left-radius: 0px;   /* "
            "\345\267\246\344\270\212\350\247\222\344\270\272\346\226\271\350\247\222 */\n"
            "    border-bottom-right-radius: 10px; /* "
            "\345\217\263\344\270\213\350\247\222\344\270\272\345\234\206\350\247\222 */\n"
            "    border-bottom-left-radius: 10px;  /* "
            "\345\267\246\344\270\213\350\247\222\344\270\272\345\234\206\350\247\222 */\n"
            "}\n"
            "\n"
            ""));
        rightTabWidget_2 = new QTabWidget(widget2);
        rightTabWidget_2->setObjectName(QString::fromUtf8("rightTabWidget_2"));
        rightTabWidget_2->setGeometry(QRect(1200, 70, 381, 441));
        righttab = new QWidget();
        righttab->setObjectName(QString::fromUtf8("righttab"));
        rightTabWidget_2->addTab(righttab, QString());
        righttab_2 = new QWidget();
        righttab_2->setObjectName(QString::fromUtf8("righttab_2"));
        rightTabWidget_2->addTab(righttab_2, QString());
        righttab_3 = new QWidget();
        righttab_3->setObjectName(QString::fromUtf8("righttab_3"));
        rightTabWidget_2->addTab(righttab_3, QString());

        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        rightTabWidget_2->addTab(tab, QString());
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1260, 0, 81, 41));
        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1340, 0, 81, 41));
        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1420, 0, 81, 41));
        pushButton_4 = new QPushButton(widget2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1500, 0, 81, 41));
        widget_2 = new QWidget(widget2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1160, 10, 20, 581));
        widget_2->setStyleSheet(QString::fromUtf8("border-right: 1px solid lightblue;"));
        widget = new QWidget(widget2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1180, 40, 421, 21));
        widget->setStyleSheet(QString::fromUtf8("border-left: none;\n"
                                                "border-top: 2px solid lightblue;\n"
                                                "border-right: 2px solid lightblue;\n"
                                                "border-bottom: none;"));
        widget_3 = new QWidget(widget2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 70, 1151, 521));
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 251, 41));
        pushButton_5 = new QPushButton(widget2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 20, 80, 20));
        pushButton_6 = new QPushButton(widget2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1040, 20, 80, 20));
        layoutWidget = new QWidget(widget2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 10, 511, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));

        horizontalLayout->addWidget(dateTimeEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_7 = new QPushButton(widget2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1200, 540, 151, 31));

        gridLayout_2->addWidget(centralwidget, 0, 0, 1, 1);

        retranslateUi(maincontrol);

        belowTabWidget->setCurrentIndex(0);
        rightTabWidget_2->setCurrentIndex(0);

        QMetaObject::connectSlotsByName(maincontrol);
    } // setupUi

    void retranslateUi(QWidget *maincontrol)
    {
        maincontrol->setWindowTitle(QApplication::translate("maincontrol", "Form", nullptr));
        belowTabWidget->setTabText(belowTabWidget->indexOf(belowtab),
                                   QApplication::translate("maincontrol", "Tab 1", nullptr));
        belowTabWidget->setTabText(belowTabWidget->indexOf(belowtab_2),
                                   QApplication::translate("maincontrol", "Tab 2", nullptr));
        rightTabWidget_2->setTabText(rightTabWidget_2->indexOf(righttab),
                                     QApplication::translate("maincontrol", "Tab 1", nullptr));
        rightTabWidget_2->setTabText(rightTabWidget_2->indexOf(righttab_2),
                                     QApplication::translate("maincontrol", "Tab 2", nullptr));
        rightTabWidget_2->setTabText(rightTabWidget_2->indexOf(righttab_3),
                                     QApplication::translate("maincontrol",
                                                             "\351\241\265",
                                                             nullptr));
        rightTabWidget_2->setTabText(rightTabWidget_2->indexOf(tab),
                                     QApplication::translate("maincontrol",
                                                             "\351\241\265",
                                                             nullptr));
        pushButton->setText(
            QApplication::translate("maincontrol", "\350\207\252\346\243\200", nullptr));
        pushButton_2->setText(
            QApplication::translate("maincontrol", "\346\240\241\346\227\266", nullptr));
        pushButton_3->setText(
            QApplication::translate("maincontrol", "\350\257\246\346\203\205", nullptr));
        pushButton_4->setText(
            QApplication::translate("maincontrol", "\344\277\256\346\224\271", nullptr));
        label->setText(QString());
        pushButton_5->setText(
            QApplication::translate("maincontrol", "\350\277\236\346\216\245", nullptr));
        pushButton_6->setText(
            QApplication::translate("maincontrol", "\344\277\235\345\255\230", nullptr));
        label_2->setText(QApplication::translate(
            "maincontrol",
            "<html><head/><body><p>\350\277\220\350\241\214\346\227\266\351\227\264:</p></body></"
            "html>",
            nullptr));
        dateTimeEdit->setDisplayFormat(
            QApplication::translate("maincontrol", "yyyy-MM-dd hh:mm:ss", nullptr));
        label_3->setText(QApplication::translate(
            "maincontrol",
            "<html><head/><body><p>\350\277\220\350\241\214\346\227\266\351\225\277(\347\247\222)</"
            "p></body></html>",
            nullptr));
        pushButton_7->setText(
            QApplication::translate("maincontrol",
                                    "\346\270\205\351\231\244\346\225\260\346\215\256",
                                    nullptr));
    } // retranslateUi
};

namespace Ui {
class maincontrol : public Ui_maincontrol
{};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONTROL_H
