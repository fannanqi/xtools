#ifndef LINK11PARTS_H
#define LINK11PARTS_H

#include <QWidget>
#include <QSettings>
#include <QMessageBox>
#include <QTimer>
#include <QRandomGenerator>
#include <QRadioButton>
#include "udpcliet.h"
#include "JmessageStruct.h"

namespace Ui {
class Link11parts;
}

class Link11parts : public QWidget
{
    Q_OBJECT

public:
    explicit Link11parts(QWidget *parent = nullptr);
    ~Link11parts();
    void initTabData(QJsonObject paramObj, QString waveform, udpcliet *udpClietNow);
    void initNewTab(QString waveform);
    QJsonArray saveChangeData(QJsonArray paramArray, QString dateTimeEdit,
                              QString lineEdit, QString waveform);
    QJsonObject getProParamJson(QString waveform, QJsonObject paramObject);
    int getNowSimID();
    void hideOrShowControl(bool isConnect);

private slots:
    //link4A
    //模式设置
    void on_btn_Link4ASetMode_2_clicked();
    void on_btn_4A_BD_Save_2_clicked();
    void on_btn_4AParaLoad_2_clicked();
    //参数设置
    void on_btn_Link4ASendPara_2_clicked();
    void on_btn_Link4ASendFrequency_2_clicked();
    void on_btn_Link4ASendFrequency1_2_clicked();
    void on_btn_Link4ASendFrequency2_2_clicked();
    //战术数据
    void on_comboBox_34_currentIndexChanged(int index);
    void on_comboBox_2_activated(int index);
    void on_pushButton_13_clicked();
    void on_pushButton_15_clicked();
    void on_checkBox_2_toggled(bool checked);
    //测试模式
    void on_groupBox_7_clicked(bool checked);
    //link11
    //模式设置
    void on_pushButton_29_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_30_clicked();
    //参数设置
    void on_btn_link11_sendFrequence_clicked();
    void on_btn_Link11_sendParas_clicked();
    //测试功能
    void on_spinBox_162_valueChanged(int arg1);
    void on_spinBox_161_valueChanged(int arg1);
    void on_pushButton_joinNET_clicked();
    void on_btn_cleanNetwork_clicked();
    void on_btn_startLoop_clicked();
    //战术数据
    void on_comboBox_37_currentIndexChanged(int index);
    void on_comboBox_3_activated(int index);
    void on_pushButton_17_clicked();
    void on_pushButton_9_clicked();
    void on_checkBox_3_toggled(bool checked);
    void on_pushButton_10_clicked();
    //测试模式
    void on_groupBox_35_clicked();
    //Link16
    //模式设置
    void on_pushButton_33_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_34_clicked();
    //通信模式
    void on_l16Model_activated(int index);
    void on_pushButton_65_clicked();
    //通信模式2
    void on_l16NetStruct_activated(int index);
    void on_btn_l16_Netcontrol_clicked();
    void on_pushButton_67_clicked();
    //脉冲格式
    void on_l16shake_activated(int index);
    void on_pushButton_68_clicked();
    //加密参数
    void on_pushButton_69_clicked();
    //跳频图案编辑
    void on_comboBox_222_activated(int index);
    void on_comboBox_223_activated(int index);
    void on_comboBox_226_activated(int index);
    void on_pushButton_148_clicked();
    void on_pushButton_149_clicked();
    void on_pushButton_151_clicked();
    void on_pushButton_66_clicked();
    void on_pushButton_97_clicked();
    void on_pushButton_98_clicked();
    //时隙分配
    void on_l16slotTypestart_currentIndexChanged(int index);
    void on_pushButton_146_clicked();
    void on_pushButton_150_clicked();
    void on_pushButton_147_clicked();
    //消息格式
    void on_pushButton_35_clicked();
    void on_pushButton_36_clicked();
    //设置数据
    void on_l16MessageType_currentIndexChanged(int index);
    void on_pushButton_70_clicked();
    void on_pushButton_71_clicked();
    void on_pushButton_72_clicked();
    //测试模式
    void on_checkBox_61_clicked(bool checked);
    //TTNT
    //模式设置
    void on_pushButton_48_clicked();
    void on_pushButton_32_clicked();
    void on_pushButton_50_clicked();
    //工作参数
    void on_pushButton_6_clicked();
    void on_pushButton_108_clicked();
    //网络设置
    void on_pushButton_7_clicked();
    void on_pushButton_101_clicked();
    //初始化参数
    void on_pushButton_81_clicked();
    void on_pushButton_92_clicked();
    void on_pushButton_99_clicked();
    void on_pushButton_100_clicked();
    //战术数据
    void on_pushButton_59_clicked();
    void on_pushButton_93_clicked();
    void on_pushButton_95_clicked();
    //测试模式
    void on_checkBox_60_clicked(bool checked);
private:
    Ui::Link11parts *ui;
    udpcliet *udpCliet;
    int parID;
    int simNowID;
    QMap<int,QTimer*> timeSendCycleMap;
    QMap<int,int> send11PkgNumMap;
    QMap<int,udpcliet*> timeUdpMap;
    QByteArray l16_slow_fre;
    QByteArray l16_const_fre;
    QByteArray l16_precise_fre;
    QMap<int,int> send16PkgNumMap;
    QByteArray TTNTWorkfre;
    QByteArray TTNT_hand_route;
    QMap<int,int> sendttntPkgNumMap;
    int testTTNTMessLen =0;
    char* testTTNTArray = new char[1024];
    void setCommonModel(uchar waveType, int confType, int waveNo);
    void setLink4ASendFrequency(uchar msgType, uint value);
    int hexstringtochar(QString sstr,char *aadr);
    void setMessageBox(bool isResult,QString str1,QString str2);
};

#endif // LINK11PARTS_H
