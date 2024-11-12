/********************************************************************************
** Form generated from reading UI file 'enterparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERPARAMETER_H
#define UI_ENTERPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enterparameter
{
public:
    QWidget *widget4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QWidget *widget;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_23;
    QLineEdit *lineEdit1;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox1;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox4;
    QDateTimeEdit *comboBox3;
    QLabel *label_9;
    QWidget *widget2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_11;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *comboBox5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton5;
    QLabel *label_10;
    QLabel *label_14;
    QWidget *widget3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QLabel *label_15;
    QLabel *label_20;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *lineEdit3;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *lineEdit4;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_16;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *lineEdit6;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_21;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_22;
    QLineEdit *lineEdit8;
    QLineEdit *lineEdit5;
    QLineEdit *lineEdit7;
    QLabel *label_18;
    QComboBox *comboBox6;

    void setupUi(QWidget *Enterparameter)
    {
        if (Enterparameter->objectName().isEmpty())
            Enterparameter->setObjectName(QString::fromUtf8("Enterparameter"));
        Enterparameter->resize(1129, 850);
        Enterparameter->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #121636;\n"
"	color: #FFFFFF;   \n"
"}"));
        widget4 = new QWidget(Enterparameter);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(0, 0, 1121, 811));
        layoutWidget = new QWidget(widget4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 1111, 791));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget { border: 1px solid white; }"));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 1091, 61));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"}"));

        gridLayout->addWidget(label_7, 0, 6, 1, 1);

        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"}"));

        gridLayout->addWidget(label_23, 0, 8, 1, 1);

        lineEdit1 = new QLineEdit(layoutWidget1);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout->addWidget(lineEdit1, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        comboBox1 = new QComboBox(layoutWidget1);
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->setObjectName(QString::fromUtf8("comboBox1"));
        comboBox1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBox1, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        comboBox2 = new QComboBox(layoutWidget1);
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));
        comboBox2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBox2, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 7, 1, 1);

        comboBox4 = new QComboBox(layoutWidget1);
        comboBox4->addItem(QString());
        comboBox4->setObjectName(QString::fromUtf8("comboBox4"));
        comboBox4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBox4, 1, 8, 1, 1);

        comboBox3 = new QDateTimeEdit(layoutWidget1);
        comboBox3->setObjectName(QString::fromUtf8("comboBox3"));
        comboBox3->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));

        gridLayout->addWidget(comboBox3, 1, 6, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(4, 1);
        gridLayout->setColumnStretch(6, 1);
        gridLayout->setColumnStretch(8, 1);
        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(2, 1);
        gridLayout->setColumnMinimumWidth(4, 1);
        gridLayout->setColumnMinimumWidth(6, 1);
        gridLayout->setColumnMinimumWidth(8, 1);

        verticalLayout->addWidget(widget);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        widget2 = new QWidget(layoutWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setStyleSheet(QString::fromUtf8("QWidget#widget2 { border: 1px solid white; }"));
        layoutWidget2 = new QWidget(widget2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 11, 971, 71));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 10, 1, 1);

        lineEdit2 = new QLineEdit(layoutWidget2);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        lineEdit2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_2->addWidget(lineEdit2, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 9, 1, 1);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 2, 1, 1);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 0, 7, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 1, 6, 1, 1);

        comboBox5 = new QComboBox(layoutWidget2);
        comboBox5->addItem(QString());
        comboBox5->setObjectName(QString::fromUtf8("comboBox5"));
        comboBox5->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(comboBox5, 1, 2, 1, 1);

        pushButton6 = new QPushButton(layoutWidget2);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        pushButton6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #121636; /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #FFFFFF;            /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #3C65CC; /* \346\265\205\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    padding: 5px 10px;         /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 5px;        /* \345\234\206\350\247\222 */\n"
"    min-width: 80px;           /* \345\242\236\345\212\240\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 20px;          /* \345\242\236\345\212\240\346\234\200\345\260\217\351\253\230\345\272\246 */\n"
"    font-size: 14px;           /* \350\260\203\346\225\264\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1A1E42; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\250\215\345\276\256\344\272\256\344\270\200\344\272\233\347\232\204\350\203\214\346\231\257 */\n"
"}\n"
""
                        "\n"
"    QPushButton:checked {\n"
"        background-color: #3C65CC; /* \351\200\211\344\270\255\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257 */\n"
"    }"));
        pushButton6->setIconSize(QSize(40, 20));
        pushButton6->setAutoDefault(true);

        gridLayout_2->addWidget(pushButton6, 1, 5, 1, 1);

        pushButton7 = new QPushButton(layoutWidget2);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        pushButton7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #121636; /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #FFFFFF;            /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #3C65CC; /* \346\265\205\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    padding: 5px 10px;         /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 5px;        /* \345\234\206\350\247\222 */\n"
"    min-width: 80px;           /* \345\242\236\345\212\240\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 20px;          /* \345\242\236\345\212\240\346\234\200\345\260\217\351\253\230\345\272\246 */\n"
"    font-size: 14px;           /* \350\260\203\346\225\264\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1A1E42; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\250\215\345\276\256\344\272\256\344\270\200\344\272\233\347\232\204\350\203\214\346\231\257 */\n"
"}\n"
""
                        "\n"
"    QPushButton:checked {\n"
"        background-color: #3C65CC; /* \351\200\211\344\270\255\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257 */\n"
"    }"));
        pushButton7->setIconSize(QSize(40, 20));
        pushButton7->setAutoDefault(true);

        gridLayout_2->addWidget(pushButton7, 1, 7, 1, 1);

        pushButton8 = new QPushButton(layoutWidget2);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        pushButton8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #121636; /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #FFFFFF;            /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #3C65CC; /* \346\265\205\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    padding: 5px 10px;         /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 5px;        /* \345\234\206\350\247\222 */\n"
"    min-width: 80px;           /* \345\242\236\345\212\240\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 20px;          /* \345\242\236\345\212\240\346\234\200\345\260\217\351\253\230\345\272\246 */\n"
"    font-size: 14px;           /* \350\260\203\346\225\264\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1A1E42; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\250\215\345\276\256\344\272\256\344\270\200\344\272\233\347\232\204\350\203\214\346\231\257 */\n"
"}\n"
""
                        "\n"
"    QPushButton:checked {\n"
"        background-color: #3C65CC; /* \351\200\211\344\270\255\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257 */\n"
"    }"));
        pushButton8->setIconSize(QSize(40, 20));
        pushButton8->setAutoDefault(true);

        gridLayout_2->addWidget(pushButton8, 1, 8, 1, 1);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 1, 3, 1, 1);

        pushButton5 = new QPushButton(layoutWidget2);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        pushButton5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #121636; /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #FFFFFF;            /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #3C65CC; /* \346\265\205\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    padding: 5px 10px;         /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 5px;        /* \345\234\206\350\247\222 */\n"
"    min-width: 80px;           /* \345\242\236\345\212\240\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 20px;          /* \345\242\236\345\212\240\346\234\200\345\260\217\351\253\230\345\272\246 */\n"
"    font-size: 14px;           /* \350\260\203\346\225\264\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1A1E42; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\250\215\345\276\256\344\272\256\344\270\200\344\272\233\347\232\204\350\203\214\346\231\257 */\n"
"}\n"
""
                        "\n"
"    QPushButton:checked {\n"
"        background-color: #3C65CC; /* \351\200\211\344\270\255\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257 */\n"
"    }"));
        pushButton5->setIconSize(QSize(40, 20));
        pushButton5->setAutoDefault(true);

        gridLayout_2->addWidget(pushButton5, 1, 4, 1, 1);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(4, 1);
        gridLayout_2->setColumnStretch(6, 1);
        gridLayout_2->setColumnStretch(8, 1);

        verticalLayout->addWidget(widget2);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        widget3 = new QWidget(layoutWidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setStyleSheet(QString::fromUtf8("QWidget#widget3 { border: 1px solid white; }"));
        layoutWidget3 = new QWidget(widget3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 10, 1111, 421));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 0, 0, 1, 1);

        label_20 = new QLabel(layoutWidget3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 0, 2, 1, 1);

        label_19 = new QLabel(layoutWidget3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 0, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 1, 1, 1, 1);

        lineEdit3 = new QLineEdit(layoutWidget3);
        lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
        lineEdit3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_3->addWidget(lineEdit3, 1, 2, 2, 1);

        horizontalSpacer_14 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_14, 1, 3, 2, 1);

        lineEdit4 = new QLineEdit(layoutWidget3);
        lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));
        lineEdit4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_3->addWidget(lineEdit4, 1, 4, 2, 1);

        horizontalSpacer_16 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_16, 1, 5, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_17, 1, 6, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_19, 1, 7, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_18, 1, 8, 1, 1);

        label_16 = new QLabel(layoutWidget3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 3, 0, 2, 1);

        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 3, 4, 2, 1);

        horizontalSpacer_13 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_13, 5, 3, 1, 1);

        lineEdit6 = new QLineEdit(layoutWidget3);
        lineEdit6->setObjectName(QString::fromUtf8("lineEdit6"));
        lineEdit6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_3->addWidget(lineEdit6, 5, 4, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_15, 5, 5, 1, 1);

        label_21 = new QLabel(layoutWidget3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 6, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(layoutWidget3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit { \n"
"    border: 1px solid gray; \n"
"    padding: 5px; \n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}\n"
"QPlainTextEdit::placeholder { \n"
"    color: white; /* \350\256\276\347\275\256\345\215\240\344\275\215\347\254\246\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        gridLayout_3->addWidget(plainTextEdit, 7, 0, 1, 5);

        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 8, 0, 1, 1);

        lineEdit8 = new QLineEdit(layoutWidget3);
        lineEdit8->setObjectName(QString::fromUtf8("lineEdit8"));
        lineEdit8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_3->addWidget(lineEdit8, 9, 0, 1, 1);

        lineEdit5 = new QLineEdit(layoutWidget3);
        lineEdit5->setObjectName(QString::fromUtf8("lineEdit5"));
        lineEdit5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_3->addWidget(lineEdit5, 5, 0, 1, 3);

        lineEdit7 = new QLineEdit(layoutWidget3);
        lineEdit7->setObjectName(QString::fromUtf8("lineEdit7"));
        lineEdit7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"        background-color: #121636; /* Dark background color */\n"
"        color: #FFFFFF;            /* White text color */\n"
"        border: 1px solid #3C65CC; /* Light blue border */\n"
"        padding: 5px;              /* Padding inside the line edit */\n"
"        border-radius: 5px;        /* Rounded corners */\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3C65CC; /* Highlight border when focused */\n"
"    }"));

        gridLayout_3->addWidget(lineEdit7, 5, 6, 1, 1);

        label_18 = new QLabel(layoutWidget3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"}"));

        gridLayout_3->addWidget(label_18, 3, 6, 2, 1);

        comboBox6 = new QComboBox(layoutWidget3);
        comboBox6->addItem(QString());
        comboBox6->setObjectName(QString::fromUtf8("comboBox6"));
        comboBox6->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(comboBox6, 1, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(4, 1);
        gridLayout_3->setColumnStretch(6, 1);
        gridLayout_3->setColumnStretch(8, 1);

        verticalLayout->addWidget(widget3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 10);

        retranslateUi(Enterparameter);

        pushButton6->setDefault(true);
        pushButton7->setDefault(true);
        pushButton8->setDefault(true);
        pushButton5->setDefault(true);


        QMetaObject::connectSlotsByName(Enterparameter);
    } // setupUi

    void retranslateUi(QWidget *Enterparameter)
    {
        Enterparameter->setWindowTitle(QApplication::translate("Enterparameter", "Form", nullptr));
        label_2->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">\347\275\221\347\273\234\345\217\202\346\225\260</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\267\245\344\275\234\351\242\221\347\216\207(KHZ)</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\260\203\345\210\266\346\226\271\345\274\217</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\351\242\221\345\201\217</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\277\220\350\241\214\346\227\266\351\227\264</span></p></body></html>", nullptr));
        label_23->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\277\220\350\241\214\346\227\266\351\225\277</span></p></body></html>", nullptr));
        comboBox1->setItemText(0, QApplication::translate("Enterparameter", "2FSK", nullptr));
        comboBox1->setItemText(1, QApplication::translate("Enterparameter", "2ASK", nullptr));
        comboBox1->setItemText(2, QApplication::translate("Enterparameter", "2PSK", nullptr));
        comboBox1->setItemText(3, QApplication::translate("Enterparameter", "2DPSK", nullptr));
        comboBox1->setItemText(4, QApplication::translate("Enterparameter", "MFSK", nullptr));

        comboBox2->setItemText(0, QApplication::translate("Enterparameter", "01", nullptr));
        comboBox2->setItemText(1, QApplication::translate("Enterparameter", "02", nullptr));
        comboBox2->setItemText(2, QApplication::translate("Enterparameter", "03", nullptr));

        comboBox4->setItemText(0, QApplication::translate("Enterparameter", "\350\276\223\345\205\245", nullptr));

        comboBox3->setDisplayFormat(QApplication::translate("Enterparameter", "yyyy-MM-dd hh:mm:ss", nullptr));
        label_9->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">\347\253\257\346\234\272\345\217\202\346\225\260</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\216\245\346\224\266\346\226\271\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\267\245\344\275\234\346\250\241\345\274\217</span></p></body></html>", nullptr));
        comboBox5->setItemText(0, QApplication::translate("Enterparameter", "\350\276\223\345\205\245", nullptr));

        pushButton6->setText(QApplication::translate("Enterparameter", "\345\217\227\346\216\247\347\253\231", nullptr));
        pushButton7->setText(QApplication::translate("Enterparameter", "\345\215\225\345\220\221", nullptr));
        pushButton8->setText(QApplication::translate("Enterparameter", "\345\217\214\345\220\221", nullptr));
        label_12->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\347\253\257\346\234\272\347\261\273\345\236\213</span></p></body></html>", nullptr));
        pushButton5->setText(QApplication::translate("Enterparameter", "\346\216\247\345\210\266\347\253\231", nullptr));
        label_10->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\347\275\221\347\273\234ID</span></p></body></html>", nullptr));
        label_14->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">\346\266\210\346\201\257\345\217\202\346\225\260</span></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\212\245\346\226\207\347\261\273\345\236\213</span></p></body></html>", nullptr));
        label_20->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\227\266\351\227\264\347\211\207\351\225\277\345\272\246\357\274\210MS)</span></p></body></html>", nullptr));
        label_19->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\344\275\277\347\224\250\346\227\266\351\227\264\347\211\207\346\225\260</span></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\344\273\216\347\253\231\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_17->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\211\271\346\254\241\345\217\267</span></p></body></html>", nullptr));
        label_21->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\217\221\351\200\201\345\206\205\345\256\271</span></p></body></html>", nullptr));
        plainTextEdit->setPlainText(QString());
        label_22->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\344\277\241\346\201\257\345\217\221\351\200\201\346\254\241\346\225\260</span></p></body></html>", nullptr));
        label_18->setText(QApplication::translate("Enterparameter", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\225\260\346\215\256</span></p></body></html>", nullptr));
        comboBox6->setItemText(0, QApplication::translate("Enterparameter", "\350\276\223\345\205\245", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Enterparameter: public Ui_Enterparameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERPARAMETER_H
