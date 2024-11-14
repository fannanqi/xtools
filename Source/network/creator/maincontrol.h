#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include <QWidget>
#include <QTreeWidgetItem>
#include "udpcliet.h"
#include "ncright_table.h"
#include "link11parts.h"
class QVBoxLayout;
class QHBoxLayout;
class QSplitter;
class QGroupBox;
namespace Ui {
class maincontrol;
}

class maincontrol : public QWidget
{
    Q_OBJECT

public:
    explicit maincontrol(QWidget *parent = nullptr);
    ~maincontrol();
    QJsonArray getJsonArryByFile(QString filePath);
    int generateNewNetID();// 生成唯一的网络 ID
    int generateNewSimID();// 生成唯一的模拟器 ID
    bool checkNetNameExists(QTreeWidgetItem* parentItem, const QString& netName);
    bool checkSimNameExists(QTreeWidgetItem* parentItem, const QString& simName);
    void addNetwork(QTreeWidgetItem* parent, const QString& netName, const QString& waveform);// 添加网络
    void addSimulator(QTreeWidgetItem* netItem, const QString& simName, const QString& waveform);// 添加模拟器

public slots:
    void refreshTree();
    void onTreeWidgetItemClicked(QTreeWidgetItem *item);
    void removeNetworkMap(QTreeWidgetItem* item);
    void repeatNetworkMap(int mapID, QString mapName);
    void onRightButtonClicked(QTreeWidgetItem* item);
    void onUdpconectClicked();
    //    void onUdpSendMessageClicked();
    void onClearNcrTable();
    void saveParamData();

private:
    Ui::maincontrol *ui;
    // QHBoxLayout *allLayout;
    QSplitter *splitter;//底部和widget2上下滑动控件
    QGroupBox *groupBox;
    QHBoxLayout *midHLayout;//将右侧的conAndWid3Layout和rtabVLayout组合
    QVBoxLayout *rtabVLayout;//最右侧tabwidget的Layout
    QHBoxLayout *btnHLayout;//右上方btn的layout
    QVBoxLayout *rightLayout;//底部界面和widget2布局
    QHBoxLayout *centLayout;//将treewidget和右边的rightLayout整合一起
    QHBoxLayout *connLayout;//连接界面的布局
    QVBoxLayout *conAndWid3Layout;//连接界面以及widget3界面
    QMap<QString,QJsonObject> simIDMap;
    QMap<QString,QJsonObject> paramMap;
    int sID;
    QMap<QString,udpcliet*> udpClietMap;
    QMap<QString,bool> udpstateMap;
    QMap<QString,QList<QStringList>> recvDatasMap;
    ncright_table *m_ncrt;
    Link11parts *linkparts;
    bool isInitNcrt = false;
    void saveJsonToFile(const QJsonArray &array, const QString &filePath);
    int getNewId(QJsonArray jsonArray, QString idN);
    void recvUDPData(QByteArray sendData, QString simID);
    QString checkInitudp(QString pro, QString value);

    // QWidget interface
protected:


    // QWidget interface
protected:
    virtual void resizeEvent(QResizeEvent *event) override;
};





#endif // MAINCONTROL_H
