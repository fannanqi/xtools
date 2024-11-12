/********************************************************************************
** Form generated from reading UI file 'xToolsFileMergeAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSFILEMERGEASSISTANT_H
#define UI_XTOOLSFILEMERGEASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsFileMergeAssistant
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButtonImport;
    QFrame *line;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonDown;
    QPushButton *pushButtonRemove;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonMerge;

    void setupUi(QWidget *xToolsFileMergeAssistant)
    {
        if (xToolsFileMergeAssistant->objectName().isEmpty())
            xToolsFileMergeAssistant->setObjectName(QString::fromUtf8("xToolsFileMergeAssistant"));
        xToolsFileMergeAssistant->resize(735, 320);
        gridLayout = new QGridLayout(xToolsFileMergeAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(xToolsFileMergeAssistant);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        progressBar = new QProgressBar(xToolsFileMergeAssistant);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(xToolsFileMergeAssistant);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setText(QString::fromUtf8(""));

        horizontalLayout->addWidget(label_2);

        pushButtonImport = new QPushButton(xToolsFileMergeAssistant);
        pushButtonImport->setObjectName(QString::fromUtf8("pushButtonImport"));

        horizontalLayout->addWidget(pushButtonImport);

        line = new QFrame(xToolsFileMergeAssistant);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        pushButtonUp = new QPushButton(xToolsFileMergeAssistant);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));

        horizontalLayout->addWidget(pushButtonUp);

        pushButtonDown = new QPushButton(xToolsFileMergeAssistant);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));

        horizontalLayout->addWidget(pushButtonDown);

        pushButtonRemove = new QPushButton(xToolsFileMergeAssistant);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));

        horizontalLayout->addWidget(pushButtonRemove);

        pushButtonClear = new QPushButton(xToolsFileMergeAssistant);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout->addWidget(pushButtonClear);

        pushButtonMerge = new QPushButton(xToolsFileMergeAssistant);
        pushButtonMerge->setObjectName(QString::fromUtf8("pushButtonMerge"));

        horizontalLayout->addWidget(pushButtonMerge);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(xToolsFileMergeAssistant);

        QMetaObject::connectSlotsByName(xToolsFileMergeAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsFileMergeAssistant)
    {
        xToolsFileMergeAssistant->setWindowTitle(QApplication::translate("xToolsFileMergeAssistant", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("xToolsFileMergeAssistant", "File list", nullptr));
        pushButtonImport->setText(QApplication::translate("xToolsFileMergeAssistant", "Import", nullptr));
        pushButtonUp->setText(QApplication::translate("xToolsFileMergeAssistant", "Up", nullptr));
        pushButtonDown->setText(QApplication::translate("xToolsFileMergeAssistant", "Down", nullptr));
        pushButtonRemove->setText(QApplication::translate("xToolsFileMergeAssistant", "Remove", nullptr));
        pushButtonClear->setText(QApplication::translate("xToolsFileMergeAssistant", "Clear", nullptr));
        pushButtonMerge->setText(QApplication::translate("xToolsFileMergeAssistant", "Merge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsFileMergeAssistant: public Ui_xToolsFileMergeAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSFILEMERGEASSISTANT_H
