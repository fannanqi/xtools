/********************************************************************************
** Form generated from reading UI file 'taskFileMergeAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFILEMERGEASSISTANT_H
#define UI_TASKFILEMERGEASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>
#include <canttchartview.h>

QT_BEGIN_NAMESPACE

class Ui_taskFileMergeAssistant
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *comboBox;
    CanttChartView *graphicsView;
    QProgressBar *progressBar;

    void setupUi(QWidget *taskFileMergeAssistant)
    {
        if (taskFileMergeAssistant->objectName().isEmpty())
            taskFileMergeAssistant->setObjectName(QString::fromUtf8("taskFileMergeAssistant"));
        taskFileMergeAssistant->resize(735, 320);
        gridLayout = new QGridLayout(taskFileMergeAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(taskFileMergeAssistant);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 2, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 4, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 3, 3, 1, 2);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 3, 5, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 3, 6, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 3, 7, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 3, 8, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 3, 9, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 3, 10, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 6, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        graphicsView = new CanttChartView(groupBox);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout_3->addWidget(graphicsView, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        progressBar = new QProgressBar(taskFileMergeAssistant);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);


        retranslateUi(taskFileMergeAssistant);

        QMetaObject::connectSlotsByName(taskFileMergeAssistant);
    } // setupUi

    void retranslateUi(QWidget *taskFileMergeAssistant)
    {
        taskFileMergeAssistant->setWindowTitle(QApplication::translate("taskFileMergeAssistant", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("taskFileMergeAssistant", "File list", nullptr));
        label->setText(QApplication::translate("taskFileMergeAssistant", "<html><head/><body><p>\345\234\272\346\231\257\345\217\202\346\225\260</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("taskFileMergeAssistant", "<html><head/><body><p>\345\234\272\346\231\257\345\220\215\347\247\260</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("taskFileMergeAssistant", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("taskFileMergeAssistant", "<html><head/><body><p>\345\234\272\346\231\257\344\270\255\347\232\204\347\275\221\347\273\234\346\225\260\357\274\232</p></body></html>", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("taskFileMergeAssistant", "\347\275\221\347\273\234\345\217\202\346\225\260", nullptr));
        label_7->setText(QApplication::translate("taskFileMergeAssistant", "\345\267\245\344\275\234\346\225\210\347\216\207\357\274\232", nullptr));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("taskFileMergeAssistant", "\350\260\203\350\257\225\346\226\271\345\274\217\357\274\232", nullptr));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("taskFileMergeAssistant", "\345\201\217\351\242\221\357\274\232", nullptr));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("taskFileMergeAssistant", "\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", nullptr));
        label_14->setText(QString());
        label_15->setText(QApplication::translate("taskFileMergeAssistant", "\350\277\220\350\241\214\346\227\266\351\225\277\357\274\232", nullptr));
        label_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class taskFileMergeAssistant: public Ui_taskFileMergeAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFILEMERGEASSISTANT_H
