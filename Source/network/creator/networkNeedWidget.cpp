#include "networkNeedWidget.h"
#include "login.h"
#include "choose1.h"
#include "widget.h"
#include "selectparameters.h"
#include "maincontrol.h"
#include <QDebug>
#include <QComboBox>

networkNeedWidget::networkNeedWidget(QWidget *parent) : QWidget(parent)
{

}

QStackedWidget* networkNeedWidget::networkNeedWidget::initNetworkWidget()
{
    QStackedWidget *stackedWidget = new QStackedWidget();
    // Create page instances using smart pointers
    login* loginWidget = new login();
    choose1* choose1Widget = new choose1();
    SelectParameters* selectparametersWidget = new SelectParameters();
    // Add widgets to QStackedWidget
    stackedWidget->addWidget(loginWidget);
    stackedWidget->addWidget(choose1Widget);
    stackedWidget->addWidget(selectparametersWidget);
    // 连接登录界面的信号到选择界面的槽
    QObject::connect(loginWidget, &login::sendData, [choose1Widget, stackedWidget](const QString &inputData, int networkCount) {
        choose1Widget->createWidgets(inputData, networkCount);
        stackedWidget->setCurrentWidget(choose1Widget);
        qDebug() << "Switched to choose1 widget with Name:" << inputData << "and Network Count:" << networkCount;
    });
    // Setup choose1Widget jump signal to selectparametersWidget
    QObject::connect(choose1Widget, &choose1::jumpToSelector, [selectparametersWidget, stackedWidget]() {
        stackedWidget->setCurrentWidget(selectparametersWidget);
        qDebug() << "Switched to selectparameters widget";
    });
    QMetaObject::Connection connection = QObject::connect(
        choose1Widget, &choose1::comboBoxValueChanged,
        selectparametersWidget, &SelectParameters::updateLabelForNetwork
    );
    // 检查连接是否成功
    if (connection) {
        qDebug() << "Successfully connected comboBoxValueChanged to updateLabelForNetwork.";
    } else {
        qDebug() << "Failed to connect comboBoxValueChanged to updateLabelForNetwork.";
    }

    // 连接选择界面的信号到参数选择界面的槽
    QObject::connect(choose1Widget, &choose1::sendInputDataAndTabValues,
                     [selectparametersWidget, choose1Widget](const QString &inputData, int networkCount) {
        qDebug() << "stacked Received inputData:" << inputData << "networkCount:" << networkCount;

        QMap<QString, QStringList> checkedItemsMap = choose1Widget->getCheckedItemsMap();
        qDebug() << "stacked Checked Items Map:" << checkedItemsMap;

        selectparametersWidget->receiveInputDataAndCheckedItems(inputData, networkCount, checkedItemsMap);
    });

    stackedWidget->setCurrentWidget(loginWidget);
    return stackedWidget;
}

void networkNeedWidget::clearNetworkWidget(QStackedWidget* stackedWidget)
{
    // 删除所有页面
    while (stackedWidget->count() > 0)
    {
        QWidget* page = stackedWidget->widget(0); // 获取第一个页面
        stackedWidget->removeWidget(page);        // 从 QStackedWidget 中移除
        page->deleteLater();                              // 删除页面对象
    }
    login* loginWidget = new login();
    choose1* choose1Widget = new choose1();
    SelectParameters* selectparametersWidget = new SelectParameters();
    stackedWidget->addWidget(loginWidget);
    stackedWidget->addWidget(choose1Widget);
    stackedWidget->addWidget(selectparametersWidget);
    // 连接登录界面的信号到选择界面的槽
    QObject::connect(loginWidget, &login::sendData, [choose1Widget, stackedWidget](const QString &inputData, int networkCount) {
        choose1Widget->createWidgets(inputData, networkCount);
        stackedWidget->setCurrentWidget(choose1Widget);
        qDebug() << "Switched to choose1 widget with Name:" << inputData << "and Network Count:" << networkCount;
    });
    // Setup choose1Widget jump signal to selectparametersWidget
    QObject::connect(choose1Widget, &choose1::jumpToSelector, [selectparametersWidget, stackedWidget]() {
        stackedWidget->setCurrentWidget(selectparametersWidget);
        qDebug() << "Switched to selectparameters widget";
    });
    QMetaObject::Connection connection = QObject::connect(
        choose1Widget, &choose1::comboBoxValueChanged,
        selectparametersWidget, &SelectParameters::updateLabelForNetwork
    );
    // 检查连接是否成功
    if (connection) {
        qDebug() << "Successfully connected comboBoxValueChanged to updateLabelForNetwork.";
    } else {
        qDebug() << "Failed to connect comboBoxValueChanged to updateLabelForNetwork.";
    }

    // 连接选择界面的信号到参数选择界面的槽
    QObject::connect(choose1Widget, &choose1::sendInputDataAndTabValues,
                     [selectparametersWidget, choose1Widget](const QString &inputData, int networkCount) {
        qDebug() << "stacked Received inputData:" << inputData << "networkCount:" << networkCount;
        QMap<QString, QStringList> checkedItemsMap = choose1Widget->getCheckedItemsMap();
        qDebug() << "stacked Checked Items Map:" << checkedItemsMap;
        selectparametersWidget->receiveInputDataAndCheckedItems(inputData, networkCount, checkedItemsMap);
    });
}

void networkNeedWidget::resetWidget(QWidget* widget)
{
    QList<QLineEdit*> lineEdits = widget->findChildren<QLineEdit*>();
    foreach (QLineEdit* lineEdit, lineEdits) {
        lineEdit->clear();  // 清空所有文本框
    }
}

