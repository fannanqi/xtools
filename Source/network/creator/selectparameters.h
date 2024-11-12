#ifndef SELECTPARAMETERS_H
#define SELECTPARAMETERS_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QMap>
#include <QStringList>
#include <QLabel>
#include <QJsonArray>
#include <QFile>

class Widget; // 前向声明
class Link11parts; // 前向声明

namespace Ui {
class SelectParameters;
}

class Widget; // 前向声明

class SelectParameters : public QMainWindow
{
    Q_OBJECT

public:
    explicit SelectParameters(QWidget *parent = nullptr, Widget *widget = nullptr);
    ~SelectParameters();
    //接收choose1页面传递的数据
    void receiveInputDataAndCheckedItems(const QString &inputData, int networkCount, const QMap<QString, QStringList> &checkedItemsMap);
    //根据网络名更新波道类型标签
    void updateLabelForNetwork(const QString &networkName, const QString &comboBoxValue);
    // 获取并更新当前网络的 label3 文本
    void updateLabelForTreeItem(const QString &networkName, const QStringList &selectedValues);
    void refreshLabelForNetwork(const QString &networkName);//更新 label3
    void setCurrentSubItem(const QString &minSubItem);//设置树状图三级目录项
    QStringList getDataForItem(const QString &itemName) const;

signals:
    void requestComboBoxValuesUpdate();//获取新的选项卡对应的 comboBox 值
    void switchToMainWindow();//跳转到首页时发送信号

private slots:
    void onTreeWidgetItemClicked(QTreeWidgetItem *item, int column);//点击树状图目录
    void on_SaveButton_clicked();//点击保存按钮执行

private:
    //填充树状图
    void populateTree(const QString &inputData, int networkCount, const QMap<QString, QStringList> &checkedItemsMap);
    //获取json数据
    QJsonArray getJsonArryByFile(QString filePath);
    //保存json数控
    void outJsonFile(QString filePath, QJsonArray array);
    int getNewId(QJsonArray jsonArray, QString idN);//json文件-获取最新id

private:
    Ui::SelectParameters *ui; // UI对象指针
    Widget *m_widget; // Widget指针
    QString inputData; // 输入数据
    int networkCount; // 网络数量
    QMap<QString, QStringList> checkedItemsMap; // 被选中项目的映射
    QMap<QString, QLabel *> labelMap; // 标签映射
    QMap<QString, QStringList> networkComboBoxValues; // 网络下的ComboBox值
    QList<Link11parts *> link11Parts; // Link11parts列表
    QMap<QString, Link11parts *> link11PartsMap; // Link11parts映射
    QTreeWidget *treeWidget; // 树控件指针
};

#endif // SELECTPARAMETERS_H
