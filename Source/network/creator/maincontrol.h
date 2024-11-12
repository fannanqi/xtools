#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include <QWidget>
#include <QTreeWidgetItem>
#include "udpcliet.h"
#include "ncright_table.h"
#include "link11parts.h"

namespace Ui {
class maincontrol;
}

class maincontrol : public QWidget
{
    Q_OBJECT

public:
    explicit maincontrol(QWidget *parent = nullptr);
    ~maincontrol();
    QJsonArray getJsonArryByFile(QString filePath);//获取json文件数据
    bool checkNetNameExists(QTreeWidgetItem* parentItem, const QString& netName);//判断同一场景下网络名称是否重复
    bool checkSimNameExists(QTreeWidgetItem* parentItem, const QString& simName);//判断同一网络下模拟器是否重复
    void addNetwork(QTreeWidgetItem* parent, const QString& netName, const QString& waveform);// 添加网络
    void addSimulator(QTreeWidgetItem* netItem, const QString& simName, const QString& waveform);// 添加模拟器

public slots:
    void refreshTree();//刷新左侧树状图数据
    void onTreeWidgetItemClicked(QTreeWidgetItem *item);//点击左侧树状图目录
    void removeNetworkMap(QTreeWidgetItem* item);//删除左侧树状图目录
    void repeatNetworkMap(int mapID, QString mapName);//复制场景，数据保存到json文件
    void onRightButtonClicked(QTreeWidgetItem* item);//左侧树状图-右键操作
    void onUdpconectClicked();//udp-连接
//    void onUdpSendMessageClicked();
    void onClearNcrTable();//清理右侧表格数据
    void saveParamData();//点击“保存”按钮，保存当前模拟器数据

private:
    Ui::maincontrol *ui;
    QMap<QString,QJsonObject> simIDMap;//模拟器ID-json数据对应
    QMap<QString,QJsonObject> paramMap;//模拟器参数ID-json数据对应
    int sID;//当前所在树状图目录
    QMap<QString,udpcliet*> udpClietMap;//模拟器ID-udp客户端
    QMap<QString,bool> udpstateMap;//模拟器对应的udp是否连接
    QMap<QString,QList<QStringList>> recvDatasMap;//模拟器ID-udp接收数据
    ncright_table *m_ncrt;//右侧表格
    Link11parts *linkparts;//模拟器参数页面
    bool isInitNcrt = false;//右侧表格是否创建
    void saveJsonToFile(const QJsonArray &array, const QString &filePath);//保存json数据到本地
    int getNewId(QJsonArray jsonArray, QString idN);//json文件-获取最新id
    void recvUDPData(QByteArray sendData, QString simID);//udp接收数据
    QString checkInitudp(QString pro, QString value);//udp参数-设置默认值
};

#endif // MAINCONTROL_H
