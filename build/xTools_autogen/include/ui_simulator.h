/********************************************************************************
** Form generated from reading UI file 'simulator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATOR_H
#define UI_SIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulator
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox2;
    QSpacerItem *horizontalSpacer_18;
    QCheckBox *checkBox8;
    QCheckBox *checkBox4;
    QCheckBox *checkBox3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_26;
    QCheckBox *checkBox10;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *checkBox12;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_27;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *checkBox11;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *checkBox9;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_24;
    QCheckBox *checkBox5;
    QCheckBox *checkBox6;
    QSpacerItem *horizontalSpacer_28;
    QCheckBox *checkBox7;
    QWidget *widget;
    QCheckBox *checkBox1;

    void setupUi(QWidget *Simulator)
    {
        if (Simulator->objectName().isEmpty())
            Simulator->setObjectName(QString::fromUtf8("Simulator"));
        Simulator->resize(1905, 874);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Simulator->sizePolicy().hasHeightForWidth());
        Simulator->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(Simulator);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1831, 711));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox2 = new QCheckBox(layoutWidget);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
        checkBox2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox2->sizePolicy().hasHeightForWidth());
        checkBox2->setSizePolicy(sizePolicy1);
        checkBox2->setMinimumSize(QSize(100, 100));
        checkBox2->setAutoFillBackground(false);
        checkBox2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 0; /* \345\216\273\346\216\211\351\227\264\350\267\235 */\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover; /* \346\210\226\350\200\205\347\224\250 contain\357\274\214\347\241\256\344\277\235\345\233\276\347\211\207\345\241\253\346\273\241 */\n"
"    border: none; /* \345\216\273\346\216\211\350\276\271\346\241\206\357\274\214\351\230\262\346\255\242\345\275\261\345\223\215\347\202\271\345\207\273\345\214\272\345\237\237 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px; /* \351\232\220\350\227\217\351\273\230\350\256\244\346\214\207\347\244\272\345\231\250 */\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
""
                        "    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox2->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox2, 0, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 0, 9, 1, 1);

        checkBox8 = new QCheckBox(layoutWidget);
        checkBox8->setObjectName(QString::fromUtf8("checkBox8"));
        sizePolicy1.setHeightForWidth(checkBox8->sizePolicy().hasHeightForWidth());
        checkBox8->setSizePolicy(sizePolicy1);
        checkBox8->setAutoFillBackground(false);
        checkBox8->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox8->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox8, 2, 2, 1, 1);

        checkBox4 = new QCheckBox(layoutWidget);
        checkBox4->setObjectName(QString::fromUtf8("checkBox4"));
        sizePolicy1.setHeightForWidth(checkBox4->sizePolicy().hasHeightForWidth());
        checkBox4->setSizePolicy(sizePolicy1);
        checkBox4->setAutoFillBackground(false);
        checkBox4->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox4->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox4, 0, 6, 1, 1);

        checkBox3 = new QCheckBox(layoutWidget);
        checkBox3->setObjectName(QString::fromUtf8("checkBox3"));
        sizePolicy1.setHeightForWidth(checkBox3->sizePolicy().hasHeightForWidth());
        checkBox3->setSizePolicy(sizePolicy1);
        checkBox3->setBaseSize(QSize(50, 50));
        checkBox3->setAutoFillBackground(false);
        checkBox3->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox3->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox3, 0, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 1, 6, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 1, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_26, 2, 5, 1, 1);

        checkBox10 = new QCheckBox(layoutWidget);
        checkBox10->setObjectName(QString::fromUtf8("checkBox10"));
        sizePolicy1.setHeightForWidth(checkBox10->sizePolicy().hasHeightForWidth());
        checkBox10->setSizePolicy(sizePolicy1);
        checkBox10->setAutoFillBackground(false);
        checkBox10->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox10->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox10, 2, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 1, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 0, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 1, 10, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 0, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 1, 4, 1, 1);

        checkBox12 = new QCheckBox(layoutWidget);
        checkBox12->setObjectName(QString::fromUtf8("checkBox12"));
        sizePolicy1.setHeightForWidth(checkBox12->sizePolicy().hasHeightForWidth());
        checkBox12->setSizePolicy(sizePolicy1);
        checkBox12->setAutoFillBackground(false);
        checkBox12->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox12->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox12, 2, 10, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_25, 2, 7, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_27, 2, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 1, 0, 1, 1);

        checkBox11 = new QCheckBox(layoutWidget);
        checkBox11->setObjectName(QString::fromUtf8("checkBox11"));
        sizePolicy1.setHeightForWidth(checkBox11->sizePolicy().hasHeightForWidth());
        checkBox11->setSizePolicy(sizePolicy1);
        checkBox11->setAutoFillBackground(false);
        checkBox11->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain; /* \344\275\277\347\224\250contain\345\261\236\346\200\247\344\275\277\345\233\276\345\203\217\351\200\202\345\272\224\346\214\211\351\222\256 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain; /* \344\275\277\347\224\250contain\345\261\236\346\200\247\344\275\277\345\233\276\345\203\217\351\200\202\345\272\224\346\214\211\351\222\256 */\n"
"}\n"
"/*QCheckBox {\n"
"    ...\n"
"    background-position-x: center;\n"
"    background-position-y: center;\n"
"    background-size-x: 100%;\n"
"    background-size-y: 100%;\n"
"}*/\n"
""
                        "QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox11->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox11, 2, 8, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 1, 8, 1, 1);

        checkBox9 = new QCheckBox(layoutWidget);
        checkBox9->setObjectName(QString::fromUtf8("checkBox9"));
        sizePolicy1.setHeightForWidth(checkBox9->sizePolicy().hasHeightForWidth());
        checkBox9->setSizePolicy(sizePolicy1);
        checkBox9->setAutoFillBackground(false);
        checkBox9->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox9->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox9, 2, 4, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 0, 7, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_24, 2, 9, 1, 1);

        checkBox5 = new QCheckBox(layoutWidget);
        checkBox5->setObjectName(QString::fromUtf8("checkBox5"));
        sizePolicy1.setHeightForWidth(checkBox5->sizePolicy().hasHeightForWidth());
        checkBox5->setSizePolicy(sizePolicy1);
        checkBox5->setAutoFillBackground(false);
        checkBox5->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox5->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox5, 0, 8, 1, 1);

        checkBox6 = new QCheckBox(layoutWidget);
        checkBox6->setObjectName(QString::fromUtf8("checkBox6"));
        sizePolicy1.setHeightForWidth(checkBox6->sizePolicy().hasHeightForWidth());
        checkBox6->setSizePolicy(sizePolicy1);
        checkBox6->setAutoFillBackground(false);
        checkBox6->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox6->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox6, 0, 10, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_28, 2, 1, 1, 1);

        checkBox7 = new QCheckBox(layoutWidget);
        checkBox7->setObjectName(QString::fromUtf8("checkBox7"));
        sizePolicy1.setHeightForWidth(checkBox7->sizePolicy().hasHeightForWidth());
        checkBox7->setSizePolicy(sizePolicy1);
        checkBox7->setAutoFillBackground(false);
        checkBox7->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\351\200\217\346\230\216 */\n"
"}"));
        checkBox7->setIconSize(QSize(40, 40));

        gridLayout->addWidget(checkBox7, 2, 0, 1, 1);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(:/images/check.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\350\246\201\351\200\211\346\213\251 */\n"
"}\n"
""));
        checkBox1 = new QCheckBox(widget);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
        checkBox1->setGeometry(QRect(0, 0, 281, 331));
        checkBox1->setMouseTracking(true);
        checkBox1->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 5px;\n"
"    min-width: 100px;\n"
"    min-height: 100px;\n"
"    background-image: url(:/Resources/Images/uncheck.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover; /* \344\275\277\345\233\276\345\203\217\350\246\206\347\233\226\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    background-image: url(:/Resources/Images/check.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover; /* \344\275\277\345\233\276\345\203\217\350\246\206\347\233\226\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"}\n"
"QCheckBox {\n"
"    text-align: center; /* \347\241\256\344\277\235\346\226\207\346\234\254\345\261\205\344\270\255 */\n"
"    color: transparent; /* \345\260\206\346\226\207\346\234\254\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272"
                        "\351\200\217\346\230\216 */\n"
"}"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Simulator);

        QMetaObject::connectSlotsByName(Simulator);
    } // setupUi

    void retranslateUi(QWidget *Simulator)
    {
        Simulator->setWindowTitle(QApplication::translate("Simulator", "Form", nullptr));
        checkBox2->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2502", nullptr));
        checkBox8->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2508", nullptr));
        checkBox4->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2504", nullptr));
        checkBox3->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2503", nullptr));
        checkBox10->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\25010", nullptr));
        checkBox12->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\25012", nullptr));
        checkBox11->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\25011", nullptr));
        checkBox9->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2509", nullptr));
        checkBox5->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2505", nullptr));
        checkBox6->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2506", nullptr));
        checkBox7->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2507", nullptr));
        checkBox1->setText(QApplication::translate("Simulator", "\346\250\241\346\213\237\345\231\2501", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Simulator: public Ui_Simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
