/********************************************************************************
** Form generated from reading UI file 'xToolsStatisticianToolUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSSTATISTICIANTOOLUI_H
#define UI_XTOOLSSTATISTICIANTOOLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsStatisticianToolUi
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelFrames;
    QLabel *label_2;
    QLabel *labelBytes;

    void setupUi(QWidget *xToolsStatisticianToolUi)
    {
        if (xToolsStatisticianToolUi->objectName().isEmpty())
            xToolsStatisticianToolUi->setObjectName(QString::fromUtf8("xToolsStatisticianToolUi"));
        xToolsStatisticianToolUi->resize(120, 17);
        xToolsStatisticianToolUi->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(xToolsStatisticianToolUi);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(xToolsStatisticianToolUi);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelFrames = new QLabel(xToolsStatisticianToolUi);
        labelFrames->setObjectName(QString::fromUtf8("labelFrames"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFrames->sizePolicy().hasHeightForWidth());
        labelFrames->setSizePolicy(sizePolicy);
        labelFrames->setText(QString::fromUtf8("0"));

        horizontalLayout->addWidget(labelFrames);

        label_2 = new QLabel(xToolsStatisticianToolUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        labelBytes = new QLabel(xToolsStatisticianToolUi);
        labelBytes->setObjectName(QString::fromUtf8("labelBytes"));
        sizePolicy.setHeightForWidth(labelBytes->sizePolicy().hasHeightForWidth());
        labelBytes->setSizePolicy(sizePolicy);
        labelBytes->setText(QString::fromUtf8("0"));

        horizontalLayout->addWidget(labelBytes);


        retranslateUi(xToolsStatisticianToolUi);

        QMetaObject::connectSlotsByName(xToolsStatisticianToolUi);
    } // setupUi

    void retranslateUi(QWidget *xToolsStatisticianToolUi)
    {
        xToolsStatisticianToolUi->setWindowTitle(QApplication::translate("xToolsStatisticianToolUi", "Form", nullptr));
        label->setText(QApplication::translate("xToolsStatisticianToolUi", "Frames:", nullptr));
        label_2->setText(QApplication::translate("xToolsStatisticianToolUi", "Bytes:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xToolsStatisticianToolUi: public Ui_xToolsStatisticianToolUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSSTATISTICIANTOOLUI_H
