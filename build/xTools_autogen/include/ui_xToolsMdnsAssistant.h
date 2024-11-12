/********************************************************************************
** Form generated from reading UI file 'xToolsMdnsAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTOOLSMDNSASSISTANT_H
#define UI_XTOOLSMDNSASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xToolsMdnsAssistant
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButtonStart;
    QTreeWidget *treeWidget;
    QComboBox *comboBox;

    void setupUi(QWidget *xToolsMdnsAssistant)
    {
        if (xToolsMdnsAssistant->objectName().isEmpty())
            xToolsMdnsAssistant->setObjectName(QString::fromUtf8("xToolsMdnsAssistant"));
        xToolsMdnsAssistant->resize(793, 408);
        xToolsMdnsAssistant->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(xToolsMdnsAssistant);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(xToolsMdnsAssistant);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButtonStart = new QPushButton(xToolsMdnsAssistant);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        gridLayout->addWidget(pushButtonStart, 0, 2, 1, 1);

        treeWidget = new QTreeWidget(xToolsMdnsAssistant);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 1, 0, 1, 3);

        comboBox = new QComboBox(xToolsMdnsAssistant);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);


        retranslateUi(xToolsMdnsAssistant);

        QMetaObject::connectSlotsByName(xToolsMdnsAssistant);
    } // setupUi

    void retranslateUi(QWidget *xToolsMdnsAssistant)
    {
        label->setText(QApplication::translate("xToolsMdnsAssistant", "Service type", nullptr));
        pushButtonStart->setText(QApplication::translate("xToolsMdnsAssistant", "Start", nullptr));
        Q_UNUSED(xToolsMdnsAssistant);
    } // retranslateUi

};

namespace Ui {
    class xToolsMdnsAssistant: public Ui_xToolsMdnsAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTOOLSMDNSASSISTANT_H
