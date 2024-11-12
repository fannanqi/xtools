#ifndef CHOOSE1_H
#define CHOOSE1_H

#include "simulator.h"
#include <QSignalMapper>
#include <QWidget>
#include <QCheckBox>
#include <QString>
#include <QMap>
#include <QTabWidget>
#include <QComboBox>

namespace Ui {
class choose1;
}

class choose1 : public QWidget {
    Q_OBJECT

public:
    explicit choose1(QWidget *parent = nullptr);
    void showChoose1();
    ~choose1();
    QMap<QString, QStringList> getCheckedItemsMap(); // 获取选中的项目映射
    QString findMinSubItem(); // 查找最小三级目录项
    void updateComboBoxValues();

signals:
    void jumpToSelector(); // 跳转信号
    void comboBoxValueChanged(const QString &networkName, const QString &comboBoxValue); // 声明为信号
    void sendInputDataAndTabValues(const QString &inputData, int networkCount, const QMap<QString, QStringList> &checkedItemsMap, const QMap<QString, QString> &comboBoxValues);
    void sendCheckedItemsMap(const QMap<QString, QStringList> &checkedItemsMap); // 发送选中的项目映射

public slots:
    void createWidgets(const QString &inputData, int networkCount); // 创建小部件


private slots:
    void on_pushButton4_clicked(); // 按钮点击槽
    void updateCheckBoxState(); // 更新复选框状态
    void onTabChanged(int index); // 标签页改变槽

private:
    Ui::choose1 *ui; // UI指针
    QComboBox *comboBox;
    QTabWidget *tabWidget;
    QMap<QString, QStringList> checkedItemsMap; // 存储选中的项目映射
    QMap<QString, QString> comboBoxValues;
    void emitComboBoxValue(const QString &networkName, const QString &comboBoxValue);
    Simulator *simulator; // 模拟器指针
    QRect frameGeometry; // 窗体几何形状
    QString inputData; // 输入数据
    int networkCount; // 网络计数
    bool widgetsCreated; // 防止多次创建小部件
    QSignalMapper *signalMapper; // 信号映射器
};

#endif // CHOOSE1_H
