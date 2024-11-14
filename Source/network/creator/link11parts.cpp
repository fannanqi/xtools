#include "link11parts.h"
#include "ui_link11parts.h"
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>
#include "msg.h"

Link11parts::Link11parts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Link11parts)
{
    ui->setupUi(this);
}

Link11parts::~Link11parts()
{
    delete ui;
}
void Link11parts::initNewTab(QString waveform) {
    int tabIndex;
    for (int i = 0; i < ui->tabWidget->count(); ++i) {
        if (ui->tabWidget->tabText(i) == waveform) {
            tabIndex = i;
            ui->tabWidget->setCurrentIndex(tabIndex);
            break;
        }
    }
    ui->tabWidget->tabBar()->hide();
}
void Link11parts::initTabData(QJsonObject paramObj, QString waveform,udpcliet *udpClietNow) {
    int tabIndex;
    for (int i = 0; i < ui->tabWidget->count(); ++i) {
        if (ui->tabWidget->tabText(i) == waveform) {
            tabIndex = i;
            ui->tabWidget->setCurrentIndex(tabIndex);
            break;
        }
    }
    ui->tabWidget->tabBar()->hide();
    udpCliet = udpClietNow;
    parID = paramObj["parID"].toInt();
    simNowID = paramObj["simID"].toInt();
    if(waveform == "Link4A") {
        ui->comboBox_31->setCurrentText(paramObj["comboBox_31"].toString());
        ui->spinBox_28->setValue(paramObj["spinBox_28"].toInt());
        ui->comboBox_49->setCurrentText(paramObj["comboBox_49"].toString());
        ui->comboBox_128->setCurrentText(paramObj["comboBox_128"].toString());
        ui->comboBox_52->setCurrentText(paramObj["comboBox_52"].toString());
        ui->lineEdit_4->setText(paramObj["lineEdit_4"].toString());
        ui->lineEdit_19->setText(paramObj["lineEdit_19"].toString());
        ui->lineEdit_18->setText(paramObj["lineEdit_18"].toString());
        ui->spinBox_9->setValue(paramObj["spinBox_9"].toInt());
        ui->spinBox_21->setValue(paramObj["spinBox_21"].toInt());
        ui->lineEdit_38->setText(paramObj["lineEdit_38"].toString());
        ui->comboBox_34->setCurrentText(paramObj["comboBox_34"].toString());
        ui->comboBox_2->setCurrentText(paramObj["comboBox_2"].toString());
        ui->comboBox_28->setCurrentText(paramObj["comboBox_28"].toString());
        ui->plainTextEdit_8->setPlainText(paramObj["plainTextEdit_8"].toString());
        QVariant checkBox_2Str = paramObj["checkBox_2"].toString();
        ui->checkBox_2->setChecked(checkBox_2Str.toBool());
        ui->spinBox_26->setValue(paramObj["spinBox_26"].toInt());
    } else if (waveform == "Link11") {
        ui->comboBox_33->setCurrentText(paramObj["comboBox_33"].toString());
        ui->spinBox_30->setValue(paramObj["spinBox_30"].toInt());
        ui->spinBox_32->setValue(paramObj["spinBox_32"].toInt());
        ui->comboBox_115->setCurrentText(paramObj["comboBox_115"].toString());
        ui->comboBox_112->setCurrentText(paramObj["comboBox_112"].toString());
        ui->comboBox_117->setCurrentText(paramObj["comboBox_117"].toString());
        ui->spinBox_37->setValue(paramObj["spinBox_37"].toInt());
        ui->spinBox_38->setValue(paramObj["spinBox_38"].toInt());
        ui->comboBox_120->setCurrentText(paramObj["comboBox_120"].toString());
        ui->spinBox_39->setValue(paramObj["spinBox_39"].toInt());
        ui->comboBox_116->setCurrentText(paramObj["comboBox_116"].toString());
        ui->lineEdit_39->setText(paramObj["lineEdit_39"].toString());
        ui->comboBox_114->setCurrentText(paramObj["comboBox_114"].toString());
        ui->comboBox_113->setCurrentText(paramObj["comboBox_113"].toString());
        ui->spinBox_161->setValue(paramObj["spinBox_161"].toInt());
        ui->spinBox_162->setValue(paramObj["spinBox_162"].toInt());
        ui->spinBox_40->setValue(paramObj["spinBox_40"].toInt());
        ui->comboBox_37->setCurrentText(paramObj["comboBox_37"].toString());
        ui->comboBox_3->setCurrentText(paramObj["comboBox_3"].toString());
        ui->comboBox_36->setCurrentText(paramObj["comboBox_36"].toString());
        ui->plainTextEdit_27->setPlainText(paramObj["plainTextEdit_27"].toString());
        ui->spinBox_34->setValue(paramObj["spinBox_34"].toInt());
        QVariant checkBox_3Str = paramObj["checkBox_3"].toString();
        ui->checkBox_3->setChecked(checkBox_3Str.toBool());
        if(send11PkgNumMap.find(simNowID) == send11PkgNumMap.end()) {
            send11PkgNumMap[simNowID] = 0;
        }
        ui->label_62->setText(QString::number(send11PkgNumMap[simNowID]));
    } else if (waveform == "Link16") {
        ui->comboBox_35->setCurrentText(paramObj["comboBox_35"].toString());
        ui->spinBox_49->setValue(paramObj["spinBox_49"].toInt());
        ui->l16Model->setCurrentText(paramObj["l16Model"].toString());
        ui->link16_const_fre->setText(paramObj["link16_const_fre"].toString());
        ui->l16NetNum->setValue(paramObj["l16NetNum"].toInt());
        ui->l16NetStruct->setCurrentText(paramObj["l16NetStruct"].toString());
        ui->l16NtrJu->setCurrentText(paramObj["l16NtrJu"].toString());
        ui->l16Trace->setText(paramObj["l16Trace"].toString());
        ui->l16NetIn->setValue(paramObj["l16NetIn"].toInt());
        ui->l16WorkType->setCurrentText(paramObj["l16WorkType"].toString());
        ui->l16Relay->setCurrentText(paramObj["l16Relay"].toString());
        ui->l16RelayNo->setText(paramObj["l16RelayNo"].toString());
        ui->l16pkgMode->setCurrentText(paramObj["l16pkgMode"].toString());
        ui->l16delay->setValue(paramObj["l16delay"].toInt());
        ui->l16shake->setCurrentText(paramObj["l16shake"].toString());
        ui->l16pulseWidth->setCurrentText(paramObj["l16pulseWidth"].toString());
        ui->l16mainFreDiff->setText(paramObj["l16mainFreDiff"].toString());
        ui->l16pulseInterval->setText(paramObj["l16pulseInterval"].toString());
        ui->l16msgSecretVar->setText(paramObj["l16msgSecretVar"].toString());
        ui->l16tansSecretVar->setText(paramObj["l16tansSecretVar"].toString());
        ui->comboBox_222->setCurrentText(paramObj["comboBox_222"].toString());
        ui->comboBox_223->setCurrentText(paramObj["comboBox_223"].toString());
        ui->comboBox_226->setCurrentText(paramObj["comboBox_226"].toString());
        ui->l16slottype->setCurrentText(paramObj["l16slottype"].toString());
        ui->l16slotTypestart->setCurrentText(paramObj["l16slotTypestart"].toString());
        ui->l16slotStart->setValue(paramObj["l16slotStart"].toInt());
        ui->l16slotTypesend->setCurrentText(paramObj["l16slotTypesend"].toString());
        ui->l16slotEnd->setValue(paramObj["l16slotEnd"].toInt());
        ui->l16timeelement->setValue(paramObj["l16timeelement"].toInt());
        ui->l16timeframe->setValue(paramObj["l16timeframe"].toInt());
        ui->l16slotCircle->setValue(paramObj["l16slotCircle"].toInt());
        ui->l16Jn->setValue(paramObj["l16Jn"].toInt());
        ui->l16Jm->setValue(paramObj["l16Jm"].toInt());
        ui->l16C->setValue(paramObj["l16C"].toInt());
        ui->l16StartWord->setPlainText(paramObj["l16StartWord"].toString());
        ui->l16ContinueWord->setPlainText(paramObj["l16ContinueWord"].toString());
        ui->l16MessageType->setCurrentText(paramObj["l16MessageType"].toString());
        QVariant l16CurrentStr = paramObj["l16Current"].toString();
        ui->l16Current->setChecked(l16CurrentStr.toBool());
        ui->l16CurrentTime->setValue(paramObj["l16CurrentTime"].toInt());
        ui->l16DesNum->setText(paramObj["l16DesNum"].toString());
        ui->l16SenNUm->setValue(paramObj["l16SenNUm"].toInt());
        ui->l16SenPc->setValue(paramObj["l16SenPc"].toInt());
        ui->plainTextEdit_34->setPlainText(paramObj["plainTextEdit_34"].toString());
        ui->l16SendCount->setText(paramObj["l16SendCount"].toString());
        ui->l16SenNUm_2->setValue(paramObj["l16SenNUm_2"].toInt());
        QVariant checkBox_61Str = paramObj["checkBox_61"].toString();
        ui->checkBox_61->setChecked(checkBox_61Str.toBool());
        ui->l16TestMessage->setPlainText(paramObj["l16TestMessage"].toString());
        l16_slow_fre.clear();
        for(int i =0;i<32;i++){
            l16_slow_fre.append((3>>8)&0xff);
            l16_slow_fre.append((3)&0xff);
        }
        l16_const_fre.clear();
        for(int i =0;i<372;i++){
            l16_const_fre.append((3>>8)&0xff);
            l16_const_fre.append((3)&0xff);
        }
        l16_precise_fre.clear();
        for(int i =0;i<8;i++){
            l16_precise_fre.append((3>>8)&0xff);
            l16_precise_fre.append((3)&0xff);
        }
        if(send16PkgNumMap.find(simNowID) == send16PkgNumMap.end()) {
            send16PkgNumMap[simNowID] = 0;
        }
        ui->l16SendCount->setText(QString::number(send16PkgNumMap[simNowID]));
        if((ui->l16Model->currentIndex()==0)&&(ui->comboBox_222->currentIndex()==0))
            ui->pushButton_148->setEnabled(true);
        else
            ui->pushButton_148->setEnabled(false);
        if((ui->l16Model->currentIndex()==0)&&(ui->comboBox_223->currentIndex()==0))
            ui->pushButton_149->setEnabled(true);
        else
            ui->pushButton_149->setEnabled(false);
        if((ui->l16Model->currentIndex()==0)&&(ui->comboBox_226->currentIndex()==0))
            ui->pushButton_151->setEnabled(true);
        else
            ui->pushButton_151->setEnabled(false);
        if(ui->l16Model->currentIndex()==0) {//定频频率能否设置
            ui->link16_const_fre->setEnabled(false);
        } else {
            ui->link16_const_fre->setEnabled(true);
        }
        if(ui->l16Model->currentIndex()==2) {//加密参数能否设置
            ui->groupBox_143->setEnabled(false);
        } else {
            ui->groupBox_143->setEnabled(true);
        }
        if(ui->l16NetStruct->currentIndex()==0) {//通信模式2 网络结构下拉框
            ui->btn_l16_Netcontrol->setEnabled(false);
        } else {
            ui->btn_l16_Netcontrol->setEnabled(true);
        }
        if(ui->l16shake->currentIndex()==4)//脉冲格式 抖动下拉框
            ui->l16pulseInterval->setEnabled(true);
        else
            ui->l16pulseInterval->setEnabled(false);
        ui->l16slotTypesend->setEnabled(false);
    } else if (waveform == "TTNT") {
        ui->comboBox_38->setCurrentText(paramObj["comboBox_38"].toString());
        ui->spinBox_50->setValue(paramObj["spinBox_50"].toInt());
        ui->ttntWorkType->setCurrentText(paramObj["ttntWorkType"].toString());
        ui->ttntSrcAddr->setValue(paramObj["ttntSrcAddr"].toInt());
        ui->ttntDesAddr->setValue(paramObj["ttntDesAddr"].toInt());
        ui->ttntSpeedModel->setCurrentText(paramObj["ttntSpeedModel"].toString());
        ui->ttntNetNum->setCurrentText(paramObj["ttntNetNum"].toString());
        ui->ttntTrace->setText(paramObj["ttntTrace"].toString());
        ui->ttntNetType->setCurrentText(paramObj["ttntNetType"].toString());
        ui->ttntSendCurrent->setValue(paramObj["ttntSendCurrent"].toInt());
        ui->ttntRouteConfig->setCurrentText(paramObj["ttntRouteConfig"].toString());
        ui->ttntStatisCycle->setValue(paramObj["ttntStatisCycle"].toInt());
        ui->ttntParam->setText(paramObj["ttntParam"].toString());
        ui->ttntPnOverBit->setText(paramObj["ttntPnOverBit"].toString());
        ui->ttntSynPn->setCurrentText(paramObj["ttntSynPn"].toString());
        ui->ttntIp->setText(paramObj["ttntIp"].toString());
        ui->ttntScrectSlect->setCurrentText(paramObj["ttntScrectSlect"].toString());
        ui->ttntFreList->setCurrentText(paramObj["ttntFreList"].toString());
        ui->ttntMessageType->setCurrentText(paramObj["ttntMessageType"].toString());
        ui->ttntMessageprisend->setCurrentText(paramObj["ttntMessageprisend"].toString());
        QVariant checkBox_8Str = paramObj["checkBox_8"].toString();
        ui->checkBox_8->setChecked(checkBox_8Str.toBool());
        ui->ttntSendTime->setValue(paramObj["ttntIp"].toInt());
        ui->ttntSendNum->setValue(paramObj["ttntSendNum"].toInt());
        ui->ttntSendPc->setValue(paramObj["ttntSendPc"].toInt());
        ui->plainTextEdit_35->setPlainText(paramObj["plainTextEdit_35"].toString());
        ui->TtntSenNUm->setValue(paramObj["TtntSenNUm"].toInt());
        ui->ttntTestMessage->setPlainText(paramObj["ttntTestMessage"].toString());
        if(sendttntPkgNumMap.find(simNowID) == sendttntPkgNumMap.end()) {
            sendttntPkgNumMap[simNowID] = 0;
        }
        ui->lineEdit_41->setText(QString::number(sendttntPkgNumMap[simNowID]));
    }
}
QJsonArray Link11parts::saveChangeData(QJsonArray paramArray, QString dateTimeEdit,
                                       QString lineEdit, QString waveform) {
    for (int i = 0; i < paramArray.size(); ++i)
    {
        QJsonObject paramObject = paramArray[i].toObject();
        int paramID = paramObject["parID"].toInt();
        if(paramID == parID) {
            paramObject["dateTimeEdit"] = dateTimeEdit;
            paramObject["lineEdit"] = lineEdit;
            paramObject = getProParamJson(waveform, paramObject);
            paramArray[i] = paramObject;
            break;
        }
    }
    return paramArray;
}
QJsonObject Link11parts::getProParamJson(QString waveform, QJsonObject paramObject) {
    //    QJsonObject paramObject;
    if(waveform == "Link4A") {
        //        paramObject["checkBox_2"] = "false";
        bool checkBox2 = ui->checkBox_2->isChecked();
        if(checkBox2) {
            paramObject["checkBox_2"] = "true";
        } else {
            paramObject["checkBox_2"] = "false";
        }
        paramObject["comboBox_128"] = ui->comboBox_128->currentText();
        paramObject["comboBox_2"] = ui->comboBox_2->currentText();
        paramObject["comboBox_28"] = ui->comboBox_28->currentText();
        paramObject["comboBox_31"] = ui->comboBox_31->currentText();
        paramObject["comboBox_34"] = ui->comboBox_34->currentText();
        paramObject["comboBox_49"] = ui->comboBox_49->currentText();
        paramObject["comboBox_52"] = ui->comboBox_52->currentText();
        paramObject["lineEdit_18"] = ui->lineEdit_18->text();
        paramObject["lineEdit_19"] = ui->lineEdit_19->text();
        paramObject["lineEdit_38"] = ui->lineEdit_38->text();
        paramObject["lineEdit_4"] = ui->lineEdit_4->text();
        paramObject["plainTextEdit_8"] = ui->plainTextEdit_8->toPlainText();
        paramObject["spinBox_21"] = ui->spinBox_21->value();
        paramObject["spinBox_26"] = ui->spinBox_26->value();
        paramObject["spinBox_28"] = ui->spinBox_28->value();
        paramObject["spinBox_9"] = ui->spinBox_9->value();
    } else if(waveform == "Link11") {
        paramObject["comboBox_33"] = ui->comboBox_33->currentText();
        paramObject["spinBox_30"] = ui->spinBox_30->value();
        paramObject["spinBox_32"] = ui->spinBox_32->value();
        paramObject["comboBox_115"] = ui->comboBox_115->currentText();
        paramObject["comboBox_112"] = ui->comboBox_112->currentText();
        paramObject["comboBox_117"] = ui->comboBox_117->currentText();
        paramObject["spinBox_37"] = ui->spinBox_37->value();
        paramObject["spinBox_38"] = ui->spinBox_38->value();
        paramObject["comboBox_120"] = ui->comboBox_120->currentText();
        paramObject["spinBox_39"] = ui->spinBox_39->value();
        paramObject["comboBox_116"] = ui->comboBox_116->currentText();
        paramObject["lineEdit_39"] = ui->lineEdit_39->text();
        paramObject["comboBox_114"] = ui->comboBox_114->currentText();
        paramObject["comboBox_113"] = ui->comboBox_113->currentText();
        paramObject["spinBox_161"] = ui->spinBox_161->value();
        paramObject["spinBox_162"] = ui->spinBox_162->value();
        paramObject["spinBox_40"] = ui->spinBox_40->value();
        paramObject["comboBox_37"] = ui->comboBox_37->currentText();
        paramObject["comboBox_3"] = ui->comboBox_3->currentText();
        paramObject["comboBox_36"] = ui->comboBox_36->currentText();
        paramObject["plainTextEdit_27"] = ui->plainTextEdit_27->toPlainText();
        paramObject["spinBox_34"] = ui->spinBox_34->value();
        //        paramObject["checkBox_3"] = "false";
        bool checkBox3 = ui->checkBox_3->isChecked();
        if(checkBox3) {
            paramObject["checkBox_3"] = "true";
        } else {
            paramObject["checkBox_3"] = "false";
        }
    } else if(waveform == "Link16") {
        paramObject["comboBox_35"] = ui->comboBox_35->currentText();
        paramObject["spinBox_49"] = ui->spinBox_49->value();
        paramObject["l16Model"] = ui->l16Model->currentText();
        paramObject["link16_const_fre"] = ui->link16_const_fre->text();
        paramObject["l16NetNum"] = ui->l16NetNum->value();
        paramObject["l16NetStruct"] = ui->l16NetStruct->currentText();
        paramObject["l16NtrJu"] = ui->l16NtrJu->currentText();
        paramObject["l16Trace"] = ui->l16Trace->text();
        paramObject["l16NetIn"] = ui->l16NetIn->value();
        paramObject["l16WorkType"] = ui->l16WorkType->currentText();
        paramObject["l16Relay"] = ui->l16Relay->currentText();
        paramObject["l16RelayNo"] = ui->l16RelayNo->text();
        paramObject["l16pkgMode"] = ui->l16pkgMode->currentText();
        paramObject["l16delay"] = ui->l16delay->value();
        paramObject["l16shake"] = ui->l16shake->currentText();
        paramObject["l16pulseWidth"] = ui->l16pulseWidth->currentText();
        paramObject["l16mainFreDiff"] = ui->l16mainFreDiff->text();
        paramObject["l16pulseInterval"] = ui->l16pulseInterval->text();
        paramObject["l16msgSecretVar"] = ui->l16msgSecretVar->text();
        paramObject["l16tansSecretVar"] = ui->l16tansSecretVar->text();
        paramObject["comboBox_222"] = ui->comboBox_222->currentText();
        paramObject["comboBox_223"] = ui->comboBox_223->currentText();
        paramObject["comboBox_226"] = ui->comboBox_226->currentText();
        paramObject["l16slottype"] = ui->l16slottype->currentText();
        paramObject["l16slotTypestart"] = ui->l16slotTypestart->currentText();
        paramObject["l16slotStart"] = ui->l16slotStart->value();
        paramObject["l16slotTypesend"] = ui->l16slotTypesend->currentText();
        paramObject["l16slotEnd"] = ui->l16slotEnd->value();
        paramObject["l16timeelement"] = ui->l16timeelement->value();
        paramObject["l16timeframe"] = ui->l16timeframe->value();
        paramObject["l16slotCircle"] = ui->l16slotCircle->value();
        paramObject["l16Jn"] = ui->l16Jn->value();
        paramObject["l16Jm"] = ui->l16Jm->value();
        paramObject["l16C"] = ui->l16C->value();
        paramObject["l16StartWord"] = ui->l16StartWord->toPlainText();
        paramObject["l16ContinueWord"] = ui->l16ContinueWord->toPlainText();
        paramObject["l16MessageType"] = ui->l16MessageType->currentText();
        //        paramObject["l16Current"] = "false";
        bool l16Current = ui->l16Current->isChecked();
        if(l16Current) {
            paramObject["l16Current"] = "true";
        } else {
            paramObject["l16Current"] = "false";
        }
        paramObject["l16CurrentTime"] = ui->l16CurrentTime->value();
        paramObject["l16DesNum"] = ui->l16DesNum->text();
        paramObject["l16SenNUm"] = ui->l16SenNUm->value();
        paramObject["l16SenPc"] = ui->l16SenPc->value();
        paramObject["plainTextEdit_34"] = ui->plainTextEdit_34->toPlainText();
        paramObject["l16SendCount"] = ui->l16SendCount->text();
        paramObject["l16SenNUm_2"] = ui->l16SenNUm_2->value();
        //        paramObject["checkBox_61"] = "false";
        bool checkBox_61 = ui->checkBox_61->isChecked();
        if(checkBox_61) {
            paramObject["checkBox_61"] = "true";
        } else {
            paramObject["checkBox_61"] = "false";
        }
        paramObject["l16TestMessage"] = ui->l16TestMessage->toPlainText();
    } else if(waveform == "TTNT") {
        paramObject["comboBox_38"] = ui->comboBox_38->currentText();
        paramObject["spinBox_50"] = ui->spinBox_50->value();
        paramObject["ttntWorkType"] = ui->ttntWorkType->currentText();
        paramObject["ttntSrcAddr"] = ui->ttntSrcAddr->value();
        paramObject["ttntDesAddr"] = ui->ttntDesAddr->value();
        paramObject["ttntSpeedModel"] = ui->ttntSpeedModel->currentText();
        paramObject["ttntNetNum"] = ui->ttntNetNum->currentText();
        paramObject["ttntTrace"] = ui->ttntTrace->text();
        paramObject["ttntNetType"] = ui->ttntNetType->currentText();
        paramObject["ttntSendCurrent"] = ui->ttntSendCurrent->value();
        paramObject["ttntRouteConfig"] = ui->ttntRouteConfig->currentText();
        paramObject["ttntStatisCycle"] = ui->ttntStatisCycle->value();
        paramObject["ttntParam"] = ui->ttntParam->text();
        paramObject["ttntPnOverBit"] = ui->ttntPnOverBit->text();
        paramObject["ttntSynPn"] = ui->ttntSynPn->currentText();
        paramObject["ttntIp"] = ui->ttntIp->text();
        paramObject["ttntScrectSlect"] = ui->ttntScrectSlect->currentText();
        paramObject["ttntFreList"] = ui->ttntFreList->currentText();
        paramObject["ttntMessageType"] = ui->ttntMessageType->currentText();
        paramObject["ttntMessageprisend"] = ui->ttntMessageprisend->currentText();
        bool checkBox_8 = ui->checkBox_8->isChecked();
        if(checkBox_8) {
            paramObject["checkBox_8"] = "true";
        } else {
            paramObject["checkBox_8"] = "false";
        }
        paramObject["ttntIp"] = ui->ttntSendTime->value();
        paramObject["ttntSendNum"] = ui->ttntSendNum->value();
        paramObject["ttntSendPc"] = ui->ttntSendPc->value();
        paramObject["plainTextEdit_35"] = ui->plainTextEdit_35->toPlainText();
        paramObject["TtntSenNUm"] = ui->TtntSenNUm->value();
        paramObject["ttntTestMessage"] = ui->ttntTestMessage->toPlainText();
    }
    return paramObject;
}
int Link11parts::getNowSimID() {
    return simNowID;
}
void Link11parts::hideOrShowControl(bool isConnect) {
    QList<QPushButton*> pushButtons = ui->tabWidget->currentWidget()->findChildren<QPushButton*>();
    foreach (QPushButton* pushButton, pushButtons) {
        if(isConnect) {
            pushButton->show();
            if(pushButton->text() == "发送" && timeSendCycleMap[simNowID] != nullptr) {
                pushButton->hide();
            }
            if(pushButton->text() == "停止" && timeSendCycleMap[simNowID] == nullptr) {
                pushButton->hide();
            }
        } else {
            pushButton->hide();
        }
    }
    QList<QCheckBox*> checkBoxs = ui->tabWidget->currentWidget()->findChildren<QCheckBox*>();
    foreach (QCheckBox* checkBox, checkBoxs) {
        if(isConnect) {
            checkBox->show();
        } else {
            checkBox->hide();
        }
    }
}
//link4a
void Link11parts::on_btn_Link4ASetMode_2_clicked() {//配置模式

    setCommonModel(Struct_CommandMsg::ENUM_WAVE_LINK4A, ui->comboBox_31->currentIndex(),
                   ui->spinBox_28->text().toInt());
}
void Link11parts::on_btn_4A_BD_Save_2_clicked() {//Link4A 波道存储
    QString filePath = "D:/c++/txtFile/Link4A/channel" + QString::number(simNowID) + ".txt";
    QString channelName = "channel"+QString::number(ui->spinBox_28->value());//波道号
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    int select = QMessageBox::information(this,"存储波道参数","是否将参数存储到波道"+QString::number(ui->spinBox_28->value()),QMessageBox::Ok|QMessageBox::Cancel);
    switch (select) {
    case QMessageBox::Ok:
        file->setValue(channelName+"/WorkMode",QString::number(ui->comboBox_49->currentIndex()));//工作模式
        file->setValue(channelName+"/HostAddr",QString::number(ui->spinBox_9->value()));//本机地址
        file->setValue(channelName+"/callReplyPeriod",QString::number(ui->spinBox_21->value()));//呼叫应答周期
        file->setValue(channelName+"/frequency",ui->lineEdit_4->text().toUInt());//频率范围
        file->setValue(channelName+"/FSKFrequencyOffset",ui->lineEdit_38->text());//FSK频偏
        file->setValue(channelName+"/bigOrSmallEdian",QString::number(ui->comboBox_52->currentIndex()));//符号映射关系
        break;
    case QMessageBox::Cancel: qDebug()<<"Cancel";break;
    default:break;
    }
    delete file;
}
void Link11parts::on_btn_4AParaLoad_2_clicked() {//Link4A 波道加载
    QString filePath = "D:/c++/txtFile/Link4A/channel" + QString::number(simNowID) + ".txt";
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    QString channelName = "channel"+QString::number(ui->spinBox_28->value());
    QString keyName = channelName+"/workMode";
    int select = QMessageBox::information(NULL,"是否加载波道?","是否加载波道"+QString::number(ui->spinBox_28->value()),QMessageBox::Ok|QMessageBox::Cancel);
    if(select == QMessageBox::Ok){
        bool isQsettingKeyExit = file->contains(keyName);
        if(isQsettingKeyExit){
            qDebug()<<channelName<<"存在";
            ui->comboBox_49->setCurrentIndex(file->value(channelName+"/WorkMode").toInt());
            ui->spinBox_9->setValue(file->value(channelName+"/HostAddr").toInt());
            ui->spinBox_21->setValue(file->value(channelName+"/callReplyPeriod").toInt());
            ui->lineEdit_4->setText(file->value(channelName+"/frequency").toString());
            ui->lineEdit_38->setText(file->value(channelName+"/FSKFrequencyOffset").toString());
            ui->comboBox_52->setCurrentIndex(file->value(channelName+"/bigOrSmallEdian").toInt());
        }
        else{
            qDebug()<<channelName<<"不存在";
            QMessageBox::information(NULL,"该波道并未存储","该波道并未存储",QMessageBox::Ok);
        }
    }
    delete file;
}
void Link11parts::on_btn_Link4ASendPara_2_clicked() {//发送参数
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK4A_param msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK4A_param)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK4A;
    msg.workMode = ui->comboBox_49->currentIndex();//工作模式
    msg.localhost = ui->spinBox_9->text().toInt();//本机地址
    msg.master = ui->comboBox_128->currentIndex();//主从
    msg.callcircle = ui->spinBox_21->text().toUInt();//呼叫应答周期
    msg.callcircle = qToBigEndian(msg.callcircle);
    msg.symbol = ui->comboBox_52->currentIndex();//符号映射关系
    msg.FSK = ui->lineEdit_38->text().toUInt();//FSK频偏
    msg.FSK = qToBigEndian(msg.FSK);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK4A_param));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK4A_param));
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","发送参数成功");//调用协议类进行发送
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_btn_Link4ASendFrequency_2_clicked() {//发送频率
    setLink4ASendFrequency(0x01, ui->lineEdit_4->text().toUInt());
}
void Link11parts::on_btn_Link4ASendFrequency1_2_clicked() {//发送频率1
    setLink4ASendFrequency(0xD1, ui->lineEdit_19->text().toUInt());
}
void Link11parts::on_btn_Link4ASendFrequency2_2_clicked() {//发送频率2
    setLink4ASendFrequency(0xD2, ui->lineEdit_18->text().toUInt());
}
void Link11parts::setLink4ASendFrequency(uchar msgType, uint value) {
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK4A_fre msg;
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK4A_fre)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK4A;
    msg.msgType = msgType;
    ushort fre = (value - 30000) / 25;
    if(value < 30000) {
        fre = 0;
    }
    msg.fre = fre;
    msg.fre = qToBigEndian(msg.fre);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK4A_fre));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK4A_fre));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","发送频率成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_comboBox_34_currentIndexChanged(int index) {//战术数据 数据类型
    if(index==2)
        ui->comboBox_2->setEnabled(false);
    else
        ui->comboBox_2->setEnabled(true);
}
void Link11parts::on_comboBox_2_activated(int index) {
    //这里还要打算存储想要设置的命令
    if((index>0)&&(index<36)){
        ui->plainTextEdit_8->clear();
        ui->plainTextEdit_8->setReadOnly(true);
        //这里从文本文档读取设置信息
        //在这个范围内的选项都是只能读,不能写,要想改变的话,去对应的txt文本中修改.
        QString filePath = "D:/c++/txtFile/Link4A/data.txt";
        QString keyName = "data/"+ui->comboBox_2->currentText();
        QSettings *file = new QSettings(filePath,QSettings::IniFormat);
        bool isQsettingKeyExit = file->contains(keyName);
        if(isQsettingKeyExit){
            //        key如果存在就读取
            ui->plainTextEdit_8->setPlainText(file->value(keyName).toString());
        }
        else{
            QMessageBox::information(NULL,"该数据暂时未存储","该数据暂时未存储",QMessageBox::Ok);
        }
        delete file;
    }
    else
        ui->plainTextEdit_8->setReadOnly(false);
}
void Link11parts::on_pushButton_13_clicked(){//战术数据 发送
    QString text = ui->plainTextEdit_8->toPlainText();
    QByteArray stringData(udpCliet->hexStringToByteArray(text));
    //对ZS数据进行组包处理
    Struct_CommandMsg cmd;//定义报文体
    Struct_COMMON_data msg;
    cmd.length = sizeof(Struct_CommandMsg) - sizeof(char *)
                 + sizeof(Struct_COMMON_data) + stringData.size() - sizeof(char *);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK4A;
    msg.pkgnum = ui->comboBox_28->currentText().toInt();//发送包数:
    msg.pkgnum = qToBigEndian(msg.pkgnum);
    msg.dataType = ui->comboBox_34->currentIndex();//数据类型
    msg.content = (char *)malloc(stringData.size());
    memcpy(msg.content, stringData.data(), stringData.size());
    cmd.content = (char*)malloc(sizeof(Struct_COMMON_data) + stringData.size() - sizeof(char *));
    memcpy(cmd.content, &msg, sizeof(Struct_COMMON_data) - sizeof(char *));
    memcpy(cmd.content + sizeof(Struct_COMMON_data) - sizeof(char *), msg.content, stringData.size());
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    QByteArray dealData = cmd.GetQByteArray();
    if(ui->checkBox_2->isChecked()==true)//周期发送
    {
        timeUdpMap[simNowID] = udpCliet;
        udpcliet* nowUdp = timeUdpMap[simNowID];
        ui->pushButton_13->hide();//发送
        ui->pushButton_15->show();//停止
        //这里是周期发送
        QTimer* timeSendCycle = new QTimer;
        timeSendCycleMap[simNowID] = timeSendCycle;
        connect(timeSendCycle,&QTimer::timeout,[=](){
            nowUdp->dealSend(dealData);//stringData);
        });
        timeSendCycle->start(ui->spinBox_26->value());//周期
    }
    else
        //单独发送
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","单独发送成功");
    text.clear();
    free(msg.content);
    msg.content=NULL;
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_pushButton_15_clicked() {//战术数据 停止
    QTimer* timeSendCycle = timeSendCycleMap[simNowID];
    timeSendCycle->stop();
    timeUdpMap.remove(simNowID);
    timeSendCycleMap.remove(simNowID);
    ui->pushButton_13->show();//发送
    ui->pushButton_15->hide();//停止
}
void Link11parts::on_checkBox_2_toggled(bool checked) {//战术数据 周期
    ui->spinBox_26->setEnabled(checked);//周期
    ui->label_70->setEnabled(checked);
    ui->label_124->setEnabled(checked);
}
void Link11parts::on_groupBox_7_clicked(bool checked) {//测试模式 是否选择
    if(checked==true)
    {
        ui->comboBox_2->addItem("测试数据1");
        ui->comboBox_2->addItem("测试数据2");
        ui->comboBox_2->addItem("测试数据3");
        ui->comboBox_2->addItem("测试数据4");
    }else {
        ui->comboBox_2->removeItem(39);       //删除就只有这样从后往前删除
        ui->comboBox_2->removeItem(38);
        ui->comboBox_2->removeItem(37);
        ui->comboBox_2->removeItem(36);
    }
    ui->pushButton_13->setEnabled(!checked);//发送
    Struct_CommandMsg cmd;//定义报文体
    Struct_COMMON_test msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_COMMON_test)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK4A;
    msg.testMode = ui->groupBox_7->isChecked()?1:0;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_COMMON_test));
    memcpy(cmd.content, &msg, sizeof(Struct_COMMON_test));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","测试模式发送成功");
    free(cmd.content);
    cmd.content=NULL;
}
//Link11
void Link11parts::on_pushButton_29_clicked(){//配置模式
    setCommonModel(Struct_CommandMsg::ENUM_WAVE_LINK11, ui->comboBox_33->currentIndex(),
                   ui->spinBox_30->text().toInt());

}
void Link11parts::on_pushButton_16_clicked() {//波道存储
    QString filePath = "D:/c++/txtFile/Link11/channel" + QString::number(simNowID) + ".txt";
    QString channelName = "channel"+QString::number(ui->spinBox_30->value());//波道号
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    int select = QMessageBox::information(this,"存储波道参数","是否将参数存储到波道"+QString::number(ui->spinBox_30->value()),QMessageBox::Ok|QMessageBox::Cancel);
    switch (select) {
    case QMessageBox::Ok:
        file->setValue(channelName+"/frequency",ui->spinBox_32->value());//频率范围
        file->setValue(channelName+"/tones", QString::number(ui->comboBox_115->currentIndex()));//单音多音
        file->setValue(channelName+"/WorkMode",QString::number(ui->comboBox_112->currentIndex()));//工作模式
        file->setValue(channelName+"/frameStruct",QString::number(ui->comboBox_117->currentIndex()));//帧结构
        file->setValue(channelName+"/localPU",QString::number(ui->spinBox_37->value()));//本机PU码
        file->setValue(channelName+"/callPU",QString::number(ui->spinBox_38->value()));//呼叫PU码
        file->setValue(channelName+"/master",QString::number(ui->comboBox_120->currentIndex()));//主从
        file->setValue(channelName+"/TrackNumber",QString::number(ui->spinBox_39->value()));//航迹号
        file->setValue(channelName+"/symbolMapping",QString::number(ui->comboBox_116->currentIndex()));//符号映射关系
        file->setValue(channelName+"/FMgap",ui->lineEdit_39->text());//FM频偏
        file->setValue(channelName+"/twiceModul",QString::number(ui->comboBox_114->currentIndex()));//二次调试方式
        file->setValue(channelName+"/hanMingCode",QString::number(ui->comboBox_113->currentIndex()));//汉明码使能
        break;
    case QMessageBox::Cancel: qDebug()<<"Cancel";break;
    default:break;
    }
    delete file;
}
void Link11parts::on_pushButton_30_clicked() {//波道加载
    QString filePath = "D:/c++/txtFile/Link11/channel" + QString::number(simNowID) + ".txt";
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    QString channelName = "channel"+QString::number(ui->spinBox_30->value());
    QString keyName = channelName+"/workMode";
    int select = QMessageBox::information(NULL,"是否加载波道?","是否加载波道"+QString::number(ui->spinBox_30->value()),QMessageBox::Ok|QMessageBox::Cancel);
    if(select == QMessageBox::Ok){
        bool isQsettingKeyExit = file->contains(keyName);
        if(isQsettingKeyExit){
            qDebug()<<channelName<<"存在";
            ui->spinBox_32->setValue(file->value(channelName+"/frequency").toInt());//频率范围
            ui->comboBox_115->setCurrentIndex(file->value(channelName+"/tones").toInt());//单音多音
            ui->comboBox_112->setCurrentIndex(file->value(channelName+"/WorkMode").toInt());//工作模式
            ui->comboBox_117->setCurrentIndex(file->value(channelName+"/frameStruct").toInt());//帧结构
            ui->spinBox_37->setValue(file->value(channelName+"/localPU").toInt());//本机PU码
            ui->spinBox_38->setValue(file->value(channelName+"/callPU").toInt());//呼叫PU码
            ui->comboBox_120->setCurrentIndex(file->value(channelName+"/master").toInt());//主从
            ui->spinBox_39->setValue(file->value(channelName+"/TrackNumber").toInt());//航迹号
            ui->comboBox_116->setCurrentIndex(file->value(channelName+"/symbolMapping").toInt());//符号映射关系
            ui->lineEdit_39->setText(file->value(channelName+"/FMgap").toString());//FM频偏
            ui->comboBox_114->setCurrentIndex(file->value(channelName+"/twiceModul").toInt());//二次调试方式
            ui->comboBox_113->setCurrentIndex(file->value(channelName+"/hanMingCode").toInt());//汉明码使能
        }
        else{
            qDebug()<<channelName<<"不存在";
            QMessageBox::information(NULL,"该波道并未存储","该波道并未存储",QMessageBox::Ok);
        }
    }
    delete file;
}
void Link11parts::on_btn_link11_sendFrequence_clicked() {//发送频率
    Struct_CommandMsg cmd;//定义报文体
    Struct_COMMON_fre msg;
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_COMMON_fre)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    msg.fre = (ui->spinBox_32->value() - 30000) / 25;
    msg.fre = qToBigEndian(msg.fre);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_COMMON_fre));
    memcpy(cmd.content, &msg, sizeof(Struct_COMMON_fre));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","发送频率成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_btn_Link11_sendParas_clicked() {//参数下发
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK11_param msg;
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK11_param)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    //对报文主要参数内容进行赋值
    msg.singleVoice = ui->comboBox_115->currentIndex();//单音多音
    msg.workMode = ui->comboBox_112->currentIndex();//工作模式
    msg.localhost = ui->spinBox_37->value();//本机PU码
    msg.callhost = ui->spinBox_38->value();//呼叫PU码
    msg.hanMingCode = ui->comboBox_113->currentIndex();//汉明码使能
    msg.master = ui->comboBox_120->currentIndex();//主从
    msg.FMgap = ui->lineEdit_39->text().toInt();//FM频偏
    msg.tracksNum =  ui->spinBox_39->value();//航迹号
    msg.FMgap = qToBigEndian(msg.FMgap);
    msg.tracksNum = qToBigEndian(msg.tracksNum);
    msg.twiceModul = ui->comboBox_114->currentIndex();//二次调试方式
    msg.frameStruct = ui->comboBox_117->currentIndex();//帧结构
    msg.symbolMapping= ui->comboBox_116->currentIndex();//符号映射关系
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK11_param));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK11_param));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数下发成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_spinBox_162_valueChanged(int arg1) {
    ui->label_165->setText(QString::number(ui->spinBox_161->value()*arg1)+" μs");
}
void Link11parts::on_spinBox_161_valueChanged(int arg1) {
    ui->label_165->setText(QString::number(ui->spinBox_162->value()*arg1)+" μs");
}
void Link11parts::on_pushButton_joinNET_clicked() {//添加入网功能
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK11_joinNetWorK msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK11_joinNetWorK)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    msg.PUcode = ui->spinBox_40->value();//新入PU码
    msg.stepLen = ui->spinBox_161->value();//时隙片长度
    msg.stepLen = qToBigEndian(msg.stepLen);
    msg.stepNum = ui->spinBox_162->value();//时隙片个数
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK11_joinNetWorK));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK11_joinNetWorK));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","添加入网成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_btn_cleanNetwork_clicked() {//清除入网
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK11_cleanNetWorK msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK11_cleanNetWorK)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    msg.PUcode = ui->spinBox_40->value();//新入PU码
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK11_cleanNetWorK));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK11_cleanNetWorK));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","清除入网成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_btn_startLoop_clicked() {//开始轮询
    uchar reqFlag;
    //判断点击按钮状态 开始轮询/停止轮询
    if(ui->btn_startLoop->text() == "开始轮询") {
        ui->btn_startLoop->setText("停止轮询");
        reqFlag = 1;
    } else {
        ui->btn_startLoop->setText("开始轮询");
        reqFlag = 0;
    }
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK11_startRequest msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK11_startRequest)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    msg.flagReq = reqFlag;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK11_startRequest));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK11_startRequest));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知",ui->btn_startLoop->text() + "成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_comboBox_37_currentIndexChanged(int index) {//战术数据 数据类型
    if(index==2)
        ui->comboBox_3->setEnabled(false);
    else
        ui->comboBox_3->setEnabled(true);
}
void Link11parts::on_comboBox_3_activated(int index) {
    //这里还要打算存储想要设置的命令
    if((index>0)&&(index<17)){
        ui->plainTextEdit_27->clear();
        ui->plainTextEdit_27->setReadOnly(true);
        //这里从文本文档读取设置信息
        //在这个范围内的选项都是只能读,不能写,要想改变的话,去对应的txt文本中修改.
        QString filePath = "D:/c++/txtFile/Link11/data.txt";
        QString keyName = "data/"+ui->comboBox_3->currentText();
        QSettings *file = new QSettings(filePath,QSettings::IniFormat);
        bool isQsettingKeyExit = file->contains(keyName);
        if(isQsettingKeyExit){
            //        key如果存在就读取
            ui->plainTextEdit_27->setPlainText(file->value(keyName).toString());
        }
        else{
            QMessageBox::information(NULL,"该数据暂时未存储","该数据暂时未存储",QMessageBox::Ok);
        }
        delete file;
    }
    else
        ui->plainTextEdit_27->setReadOnly(false);
}
void Link11parts::on_pushButton_17_clicked() {//发送
    QString text = ui->plainTextEdit_27->toPlainText();
    QByteArray stringData(udpCliet->hexStringToByteArray(text));
    //对ZS数据进行组包处理
    Struct_CommandMsg cmd;//定义报文体
    Struct_COMMON_data msg;
    cmd.length = sizeof(Struct_CommandMsg) - sizeof(char *)
                 + sizeof(Struct_COMMON_data) + stringData.size() - sizeof(char *);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    msg.pkgnum = ui->comboBox_36->currentText().toInt();
    msg.pkgnum = qToBigEndian(msg.pkgnum);
    msg.dataType = ui->comboBox_37->currentIndex();
    msg.content = (char *)malloc(stringData.size());
    memcpy(msg.content, stringData.data(), stringData.size());

    cmd.content = (char*)malloc(sizeof(Struct_COMMON_data) + stringData.size() - sizeof(char *));
    memcpy(cmd.content, &msg, sizeof(Struct_COMMON_data) - sizeof(char *));
    memcpy(cmd.content + sizeof(Struct_COMMON_data) - sizeof(char *), msg.content, stringData.size());

    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    QByteArray dealData = cmd.GetQByteArray();
    if(ui->checkBox_3->isChecked()==true) {
        timeUdpMap[simNowID] = udpCliet;
        udpcliet* nowUdp = timeUdpMap[simNowID];
        ui->pushButton_17->hide();
        ui->pushButton_9->show();
        //这里是周期发送
        QTimer* timeSendCycle = new QTimer;
        timeSendCycleMap[simNowID] = timeSendCycle;
        connect(timeSendCycle,&QTimer::timeout,[=](){
            nowUdp->dealSend(dealData);//stringData);
            int send11PkgNum = send11PkgNumMap[simNowID];
            send11PkgNum++;
            ui->label_62->setText(QString::number(send11PkgNum));
            send11PkgNumMap[simNowID] = send11PkgNum;
        });
        timeSendCycle->start(ui->spinBox_34->value());
    } else {
        //单独发送
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","单独发送成功");
        int send11PkgNum = send11PkgNumMap[simNowID];
        send11PkgNum++;
        ui->label_62->setText(QString::number(send11PkgNum));
        send11PkgNumMap[simNowID] = send11PkgNum;
    }
    text.clear();
}
void Link11parts::on_pushButton_9_clicked() {
    QTimer* timeSendCycle = timeSendCycleMap[simNowID];
    timeSendCycle->stop();
    timeUdpMap.remove(simNowID);
    timeSendCycleMap.remove(simNowID);
    ui->pushButton_17->show();//发送
    ui->pushButton_9->hide();//停止
}
void Link11parts::on_checkBox_3_toggled(bool checked) {
    ui->spinBox_34->setEnabled(checked);//周期
    ui->label_139->setEnabled(checked);
    ui->label_140->setEnabled(checked);
}
void Link11parts::on_pushButton_10_clicked() {//清理
    send11PkgNumMap[simNowID] = 0;
    ui->label_62->setText("0");
}
void Link11parts::on_groupBox_35_clicked() {//测试模式
    Struct_CommandMsg cmd;//定义报文体
    //定义报文数据内容
    Struct_COMMON_test msg;
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_COMMON_test)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK11;
    msg.testMode = ui->groupBox_35->isChecked()?1:0;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length = qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_COMMON_test));
    memcpy(cmd.content, &msg, sizeof(Struct_COMMON_test));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","测试模式成功");
}
//Link16
void Link11parts::on_pushButton_33_clicked() {//配置
    setCommonModel(Struct_CommandMsg::ENUM_WAVE_LINK16,ui->comboBox_35->currentIndex()
                   ,ui->spinBox_49->text().toInt());
}
void Link11parts::on_pushButton_18_clicked() {//波道存储
    QString filePath = "D:/c++/txtFile/Link16/channel" + QString::number(simNowID) + ".txt";
    QString channelName = "channel"+QString::number(ui->spinBox_49->value());//波道号
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    int select = QMessageBox::information(this,"存储波道参数","是否将参数存储到波道"+QString::number(ui->spinBox_49->value()),QMessageBox::Ok|QMessageBox::Cancel);
    switch (select) {
    case QMessageBox::Ok:
        file->setValue(channelName+"/l16Model", QString::number(ui->l16Model->currentIndex()));//通信模式
        file->setValue(channelName+"/link16ConstFre",ui->link16_const_fre->text());//定频频率
        file->setValue(channelName+"/l16NetNum",QString::number(ui->l16NetNum->value()));//网络号
        file->setValue(channelName+"/l16NetIn",QString::number(ui->l16NetIn->value()));//网内节点数
        file->setValue(channelName+"/l16NetStruct",QString::number(ui->l16NetStruct->currentIndex()));//网络结构
        file->setValue(channelName+"/l16WorkType",QString::number(ui->l16WorkType->currentIndex()));//业务类型
        file->setValue(channelName+"/l16NtrJu",QString::number(ui->l16NtrJu->currentIndex()));//NTR/JU标识
        file->setValue(channelName+"/l16Relay",QString::number(ui->l16Relay->currentIndex()));//中继
        file->setValue(channelName+"/l16Trace",ui->l16Trace->text());//本机航迹号
        file->setValue(channelName+"/l16RelayNo",ui->l16RelayNo->text());//被中继航迹号
        file->setValue(channelName+"/l16pkgMode",QString::number(ui->l16pkgMode->currentIndex()));//封装格式
        file->setValue(channelName+"/l16pulseWidth",QString::number(ui->l16pulseWidth->currentIndex()));//脉冲宽度选择
        file->setValue(channelName+"/l16delay",QString::number(ui->l16delay->value()));//固定时延
        file->setValue(channelName+"/l16mainFreDiff",ui->l16mainFreDiff->text());//载波中心频率偏移
        file->setValue(channelName+"/l16shake",QString::number(ui->l16shake->currentIndex()));//抖动
        file->setValue(channelName+"/l16pulseInterval",ui->l16pulseInterval->text());//脉冲间隔(ms)
        file->setValue(channelName+"/l16msgSecretVar",ui->l16msgSecretVar->text());//消息保密加密变量(MSEC)
        file->setValue(channelName+"/l16tansSecretVar",ui->l16tansSecretVar->text());//传输保密加密变量(TSEC)
        file->setValue(channelName+"/coarseEdit",QString::number(ui->comboBox_222->currentIndex()));//粗同步脉冲图案编辑
        file->setValue(channelName+"/fineEdit",QString::number(ui->comboBox_226->currentIndex()));//精同步脉冲图案编辑
        file->setValue(channelName+"/messEdit",QString::number(ui->comboBox_223->currentIndex()));//消息字跳频图案编辑
        break;
    case QMessageBox::Cancel: qDebug()<<"Cancel";break;
    default:break;
    }
    delete file;
}
void Link11parts::on_pushButton_34_clicked() {//波道加载
    QString filePath = "D:/c++/txtFile/Link16/channel" + QString::number(simNowID) + ".txt";
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    QString channelName = "channel"+QString::number(ui->spinBox_49->value());
    QString keyName = channelName+"/workMode";
    int select = QMessageBox::information(NULL,"是否加载波道?","是否加载波道"+QString::number(ui->spinBox_49->value()),QMessageBox::Ok|QMessageBox::Cancel);
    if(select == QMessageBox::Ok){
        bool isQsettingKeyExit = file->contains(keyName);
        if(isQsettingKeyExit){
            qDebug()<<channelName<<"存在";
            ui->l16Model->setCurrentIndex(file->value(channelName+"/l16Model").toInt());//通信模式
            ui->link16_const_fre->setText(file->value(channelName+"/link16ConstFre").toString());//定频频率
            ui->l16NetNum->setValue(file->value(channelName+"/l16NetNum").toInt());//网络号
            ui->l16NetIn->setValue(file->value(channelName+"/l16NetIn").toInt());//网内节点数
            ui->l16NetStruct->setCurrentIndex(file->value(channelName+"/l16NetStruct").toInt());//网络结构
            ui->l16WorkType->setCurrentIndex(file->value(channelName+"/l16WorkType").toInt());//业务类型
            ui->l16NtrJu->setCurrentIndex(file->value(channelName+"/l16NtrJu").toInt());//NTR/JU标识
            ui->l16Relay->setCurrentIndex(file->value(channelName+"/l16Relay").toInt());//中继
            ui->l16Trace->setText(file->value(channelName+"/l16Trace").toString());//本机航迹号
            ui->l16RelayNo->setText(file->value(channelName+"/l16RelayNo").toString());//被中继航迹号
            ui->l16pkgMode->setCurrentIndex(file->value(channelName+"/l16pkgMode").toInt());//封装格式
            ui->l16pulseWidth->setCurrentIndex(file->value(channelName+"/l16pulseWidth").toInt());//脉冲宽度选择
            ui->l16delay->setValue(file->value(channelName+"/l16delay").toInt());//固定时延
            ui->l16mainFreDiff->setText(file->value(channelName+"/l16mainFreDiff").toString());//载波中心频率偏移
            ui->l16shake->setCurrentIndex(file->value(channelName+"/l16shake").toInt());//抖动
            ui->l16pulseInterval->setText(file->value(channelName+"/l16pulseInterval").toString());//脉冲间隔(ms)
            ui->l16msgSecretVar->setText(file->value(channelName+"/l16msgSecretVar").toString());//消息保密加密变量(MSEC)
            ui->l16tansSecretVar->setText(file->value(channelName+"/l16tansSecretVar").toString());//传输保密加密变量(TSEC)
            ui->comboBox_222->setCurrentIndex(file->value(channelName+"/coarseEdit").toInt());//粗同步脉冲图案编辑
            ui->comboBox_226->setCurrentIndex(file->value(channelName+"/fineEdit").toInt());//精同步脉冲图案编辑
            ui->comboBox_223->setCurrentIndex(file->value(channelName+"/messEdit").toInt());//消息字跳频图案编辑
        } else{
            qDebug()<<channelName<<"不存在";
            QMessageBox::information(NULL,"该波道并未存储","该波道并未存储",QMessageBox::Ok);
        }
    }
    delete file;
}
void Link11parts::on_l16Model_activated(int index) {//通信模式 下拉框选择
    //跳频图案的逻辑
    if((index==0)&&(ui->comboBox_222->currentIndex()==0))
        ui->pushButton_148->setEnabled(true);
    else
        ui->pushButton_148->setEnabled(false);
    if((index==0)&&(ui->comboBox_223->currentIndex()==0))
        ui->pushButton_149->setEnabled(true);
    else
        ui->pushButton_149->setEnabled(false);
    if((index==0)&&(ui->comboBox_226->currentIndex()==0))
        ui->pushButton_151->setEnabled(true);
    else
        ui->pushButton_151->setEnabled(false);
    if(index==0) {//定频频率能否设置
        ui->link16_const_fre->setEnabled(false);
    } else {
        ui->link16_const_fre->setEnabled(true);
    }
    if(index==2) {//加密参数能否设置
        ui->groupBox_143->setEnabled(false);
    } else {
        ui->groupBox_143->setEnabled(true);
    }
}
void Link11parts::on_pushButton_65_clicked() {//通信模式 下发
    Struct_CommandMsg cmd;
    Struct_LINK16_fre msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_fre)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    msg.fre =((ui->link16_const_fre->text().toUInt()-30000000)/25000);
    msg.model = ui->l16Model->currentIndex();
    msg.fre = qToBigEndian( msg.fre);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK16_fre));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK16_fre));
    //调用协议类进行发送
    bool isResult = udpCliet->dealSend(cmd.GetQByteArray());
    setMessageBox(isResult,"通知","参数配置成功");
}
void Link11parts::on_l16NetStruct_activated(int index) {//通信模式2 网络结构下拉框
    if(index==0) {
        ui->btn_l16_Netcontrol->setEnabled(false);
    } else {
        ui->btn_l16_Netcontrol->setEnabled(true);
    }
}
void Link11parts::on_btn_l16_Netcontrol_clicked() {//通信模式2 网络控制
    if(ui->l16NetStruct->currentIndex()==1){
        QDialog *dialog = new QDialog(this);
        dialog->resize(400,75);
        QHBoxLayout *major = new QHBoxLayout;
        QVBoxLayout *Vlayout1 = new QVBoxLayout;
        QVBoxLayout *Vlayout2 = new QVBoxLayout;
        QLabel *lab_part1 = new QLabel("时隙类型:");
        QLabel *lab_part2 = new QLabel("网络编号:");
        QComboBox *combo = new QComboBox();
        combo->addItems(QStringList{"RTT时隙","网络管理（中继时隙）","C2 PPL1","非C2 PPL1","高更新率战斗机PPL1","监视","任务管理","武器协同","空中控制上行链路","空中控制下行链路","战斗机-战斗机","话音1","话音2"});
        QLineEdit *lineidt1 = new QLineEdit("2");
        QPushButton *btn1 =  new QPushButton("确定");
        Vlayout1->addWidget(lab_part1);
        Vlayout1->addWidget(lab_part2);
        Vlayout2->addWidget(combo);
        Vlayout2->addWidget(lineidt1);
        major->addLayout(Vlayout1);
        major->addLayout(Vlayout2);
        major->addWidget(btn1);
        dialog->setWindowTitle("网络控制");
        dialog->setLayout(major);
        dialog->setModal(true); //模态
        dialog->show();
        connect(btn1,&QPushButton::clicked,[=](){
            Struct_CommandMsg cmd;
            //定义报文数据内容
            cmd.length =sizeof(Struct_CommandMsg)+3-sizeof(cmd.content);
            cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
            char *buf = new char[3];
            buf[0] =0xf3;
            buf[1] = combo->currentIndex();
            buf[2] = lineidt1->text().toUInt();
            cmd.header = qToBigEndian(cmd.header);
            cmd.length =qToBigEndian(cmd.length);
            cmd.content = (char*)malloc(3);
            memcpy(cmd.content, buf, 3);
            //调用协议类进行发送
            setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
            delete[] buf;
            delete lab_part1;
            delete lab_part2;
            delete  lineidt1;
            delete combo;
            delete Vlayout1;
            delete Vlayout2;
            delete major;
            delete btn1;
            delete dialog;
        });
    } else {
        QDialog *dialog = new QDialog(this);
        dialog->resize(400,150);
        QHBoxLayout *major = new QHBoxLayout;
        QVBoxLayout *Vlayout1 = new QVBoxLayout;
        QVBoxLayout *Vlayout2 = new QVBoxLayout;
        QLabel *lab_part1 = new QLabel("时隙类型:");
        QLabel *lab_part2 = new QLabel("网络编号:");
        QLabel *lab_part3 = new QLabel("消息加密变量:");
        QLabel *lab_part4 = new QLabel("传输加密变量:");
        QComboBox *combo = new QComboBox();
        combo->addItems(QStringList{"RTT时隙","网络管理（中继时隙）","C2 PPL1","非C2 PPL1","高更新率战斗机PPL1","监视","任务管理","武器协同","空中控制上行链路","空中控制下行链路","战斗机-战斗机","话音1","话音2"});
        QLineEdit *lineidt1 = new QLineEdit("2");
        QLineEdit *lineidt2 = new QLineEdit("11 22 33 44");
        QLineEdit *lineidt3 = new QLineEdit("11 22 33 44");
        QPushButton *btn1 =  new QPushButton("确定");
        Vlayout1->addWidget(lab_part1);
        Vlayout1->addWidget(lab_part2);
        Vlayout1->addWidget(lab_part3);
        Vlayout1->addWidget(lab_part4);
        Vlayout2->addWidget(combo);
        Vlayout2->addWidget(lineidt1);
        Vlayout2->addWidget(lineidt2);
        Vlayout2->addWidget(lineidt3);
        major->addLayout(Vlayout1);
        major->addLayout(Vlayout2);
        major->addWidget(btn1);
        dialog->setWindowTitle("网络控制");
        dialog->setLayout(major);
        dialog->setModal(true); //模态
        dialog->show();
        connect(btn1,&QPushButton::clicked,[=](){
            Struct_CommandMsg cmd;
            //定义报文数据内容
            cmd.length =sizeof(Struct_CommandMsg)+11-sizeof(cmd.content);
            cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
            char *buf = new char[11];
            buf[0] =0xf3;
            buf[1] = combo->currentIndex();
            buf[2] = lineidt1->text().toUInt();
            hexstringtochar(lineidt2->text(),buf+3);
            hexstringtochar(lineidt3->text(),buf+7);
            cmd.header = qToBigEndian(cmd.header);
            cmd.length =qToBigEndian(cmd.length);
            cmd.content = (char*)malloc(11);
            memcpy(cmd.content, buf, 11);
            //调用协议类进行发送
            setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
            delete[] buf;
            delete lab_part1;
            delete lab_part2;
            delete lab_part3;
            delete lab_part4;
            delete  lineidt1;
            delete  lineidt2;
            delete  lineidt3;
            delete combo;
            delete Vlayout1;
            delete Vlayout2;
            delete major;
            delete btn1;
            delete dialog;
        });
    }
}
void Link11parts::on_pushButton_67_clicked() {//通信模式2  参数下发
    Struct_CommandMsg cmd;
    Struct_LINK16_param msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_param)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    msg.netNo = (ui->l16NetNum->text().toUInt()-1);
    msg.netnum = ui->l16NetIn->text().toUInt();
    msg.netStruct = uint(ui->l16NetStruct->currentIndex());
    msg.workMode = ui->l16WorkType->currentIndex();
    char *buf = new char[2];
    hexstringtochar(ui->l16Trace->text(),buf);
    msg.pathNo = (buf[1]<<8)|buf[0];
    msg.relay = ui->l16Relay->currentIndex();
    hexstringtochar(ui->l16RelayNo->text(),buf);
    msg.relayNo = (buf[1]<<8)|buf[0];
    msg.NTRflag = ui->l16NtrJu->currentIndex();
    //msg
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK16_param));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK16_param));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
    delete[] buf;
}
void Link11parts::on_l16shake_activated(int index) {//脉冲格式 抖动下拉框
    if(index==4)
        ui->l16pulseInterval->setEnabled(true);
    else
        ui->l16pulseInterval->setEnabled(false);
}
void Link11parts::on_pushButton_68_clicked() {//脉冲格式 参数下发
    Struct_CommandMsg cmd;
    Struct_LINK16_pulse msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_pulse)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    msg.pkgMode = ui->l16pkgMode->currentIndex();
    msg.pulseWidth = ui->l16pulseWidth->currentIndex();
    msg.pulseInterval =  ui->l16pulseInterval->text().toUInt();
    msg.delay = ui->l16delay->text().toInt();
    msg.delay = qToBigEndian(msg.delay);
    msg.mainFreDiff = ui->l16mainFreDiff->text().toInt();
    msg.mainFreDiff = qToBigEndian(msg.mainFreDiff);
    msg.shake = ui->l16shake->currentIndex();
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_LINK16_pulse));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK16_pulse));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
}
void Link11parts::on_pushButton_69_clicked() {//加密参数 参数下发
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK16_secrect msg;//定义报文数据内容
    //报文内容赋值
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    int len1,len2;
    char *buf = new char[1024];
    len1 =  hexstringtochar(ui->l16msgSecretVar->text(),buf);
    msg.msgSecretVar = (char*)malloc(len1);
    memcpy(msg.msgSecretVar,buf,len1);
    len2 =  hexstringtochar(ui->l16tansSecretVar->text(),buf);
    msg.tansSecretVar = (char*)malloc(len2);
    memcpy(msg.tansSecretVar,buf,len2);
    cmd.length =sizeof(Struct_CommandMsg)+1+len1+len2-sizeof(cmd.content);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(1+len1+len2);
    memcpy(cmd.content, &msg, 1);
    memcpy(cmd.content+1, msg.msgSecretVar, len1);
    memcpy(cmd.content+1+len1, msg.tansSecretVar, len2);
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
}
void Link11parts::on_comboBox_222_activated(int index) {//跳频图案编辑 粗同步下拉框
    if((index==0)&&(ui->l16Model->currentIndex()==0))
        ui->pushButton_148->setEnabled(true);
    else
        ui->pushButton_148->setEnabled(false);
}
void Link11parts::on_comboBox_223_activated(int index) {//跳频图案编辑 消息字下拉框
    if((index==0)&&(ui->l16Model->currentIndex()==0))
        ui->pushButton_149->setEnabled(true);
    else
        ui->pushButton_149->setEnabled(false);
}
void Link11parts::on_comboBox_226_activated(int index) {//跳频图案编辑 精同步下拉框
    if((index==0)&&(ui->l16Model->currentIndex()==0))
        ui->pushButton_151->setEnabled(true);
    else
        ui->pushButton_151->setEnabled(false);
}
void Link11parts::on_pushButton_148_clicked() {//跳频图案编辑 粗同步跳频图案编辑
    QDialog *dialog = new QDialog(this);
    dialog->resize(800,300);
    QHBoxLayout *major = new QHBoxLayout;
    QVBoxLayout *Vlayout1 = new QVBoxLayout;
    QHBoxLayout *major1 = new QHBoxLayout;
    QVBoxLayout *Vlayout2 = new QVBoxLayout;
    QHBoxLayout *major3 = new QHBoxLayout;
    QLabel *lab_part1 = new QLabel("慢扫频点");
    QPlainTextEdit *PLtext = new QPlainTextEdit;
    QPushButton *btn1 =  new QPushButton("J频点随机生成");
    QPushButton *btn2 =  new QPushButton("16频点随机生成");
    QPushButton *btn3 =  new QPushButton("清空");
    QPushButton *btn4 =  new QPushButton("确定");
    QString sstr = "";
    int num =0;
    for(int i =0;i<32;i++) {
        num = l16_slow_fre.data()[2*i]*256 + l16_slow_fre.data()[2*i+1];
        sstr.append(QString::number(num));
        if(i!=31) {
            sstr.append(",");
        }
    }
    PLtext->appendPlainText(sstr);
    Vlayout1->addWidget(btn1);
    Vlayout1->addWidget(btn2);
    Vlayout1->addWidget(btn3);
    Vlayout1->addWidget(btn4);
    major->addWidget(lab_part1);
    major->addWidget(PLtext);
    Vlayout2->addLayout(major);
    Vlayout2->addLayout(major1);
    major3->addLayout(Vlayout2);
    major3->addLayout(Vlayout1);
    dialog->setWindowTitle("慢扫频点设置");
    dialog->setLayout(major3);
    dialog->setModal(true); //模态
    dialog->show();
    connect(btn1,&QPushButton::clicked,[=](){
        //这里J频点,1-58选32
        PLtext->clear();
        QString text;
        QVector<quint8> pot;
        for(quint8 i = 1;i<59;i++){
            pot.append(i);
        }
        quint8 where=0;
        for(quint8 i =0;i<32;i++){
            where =QRandomGenerator::global()->bounded(58-i);
            text.append(QString::number(pot.at(where)));
            if(i!=31)       //少打最后那个逗号
                text.append(",");
            pot.remove(where);
        }
        PLtext->appendPlainText(text);
    });
    connect(btn2,&QPushButton::clicked,[=](){
        PLtext->clear();
        QVector<qreal> pot;
        for(quint8 i = 0;i<51;i++){
            pot.append(959+5.32*i);
        }
        QString text;
        quint8 where=0;
        for(quint8 i =0;i<32;i++){
            where =QRandomGenerator::global()->bounded(51-i);
            text.append(QString::number(pot.at(where)));
            if(i!=31)       //少打最后那个逗号
                text.append(",");
            pot.remove(where);
        }
        PLtext->appendPlainText(text);
    });
    connect(btn3,&QPushButton::clicked,[=](){
        PLtext->clear();
    });
    connect(btn4,&QPushButton::clicked,[=](){
        //这里先写下发,然后删除内存,最后再关闭对话框
        QString fre_str =PLtext->toPlainText();
        QList<QString> fre_list = fre_str.split(",");
        l16_slow_fre.clear();
        for(int i =0;i<fre_list.length();i++) {
            l16_slow_fre.append((fre_list[i].toUShort())>>8);
            l16_slow_fre.append((fre_list[i].toUShort()));
        }
        qDebug()<<"slow_fre:"<<QString(l16_slow_fre.toHex());
        //释放空间
        dialog->close();
        delete lab_part1;
        delete PLtext;
        delete btn1;
        delete btn2;
        delete btn3;
        delete btn4;
        delete Vlayout1;
        delete major;
        delete dialog;
    });
}
void Link11parts::on_pushButton_149_clicked() {//消息字跳频图案编辑
    QDialog *dialog = new QDialog(NULL);
    dialog->resize(800,300);
    QHBoxLayout *major = new QHBoxLayout;
    QVBoxLayout *Vlayout1 = new QVBoxLayout;
    QHBoxLayout *major1 = new QHBoxLayout;
    QVBoxLayout *Vlayout2 = new QVBoxLayout;
    QHBoxLayout *major3 = new QHBoxLayout;
    QLabel *lab_part1 = new QLabel("工作频点");
    QPlainTextEdit *PLtext = new QPlainTextEdit;
    QPushButton *btn1 =  new QPushButton("J频点随机生成");
    QPushButton *btn2 =  new QPushButton("16频点随机生成");
    QPushButton *btn3 =  new QPushButton("清空");
    QPushButton *btn4 =  new QPushButton("确定");
    QString sstr = "";
    int num =0;
    for(int i =0;i<372;i++) {
        num = l16_const_fre.data()[2*i]*256 + l16_const_fre.data()[2*i+1];
        sstr.append(QString::number(num));
        if(i!=371) {
            sstr.append(",");
        }
    }
    PLtext->appendPlainText(sstr);
    Vlayout1->addWidget(btn1);
    Vlayout1->addWidget(btn2);
    Vlayout1->addWidget(btn3);
    Vlayout1->addWidget(btn4);
    major->addWidget(lab_part1);
    major->addWidget(PLtext);
    Vlayout2->addLayout(major);
    Vlayout2->addLayout(major1);
    major3->addLayout(Vlayout2);
    major3->addLayout(Vlayout1);
    dialog->setWindowTitle("工作频点设置");
    dialog->setLayout(major3);
    dialog->setModal(true);
    dialog->show();
    connect(btn1,&QPushButton::clicked,[=](){
        //这里就随机生成256个(1-58)的频点吧
        PLtext->clear();
        QString text;
        QVector<quint8> pot;
        for(quint8 i = 1;i<59;i++){
            pot.append(i);
        }
        quint8 where=0;
        for(quint16 i =0;i<372;i++){
            where =QRandomGenerator::global()->bounded(58);
            text.append(QString::number(pot.at(where)));
            if(i!=371)       //少打最后那个逗号
                text.append(",");
        }
        PLtext->appendPlainText(text);
    });
    connect(btn2,&QPushButton::clicked,[=](){
        //这里就随机生成256个(Link16)的频点吧
        PLtext->clear();
        QVector<qreal> pot;
        for(quint8 i = 0;i<51;i++){
            pot.append(959+5.32*i);
        }
        QString text;
        quint8 where=0;
        for(quint16 i =0;i<256;i++){
            where =QRandomGenerator::global()->bounded(51);
            text.append(QString::number(pot.at(where)));
            if(i!=255)       //少打最后那个逗号
                text.append(",");
        }
        PLtext->appendPlainText(text);
    });
    connect(btn3,&QPushButton::clicked,[=](){
        //清零
        PLtext->clear();
    });
    connect(btn4,&QPushButton::clicked,[=](){
        //这里先写下发,然后删除内存,最后再关闭对话框
        QString fre_str =PLtext->toPlainText();
        QList<QString> fre_list = fre_str.split(",");
        l16_const_fre.clear();
        for(int i =0;i<fre_list.length();i++) {
            l16_const_fre.append((fre_list[i].toUShort())>>8);
            l16_const_fre.append((fre_list[i].toUShort()));
        }
        qDebug()<<"const_fre:"<<QString(l16_const_fre.toHex());
        //释放空间
        dialog->close();
        delete lab_part1;
        delete PLtext;
        delete btn1;
        delete btn2;
        delete btn3;
        delete btn4;
        delete Vlayout1;
        delete major;
        delete dialog;
    });
}
void Link11parts::on_pushButton_151_clicked() {//精同步跳频图案编辑
    QDialog *dialog = new QDialog(NULL);
    dialog->resize(800,300);
    QHBoxLayout *major = new QHBoxLayout;
    QVBoxLayout *Vlayout1 = new QVBoxLayout;
    QHBoxLayout *major1 = new QHBoxLayout;
    QVBoxLayout *Vlayout2 = new QVBoxLayout;
    QHBoxLayout *major3 = new QHBoxLayout;
    QLabel *lab_part1 = new QLabel("精同步频点");
    QPlainTextEdit *PLtext = new QPlainTextEdit;
    QPushButton *btn1 =  new QPushButton("J频点随机生成");
    QPushButton *btn2 =  new QPushButton("16频点随机生成");
    QPushButton *btn3 =  new QPushButton("清空");
    QPushButton *btn4 =  new QPushButton("确定");
    QString sstr = "";
    int num =0;
    for(int i =0;i<8;i++) {
        num = l16_precise_fre.data()[2*i]*256 + l16_precise_fre.data()[2*i+1];
        sstr.append(QString::number(num));
        if(i!=7) {
            sstr.append(",");
        }
    }
    PLtext->appendPlainText(sstr);
    Vlayout1->addWidget(btn1);
    Vlayout1->addWidget(btn2);
    Vlayout1->addWidget(btn3);
    Vlayout1->addWidget(btn4);
    major->addWidget(lab_part1);
    major->addWidget(PLtext);
    Vlayout2->addLayout(major);
    Vlayout2->addLayout(major1);
    major3->addLayout(Vlayout2);
    major3->addLayout(Vlayout1);
    dialog->setWindowTitle("精同步频点设置");
    dialog->setLayout(major3);
    dialog->setModal(true);
    dialog->show();
    connect(btn1,&QPushButton::clicked,[=](){
        //这里J频点,1-58选32
        PLtext->clear();
        QString text;
        QVector<quint8> pot;
        for(quint8 i = 1;i<59;i++){
            pot.append(i);
        }
        quint8 where=0;
        for(quint8 i =0;i<8;i++){
            where =QRandomGenerator::global()->bounded(58-i);
            text.append(QString::number(pot.at(where)));
            if(i!=7)       //少打最后那个逗号
                text.append(",");
            pot.remove(where);
        }
        PLtext->appendPlainText(text);
    });
    connect(btn2,&QPushButton::clicked,[=](){
        PLtext->clear();
        QVector<qreal> pot;
        for(quint8 i = 0;i<51;i++){
            pot.append(959+5.32*i);
        }
        QString text;
        quint8 where=0;
        for(quint8 i =0;i<8;i++){
            where =QRandomGenerator::global()->bounded(51-i);
            text.append(QString::number(pot.at(where)));
            if(i!=7)       //少打最后那个逗号
                text.append(",");
            pot.remove(where);
        }
        PLtext->appendPlainText(text);
    });
    connect(btn3,&QPushButton::clicked,[=](){
        //这里写
        PLtext->clear();
    });
    connect(btn4,&QPushButton::clicked,[=](){
        //这里先写下发,然后删除内存,最后再关闭对话框
        QString fre_str =PLtext->toPlainText();
        QList<QString> fre_list = fre_str.split(",");
        l16_precise_fre.clear();
        for(int i =0;i<fre_list.length();i++) {
            l16_precise_fre.append((fre_list[i].toUShort())>>8);
            l16_precise_fre.append((fre_list[i].toUShort()));
        }
        qDebug()<<"precise_fre:"<<QString(l16_precise_fre.toHex());
        //释放空间
        dialog->close();
        delete lab_part1;
        delete PLtext;
        delete btn1;
        delete btn2;
        delete btn3;
        delete btn4;
        delete Vlayout1;
        delete major;
        delete dialog;
    });
}
void Link11parts::on_pushButton_66_clicked() {//跳频图案编辑 下发
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK16_jumpmap msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_jumpmap)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    memcpy(&msg.slowFre,l16_slow_fre.data(),64);
    memcpy(&msg.preciseFre,l16_precise_fre.data(),16);
    memcpy(&msg.dataFre,l16_const_fre.data(),744);
    msg.jumpMapEdit = ui->comboBox_222->currentIndex();
    msg.msgJumpMapEdit = ui->comboBox_223->currentIndex();
    msg.PreciseEdit = ui->comboBox_226->currentIndex();
    cmd.content = (char*)malloc(sizeof (Struct_LINK16_jumpmap));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK16_jumpmap));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_pushButton_97_clicked() {//跳频图案编辑  参数清除
    Struct_CommandMsg cmd;//定义报文体
    save_para_struct msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(save_para_struct)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    msg.command = 0x01;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (save_para_struct));
    memcpy(cmd.content, &msg, sizeof(save_para_struct));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"提示", "参数清除成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_pushButton_98_clicked() {//跳频图案编辑 参数保存
    Struct_CommandMsg cmd;//定义报文体
    save_para_struct msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(save_para_struct)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    msg.command = 0x00;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (save_para_struct));
    memcpy(cmd.content, &msg, sizeof(save_para_struct));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"提示", "参数保存成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_l16slotTypestart_currentIndexChanged(int index) {//时隙分配 时隙起始位下拉框
    ui->l16slotTypesend->setCurrentIndex(index);
}
void Link11parts::on_pushButton_146_clicked() {//时隙分配 分配
    QString text;
    text.append("时隙类型:"+ui->l16slottype->currentText() +";");
    text.append("起始位置标识:"+ui->l16slotTypestart->currentText()+";");
    text.append("起始位:"+QString::number(ui->l16slotStart->value())+";");
    text.append("截止位置标识:"+ui->l16slotTypesend->currentText()+";");
    text.append("截止位:"+QString::number(ui->l16slotEnd->value())+";");
    text.append("重复率:"+QString::number(ui->l16slotCircle->value()));
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK16_slot msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_slot)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    msg.slotInoutFlag = 0x00;
    msg.slottype = ui->l16slottype->currentIndex();
    msg.slotTypestart = ui->l16slotTypestart->currentIndex();
    msg.slotTypesend = ui->l16slotTypesend->currentIndex();
    msg.slotStart = ui->l16slotStart->text().toUInt();
    msg.slotStart = qToBigEndian(msg.slotStart);
    msg.slotEnd = ui->l16slotEnd->text().toUInt();
    msg.slotEnd = qToBigEndian(msg.slotEnd);
    msg.timeelement = ui->l16timeelement->text().toUInt();
    msg.timeframe = ui->l16timeframe->text().toUInt();
    msg.slotCircle = ui->l16slotCircle->text().toUInt();
    cmd.content = (char*)malloc(sizeof (Struct_LINK16_slot));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK16_slot));
    //调用协议类进行发送
    if(udpCliet->dealSend(cmd.GetQByteArray())) {
        setMessageBox(true,"通知","时隙分配成功");
    }
    ui->listWidget->addItem(text);
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_pushButton_150_clicked() {//时隙分配 清除
    if( ui->listWidget->currentIndex().column()<0) {
        setMessageBox(true,"提示","未选择清除项");
        return;
    }
    QListWidgetItem* item = ui->listWidget->currentItem();
    QString str="";
    Struct_CommandMsg cmd;//定义报文体
    Struct_LINK16_slot msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_slot)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    msg.slotInoutFlag = 0x01;
    if (item) {
        QStringList listtime = item->text().split(";");
        str = listtime[0].split(":")[1];
        for(int i =0;i<ui->l16slottype->count();i++) {
            if(ui->l16slottype->itemText(i)==str) {
                msg.slottype =i;
            }
        }
        str = listtime[1].split(":")[1];
        for(int i =0;i<ui->l16slotTypestart->count();i++) {
            if(ui->l16slotTypestart->itemText(i)==str) {
                msg.slotTypestart =i;
            }
        }
        str = listtime[2].split(":")[1];
        uint num = str.toUInt();
        msg.slotStart = num;
        msg.slotStart = qToBigEndian(msg.slotStart);
        str = listtime[3].split(":")[1];
        for(int i =0;i<ui->l16slotTypesend->count();i++) {
            if(ui->l16slotTypesend->itemText(i)==str) {
                msg.slotTypesend = i;
            }
        }
        str = listtime[4].split(":")[1];
        uint num1 = str.toUInt();
        msg.slotEnd = num1;
        msg.slotEnd = qToBigEndian(msg.slotEnd);
        str = listtime[5].split(":")[1];
        uint num2 = str.toUInt();
        msg.slotCircle =num2;
        msg.timeelement = 0xff;
        msg.timeframe =0xff;
        cmd.content = (char*)malloc(sizeof (Struct_LINK16_slot));
        memcpy(cmd.content, &msg, sizeof(Struct_LINK16_slot));
        //调用协议类进行发送
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","时隙清除成功");
        delete item;
        free(cmd.content);
        cmd.content=NULL;
    }
}
void Link11parts::on_pushButton_147_clicked() {//时隙分配 全部清除
    ui->listWidget->clear();
    Struct_CommandMsg cmd;
    Struct_LINK16_slot msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_LINK16_slot)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    msg.slotInoutFlag = 0x03;
    cmd.content = (char*)malloc(sizeof (Struct_LINK16_slot));
    memcpy(cmd.content, &msg, sizeof(Struct_LINK16_slot));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","时隙全部清除成功");
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_pushButton_35_clicked() {//消息格式 生成
    Struct_CommandMsg cmd;//定义报文体
    jmessage_send_struct msg;//定义报文数据内容
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    int len1,len2;
    char *buf = new char[102];
    memset(buf,0,102);
    uchar *dealbuf = new uchar[1024];
    uchar *desbuf = new uchar[1024];
    memset(dealbuf,0,1024);
    memset(desbuf,0,1024);
    len1 =  hexstringtochar(ui->l16StartWord->toPlainText(),buf);
    dealbuf[0] = len1;
    memcpy(dealbuf+5,buf,len1);
    len2 =  hexstringtochar(ui->l16ContinueWord->toPlainText(),buf);
    dealbuf[1] = len2;
    memcpy(dealbuf+len1+5,buf,len2);
    msg.send_num =0x01;
    msg.send_num = qToBigEndian( msg.send_num);
    dealbuf[2]= ui->l16Jn->text().toUInt();
    dealbuf[3] = ui->l16Jm->text().toUInt();
    dealbuf[4] =  ui->l16C->text().toUInt();
    int bytecount =  GetJmessArray(dealbuf,desbuf);
    hexstringtochar(ui->l16DesNum->text(),buf);
    msg.pathNo = (buf[1]<<8)|buf[0];
    cmd.length =sizeof(Struct_CommandMsg)+bytecount+sizeof(jmessage_send_struct)-sizeof(msg.message)-sizeof(cmd.content);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(bytecount+sizeof(jmessage_send_struct)-sizeof(msg.message));
    memcpy(cmd.content, &msg, sizeof(jmessage_send_struct)-sizeof(msg.message));
    memcpy(cmd.content+sizeof(jmessage_send_struct)-sizeof(msg.message), desbuf, bytecount);
    QByteArray sendmessage16 = cmd.GetQByteArray();
    QByteArray disbyte;
    ui->plainTextEdit_34->clear();
    QString str="";
    for(int i =0;i<bytecount;i++) {
        str+= QString("%1").arg(desbuf[i], 2, 16,QChar('0'));
        if(i!=(bytecount-1))
            str+=" ";
    }
    ui->plainTextEdit_34->appendPlainText(str);
    // udpServe.dealSend(sendmessage16);
    delete[] buf;
    delete[] dealbuf;
    delete[] desbuf;
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_pushButton_36_clicked() {//消息格式  下发
    Struct_CommandMsg cmd;//定义报文体
    jmessage_send_struct msg;//定义报文数据内容
    //报文内容赋值
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    int len1,len2;
    char *buf = new char[102];
    uchar *dealbuf = new uchar[1024];
    uchar *desbuf = new uchar[1024];
    len1 =  hexstringtochar(ui->l16StartWord->toPlainText(),buf);
    dealbuf[0] = len1;
    memcpy(dealbuf+5,buf,len1);
    len2 =  hexstringtochar(ui->l16ContinueWord->toPlainText(),buf);
    dealbuf[1] = len2;
    memcpy(dealbuf+len1+5,buf,len2);
    //    memcpy(dealbuf+len1,buf,len2);
    msg.send_num =0x01;
    msg.send_num = qToBigEndian( msg.send_num);
    dealbuf[2]= ui->l16Jn->text().toUInt();
    dealbuf[3] = ui->l16Jm->text().toUInt();
    dealbuf[4] =  ui->l16C->text().toUInt();
    int bytecount =  GetJmessArray(dealbuf,desbuf);
    msg.message_type = ui->l16MessageType->currentIndex();
    hexstringtochar(ui->l16DesNum->text(),buf);
    msg.pathNo = (buf[1]<<8)|buf[0];
    cmd.length =sizeof(Struct_CommandMsg)+bytecount+sizeof(jmessage_send_struct)-sizeof(msg.message)-sizeof(cmd.content);
    if(bytecount>1000) {
        setMessageBox(true,"数据输入过多，最大1000字节","数据为：" + QString::number(bytecount));
        return;
    }
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(bytecount+sizeof(jmessage_send_struct)-sizeof(msg.message));
    memcpy(cmd.content, &msg, sizeof(jmessage_send_struct)-sizeof(msg.message));
    memcpy(cmd.content+sizeof(jmessage_send_struct)-sizeof(msg.message), desbuf, bytecount);
    QByteArray sendmessage16 = cmd.GetQByteArray();
    QByteArray disbyte;
    ui->plainTextEdit_34->clear();
    QString str="";
    for(int i =0;i<bytecount;i++) {
        str+= QString("%1").arg(desbuf[i], 2, 16,QChar('0'));
        if(i!=(bytecount-1))
            str+=" ";
    }
    ui->plainTextEdit_34->appendPlainText(str);
    udpCliet->dealSend(sendmessage16);
    delete[] buf;
    delete[] dealbuf;
    delete[] desbuf;
    free(cmd.content);
    cmd.content=NULL;
}
void Link11parts::on_l16MessageType_currentIndexChanged(int index) {//设置数据 报文类型下拉框
    switch(index) {
    case 0:
        break;
    case 1: {
        ui->l16Jn->setValue(0);
        ui->l16Jm->setValue(0);
        ui->l16C->setValue(0);
    }
    break;
    case 2: {
        ui->l16Jn->setValue(0);
        ui->l16Jm->setValue(3);
        ui->l16C->setValue(0);
    }
    break;
    case 3: {
        ui->l16Jn->setValue(1);
        ui->l16Jm->setValue(1);
        ui->l16C->setValue(0);
    }
    break;
    case 4: {
        ui->l16Jn->setValue(1);
        ui->l16Jm->setValue(4);
        ui->l16C->setValue(0);
    }
    break;
    case 5: {
        ui->l16Jn->setValue(2);
        ui->l16Jm->setValue(2);
        ui->l16C->setValue(1);
    }
    break;
    case 6: {
        ui->l16Jn->setValue(3);
        ui->l16Jm->setValue(7);
        ui->l16C->setValue(1);
    }
    break;
    case 7: {
        ui->l16Jn->setValue(4);
        ui->l16Jm->setValue(2);
        ui->l16C->setValue(1);
    }
    break;
    default:
        break;
    }
}
void Link11parts::on_pushButton_70_clicked() {//设置数据 发送
    Struct_CommandMsg cmd;//定义报文体
    jmessage_send_struct msg;//定义报文数据内容
    //报文内容赋值
    char *buf = new char[1024];
    msg.send_num =ui->l16SenNUm->text().toUInt();
    msg.send_num = qToBigEndian( msg.send_num);
    msg.message_type = ui->l16MessageType->currentIndex();
    hexstringtochar(ui->l16DesNum->text(),buf);
    msg.pathNo = (buf[1]<<8)|buf[0];
    int mes_len =  hexstringtochar(ui->plainTextEdit_34->toPlainText(),buf);
    if(mes_len>1000) {
        setMessageBox(true,"数据输入过多，最大1000字节","数据为：" + QString::number(mes_len));
        return;
    }
    cmd.length =sizeof(Struct_CommandMsg)+mes_len+sizeof(jmessage_send_struct)-sizeof(msg.message)-sizeof(cmd.content);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(mes_len+sizeof(jmessage_send_struct)-sizeof(msg.message));
    memcpy(cmd.content, &msg, sizeof(jmessage_send_struct)-sizeof(msg.message));
    memcpy(cmd.content+sizeof(jmessage_send_struct)-sizeof(msg.message), buf, mes_len);
    QByteArray sendmessage16 = cmd.GetQByteArray();
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    sendmessage16 = cmd.GetQByteArray();
    if(ui->l16Current->isChecked()==true) {
        QTimer* timeSendCycle16 = timeSendCycleMap[simNowID];
        if(timeSendCycle16 == nullptr) {
            timeSendCycle16 = new QTimer();
            timeSendCycleMap[simNowID] = timeSendCycle16;
        }
        if(timeSendCycle16->isActive())
            return;
        timeUdpMap[simNowID] = udpCliet;
        udpcliet* nowUdp = timeUdpMap[simNowID];
        uint sendAll16 = ui->l16SenPc->text().toUInt();
        int proPkgNum = send16PkgNumMap[simNowID];
        connect(timeSendCycle16,&QTimer::timeout,[=](){
            uint senndNum16 = send16PkgNumMap[simNowID];
            if(senndNum16<(sendAll16+proPkgNum)) {
                senndNum16++;
                nowUdp->dealSend(sendmessage16);
                ui->l16SendCount->setText(QString::number(senndNum16));
            } else {
                timeSendCycle16->stop();
                //                senndNum16 =0;
                timeUdpMap.remove(simNowID);
                timeSendCycleMap.remove(simNowID);
            }
            send16PkgNumMap[simNowID] = senndNum16;
        });
        timeSendCycle16->start(ui->l16CurrentTime->value());
    } else {
        //单独发送
        uint senndNum16 = send16PkgNumMap[simNowID];
        senndNum16++;
        udpCliet->dealSend(sendmessage16);
        ui->l16SendCount->setText(QString::number(senndNum16));
        send16PkgNumMap[simNowID] = senndNum16;
    }
}
void Link11parts::on_pushButton_71_clicked() {//设置数据 暂停
    QTimer* timeSendCycle16 = timeSendCycleMap[simNowID];
    timeSendCycle16->stop();
    timeUdpMap.remove(simNowID);
    timeSendCycleMap.remove(simNowID);
}
void Link11parts::on_pushButton_72_clicked() {//设置数据 清理
    send16PkgNumMap[simNowID] = 0;
    ui->l16SendCount->setText("0");
}
void Link11parts::on_checkBox_61_clicked(bool checked) {//测试模式
    Struct_CommandMsg cmd;
    TTnttest_model_struct msg;//定义报文数据内容
    //报文内容赋值
    char *buf = new char[1024];
    int mes_len =  hexstringtochar(ui->l16TestMessage->toPlainText(),buf);
    char* testL16Array = new char[1024];
    memset(testL16Array,0,1024);
    memcpy(testL16Array,buf,mes_len);
    //    int testL16MessLen = mes_len;
    if(mes_len>1000) {
        setMessageBox(true,"数据输入过多，最大1000字节","数据为：" + QString::number(mes_len));
        return;
    }
    cmd.length =sizeof(Struct_CommandMsg)+mes_len+sizeof(TTnttest_model_struct)-sizeof(msg.message)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_LINK16;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    if(checked) {
        msg.command = 0x01;
        cmd.content = (char*)malloc(mes_len+sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content, &msg,sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content+sizeof(TTnttest_model_struct)-sizeof(msg.message), buf,mes_len);
        ui->plainTextEdit_34->clear();
        ui->plainTextEdit_34->appendPlainText(ui->l16TestMessage->toPlainText());
        //调用协议类进行发送
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","测试数据发送成功");
    } else {
        msg.command = 0x00;
        cmd.content = (char*)malloc(mes_len+sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content, &msg,sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content+sizeof(TTnttest_model_struct)-sizeof(msg.message), buf,mes_len);
        ui->plainTextEdit_34->clear();
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","退出测试模式成功");
    }
    delete[] buf;
}
//TTNT
void Link11parts::on_pushButton_48_clicked() {//配置
    setCommonModel(Struct_CommandMsg::ENUM_WAVE_TTNT,ui->comboBox_38->currentIndex()
                   ,ui->spinBox_50->text().toInt());
}
void Link11parts::on_pushButton_32_clicked() {//波道存储
    QString filePath = "D:/c++/txtFile/TTNT/channel" + QString::number(simNowID) + ".txt";
    QString channelName = "channel"+QString::number(ui->spinBox_50->value());//波道号
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    int select = QMessageBox::information(this,"存储波道参数","是否将参数存储到波道"+QString::number(ui->spinBox_50->value()),QMessageBox::Ok|QMessageBox::Cancel);
    switch (select) {
    case QMessageBox::Ok:
        file->setValue(channelName+"/ttntWorkType",QString::number(ui->ttntWorkType->currentIndex()));//工作模式
        file->setValue(channelName+"/ttntSrcAddr",QString::number(ui->ttntSrcAddr->value()));//本机地址
        file->setValue(channelName+"/ttntDesAddr",QString::number(ui->ttntDesAddr->value()));//目的地址
        file->setValue(channelName+"/ttntSpeedModel",QString::number(ui->ttntSpeedModel->currentIndex()));//速率模式
        file->setValue(channelName+"/ttntNetNum",QString::number(ui->ttntNetNum->currentIndex()));//网号
        file->setValue(channelName+"/ttntTrace",ui->ttntTrace->text());//本机航迹号
        file->setValue(channelName+"/ttntNetType",QString::number(ui->ttntNetType->currentIndex()));//网络模式
        file->setValue(channelName+"/ttntSendCurrent",QString::number(ui->ttntSendCurrent->value()));//发送周期(ms)
        file->setValue(channelName+"/ttntRouteConfig",QString::number(ui->ttntRouteConfig->currentIndex()));//路由配置
        file->setValue(channelName+"/ttntStatisCycle",QString::number(ui->ttntStatisCycle->value()));//信息负载统计周期T(ms)
        file->setValue(channelName+"/ttntParam",ui->ttntParam->text());//交织参数
        file->setValue(channelName+"/ttntPnOverBit",ui->ttntPnOverBit->text());//PNOverLayBit
        file->setValue(channelName+"/ttntSynPn",QString::number(ui->ttntSynPn->currentIndex()));//同步PN
        file->setValue(channelName+"/ttntIp",ui->ttntIp->text());//端机IP地址
        file->setValue(channelName+"/ttntScrectSlect",QString::number(ui->ttntScrectSlect->currentIndex()));//跳频密钥
        file->setValue(channelName+"/ttntFreList",QString::number(ui->ttntFreList->currentIndex()));//跳频表号
        break;
    case QMessageBox::Cancel: qDebug()<<"Cancel";break;
    default:break;
    }
    delete file;
}
void Link11parts::on_pushButton_50_clicked() {
    QString filePath = "D:/c++/txtFile/TTNT/channel" + QString::number(simNowID) + ".txt";
    QSettings *file = new QSettings(filePath,QSettings::IniFormat);
    QString channelName = "channel"+QString::number(ui->spinBox_50->value());
    QString keyName = channelName+"/workMode";
    int select = QMessageBox::information(NULL,"是否加载波道?","是否加载波道"+QString::number(ui->spinBox_50->value()),QMessageBox::Ok|QMessageBox::Cancel);
    if(select == QMessageBox::Ok){
        bool isQsettingKeyExit = file->contains(keyName);
        if(isQsettingKeyExit){
            qDebug()<<channelName<<"存在";
            ui->ttntWorkType->setCurrentIndex(file->value(channelName+"/ttntWorkType").toInt());//工作模式
            ui->ttntSrcAddr->setValue(file->value(channelName+"/ttntSrcAddr").toInt());//本机地址
            ui->ttntDesAddr->setValue(file->value(channelName+"/ttntDesAddr").toInt());//目的地址
            ui->ttntSpeedModel->setCurrentIndex(file->value(channelName+"/ttntSpeedModel").toInt());//速率模式
            ui->ttntNetNum->setCurrentIndex(file->value(channelName+"/ttntNetNum").toInt());//网号
            ui->ttntTrace->setText(file->value(channelName+"/ttntTrace").toString());//本机航迹号
            ui->ttntNetType->setCurrentIndex(file->value(channelName+"/ttntNetType").toInt());//网络模式
            ui->ttntSendCurrent->setValue(file->value(channelName+"/ttntSendCurrent").toInt());//发送周期(ms)
            ui->ttntRouteConfig->setCurrentIndex(file->value(channelName+"/ttntRouteConfig").toInt());//路由配置
            ui->ttntStatisCycle->setValue(file->value(channelName+"/ttntStatisCycle").toInt());//信息负载统计周期T(ms)
            ui->ttntParam->setText(file->value(channelName+"/ttntParam").toString());//交织参数
            ui->ttntPnOverBit->setText(file->value(channelName+"/ttntPnOverBit").toString());//PNOverLayBit
            ui->ttntSynPn->setCurrentIndex(file->value(channelName+"/ttntSynPn").toInt());//同步PN
            ui->ttntIp->setText(file->value(channelName+"/ttntIp").toString());//端机IP地址
            ui->ttntScrectSlect->setCurrentIndex(file->value(channelName+"/ttntScrectSlect").toInt());//跳频密钥
            ui->ttntFreList->setCurrentIndex(file->value(channelName+"/ttntFreList").toInt());//跳频表号
        }
        else{
            qDebug()<<channelName<<"不存在";
            QMessageBox::information(NULL,"该波道并未存储","该波道并未存储",QMessageBox::Ok);
        }
    }
    delete file;
}
void Link11parts::on_pushButton_6_clicked() {//工作频点
    QDialog *dialog = new QDialog;
    QVBoxLayout *major = new QVBoxLayout;
    QHBoxLayout *layout1 =new QHBoxLayout;
    QHBoxLayout *layout2 =new QHBoxLayout;
    QHBoxLayout *layout3 =new QHBoxLayout;
    QHBoxLayout *layout4 =new QHBoxLayout;
    if(ui->ttntWorkType->currentIndex()==1||ui->ttntWorkType->currentIndex()==2||ui->ttntWorkType->currentIndex()==3||ui->ttntWorkType->currentIndex()==7||ui->ttntWorkType->currentIndex()==8||ui->ttntWorkType->currentIndex()==9||ui->ttntWorkType->currentIndex()==10||ui->ttntWorkType->currentIndex()==11){
        QRadioButton *radio1 = new QRadioButton("1");
        QRadioButton *radio2 = new QRadioButton("2");
        QRadioButton *radio3 = new QRadioButton("3");
        QRadioButton *radio4 = new QRadioButton("4");
        QRadioButton *radio5 = new QRadioButton("5");
        QRadioButton *radio6 = new QRadioButton("6");
        QRadioButton *radio7 = new QRadioButton("7");
        QRadioButton *radio8 = new QRadioButton("8");
        QRadioButton *radio9 = new QRadioButton("9");
        QRadioButton *radio10 = new QRadioButton("10");
        QRadioButton *radio11 = new QRadioButton("11");
        QRadioButton *radio12 = new QRadioButton("12");
        QRadioButton *radio13 = new QRadioButton("13");
        QRadioButton *radio14 = new QRadioButton("14");
        QRadioButton *radio15 = new QRadioButton("15");
        QRadioButton *radio16 = new QRadioButton("16");
        QRadioButton *radio17 = new QRadioButton("17");
        QRadioButton *radio18 = new QRadioButton("18");
        QRadioButton *radio19 = new QRadioButton("19");
        QRadioButton *radio20 = new QRadioButton("20");
        QRadioButton *radio21 = new QRadioButton("21");
        layout1->addWidget(radio1);
        layout1->addWidget(radio2);
        layout1->addWidget(radio3);
        layout1->addWidget(radio4);
        layout1->addWidget(radio5);
        layout1->addWidget(radio6);
        layout1->addWidget(radio7);
        layout2->addWidget(radio8);
        layout2->addWidget(radio9);
        layout2->addWidget(radio10);
        layout2->addWidget(radio11);
        layout2->addWidget(radio12);
        layout2->addWidget(radio13);
        layout2->addWidget(radio14);
        layout3->addWidget(radio15);
        layout3->addWidget(radio16);
        layout3->addWidget(radio17);
        layout3->addWidget(radio18);
        layout3->addWidget(radio19);
        layout3->addWidget(radio20);
        layout3->addWidget(radio21);
        QPushButton *btn1 = new QPushButton("确认选择");
        layout4->addItem(new QSpacerItem(1,1,QSizePolicy::Expanding));
        layout4->addWidget(btn1);
        layout4->addItem(new QSpacerItem(1,1,QSizePolicy::Expanding));
        major->addLayout(layout1);
        major->addLayout(layout2);
        major->addLayout(layout3);
        major->addLayout(layout4);
        dialog->setWindowTitle("工作频点选择");
        dialog->setLayout(major);
        dialog->setModal(true);
        dialog->show();
        for(int i =0;i<TTNTWorkfre.count();i++) {
            QList<QRadioButton*> buttons = dialog->findChildren<QRadioButton*>();
            for (QRadioButton* button : buttons) {
                if((button->text().toUInt())==(uint)(TTNTWorkfre.data()[i]))
                    button->setChecked(true);
            }
        }
        connect(btn1,&QPushButton::clicked,[=](){
            //先处理该选择的地方
            //然后释放空间
            QList<QRadioButton*> buttons = dialog->findChildren<QRadioButton*>();
            // 打印控件名称
            for (QRadioButton* button : buttons) {
                if(button->isChecked()) {
                    TTNTWorkfre.clear();
                    TTNTWorkfre.append(button->text().toUInt());
                }
            }
            delete radio1;
            delete radio2;
            delete radio3;
            delete radio4;
            delete radio5;
            delete radio6;
            delete radio7;
            delete radio8;
            delete radio9;
            delete radio10;
            delete radio11;
            delete radio12;
            delete radio13;
            delete radio14;
            delete radio15;
            delete radio16;
            delete radio17;
            delete radio18;
            delete radio19;
            delete radio20;
            delete radio21;
            delete layout1;
            delete layout2;
            delete layout3;
            delete layout4;
            delete major;
            delete dialog;
        });
    } else if(ui->ttntWorkType->currentIndex()==0||ui->ttntWorkType->currentIndex()==6){
        QCheckBox *radio1 = new QCheckBox("1");
        QCheckBox *radio2 = new QCheckBox("2");
        QCheckBox *radio3 = new QCheckBox("3");
        QCheckBox *radio4 = new QCheckBox("4");
        QCheckBox *radio5 = new QCheckBox("5");
        QCheckBox *radio6 = new QCheckBox("6");
        QCheckBox *radio7 = new QCheckBox("7");
        QCheckBox *radio8 = new QCheckBox("8");
        QCheckBox *radio9 = new QCheckBox("9");
        QCheckBox *radio10 = new QCheckBox("10");
        QCheckBox *radio11 = new QCheckBox("11");
        QCheckBox *radio12 = new QCheckBox("12");
        QCheckBox *radio13 = new QCheckBox("13");
        QCheckBox *radio14 = new QCheckBox("14");
        QCheckBox *radio15 = new QCheckBox("15");
        QCheckBox *radio16 = new QCheckBox("16");
        QCheckBox *radio17 = new QCheckBox("17");
        QCheckBox *radio18 = new QCheckBox("18");
        QCheckBox *radio19 = new QCheckBox("19");
        QCheckBox *radio20 = new QCheckBox("20");
        QCheckBox *radio21 = new QCheckBox("21");
        layout1->addWidget(radio1);
        layout1->addWidget(radio2);
        layout1->addWidget(radio3);
        layout1->addWidget(radio4);
        layout1->addWidget(radio5);
        layout1->addWidget(radio6);
        layout1->addWidget(radio7);
        layout2->addWidget(radio8);
        layout2->addWidget(radio9);
        layout2->addWidget(radio10);
        layout2->addWidget(radio11);
        layout2->addWidget(radio12);
        layout2->addWidget(radio13);
        layout2->addWidget(radio14);
        layout3->addWidget(radio15);
        layout3->addWidget(radio16);
        layout3->addWidget(radio17);
        layout3->addWidget(radio18);
        layout3->addWidget(radio19);
        layout3->addWidget(radio20);
        layout3->addWidget(radio21);
        QPushButton *btn1 = new QPushButton("确认选择");
        layout4->addItem(new QSpacerItem(1,1,QSizePolicy::Expanding));
        layout4->addWidget(btn1);
        layout4->addItem(new QSpacerItem(1,1,QSizePolicy::Expanding));
        major->addLayout(layout1);
        major->addLayout(layout2);
        major->addLayout(layout3);
        major->addLayout(layout4);
        dialog->setWindowTitle("工作频点选择");
        dialog->setLayout(major);
        dialog->setModal(true);
        dialog->show();
        for(int i =0;i<TTNTWorkfre.count();i++) {
            QList<QCheckBox*> buttons = dialog->findChildren<QCheckBox*>();
            for (QCheckBox* button : buttons) {
                if((button->text().toUInt())==(uint)(TTNTWorkfre.data()[i]))
                    button->setChecked(true);
            }
        }
        connect(btn1,&QPushButton::clicked,[=](){
            //先处理该选择的地方
            //然后释放空间
            QList<QCheckBox*> buttons = dialog->findChildren<QCheckBox*>();
            TTNTWorkfre.clear();
            // 打印控件名称
            for (QCheckBox* button : buttons) {
                if(button->isChecked()) {
                    TTNTWorkfre.append(button->text().toUInt());
                }
            }
            if(TTNTWorkfre.count()!=15) {
                int display = TTNTWorkfre.count();
                TTNTWorkfre.clear();
                QMessageBox::warning(NULL,"频点数错误", "频点数："+ QString::number(display) ,QMessageBox::Ok);
            } else {
                delete radio1;
                delete radio2;
                delete radio3;
                delete radio4;
                delete radio5;
                delete radio6;
                delete radio7;
                delete radio8;
                delete radio9;
                delete radio10;
                delete radio11;
                delete radio12;
                delete radio13;
                delete radio14;
                delete radio15;
                delete radio16;
                delete radio17;
                delete radio18;
                delete radio19;
                delete radio20;
                delete radio21;
                delete layout1;
                delete layout2;
                delete layout3;
                delete layout4;
                delete major;
                delete dialog;
            }
        });
    }
}
void Link11parts::on_pushButton_108_clicked() {//工作参数 参数下发
    Struct_CommandMsg cmd;//定义报文体
    Struct_work_param msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_work_param)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    msg.workMode = ui->ttntWorkType->currentIndex();
    if(TTNTWorkfre.length()>0&&TTNTWorkfre.length()<=15) {
        memcpy(&msg.workFre,TTNTWorkfre,TTNTWorkfre.length());
    }
    if(TTNTWorkfre.length()>15) {
        memcpy(&msg.workFre,TTNTWorkfre,15);
    }
    QStringList iplist = ui->ttntIp->text().split(".");
    msg.speedType = ui->ttntSpeedModel->currentIndex();
    msg.srcAddr = ui->ttntSrcAddr->text().toUInt();
    msg.desAddr = ui->ttntDesAddr->text().toUInt();
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_work_param));
    memcpy(cmd.content, &msg, sizeof(Struct_work_param));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
}
void Link11parts::on_pushButton_7_clicked() {//导入路由表
    QDialog *dialog = new QDialog;
    dialog->setWindowTitle("路由配置");//采用流程图
    QHBoxLayout *layout1 =new QHBoxLayout;
    QLineEdit *line_edit = new QLineEdit;
    QPushButton *m_pushbutton = new QPushButton("确定");
    layout1->addWidget(line_edit);
    layout1->addWidget(m_pushbutton);
    dialog->setLayout(layout1);
    dialog->setModal(true);
    dialog->show();
    QString line_str = "";
    for(int i=0;i<TTNT_hand_route.length()-1;i++) {
        line_str +=QString::number(TTNT_hand_route.data()[i]);
        line_str +=',';
    }
    line_str +=QString::number(TTNT_hand_route.data()[7]);
    line_edit->setText(line_str);
    connect(m_pushbutton,&QPushButton::clicked,[=](){
        QString str_a = line_edit->text();
        QStringList str_arry = str_a.split(',');
        if(str_arry.length()!=8) {
            QMessageBox::warning(NULL,"路由节点错误", "节点数："+ QString::number(str_arry.length()) ,QMessageBox::Ok);
        } else {
            TTNT_hand_route.clear();
            for(int i =0;i<8;i++) {
                TTNT_hand_route.append( str_arry[i].toUInt());
            }
            delete line_edit;
            delete m_pushbutton;
            delete layout1;
            delete dialog;
        }
    });
}
void Link11parts::on_pushButton_101_clicked() {//网络设置 参数下发
    Struct_CommandMsg cmd;//定义报文体
    Struct_net_param msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_net_param)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    int len1 =0;
    char *buf = new char[1024];
    len1 =  hexstringtochar(ui->ttntTrace->text(),buf);
    msg.pathNo[0] = buf[0];
    msg.pathNo[1] = buf[1];
    msg.netNum = ui->ttntNetNum->currentIndex();
    msg.routConfig = ui->ttntRouteConfig->currentIndex();
    msg.netNumber =    ui->ttntNetType->currentIndex();
    msg.statiscycle = ui->ttntStatisCycle->text().toUShort();
    msg.statiscycle = qToBigEndian(msg.statiscycle);
    msg.sendcurrent = ui->ttntSendCurrent->text().toUShort();
    msg.sendcurrent = qToBigEndian(msg.sendcurrent);
    memset(msg.rout_para,0,8);
    for(int i=0;i<TTNT_hand_route.length();i++)
        msg.rout_para[i]=TTNT_hand_route[i];
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_net_param));
    memcpy(cmd.content, &msg, sizeof(Struct_net_param));
    delete[] buf;
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数下发成功");
}
void Link11parts::on_pushButton_81_clicked() {//初始化参数 参数下发
    Struct_CommandMsg cmd;//定义报文体
    Struct_init_param msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_init_param)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    int len1,len2;
    char *buf = new char[1024];
    len1 =  hexstringtochar(ui->ttntParam->text(),buf);
    memcpy(&msg.param,buf,len1);
    len2 =  hexstringtochar(ui->ttntPnOverBit->text(),buf);
    memcpy(&msg.pnOverBit,buf,len2);
    msg.syn_pn = ui->ttntSynPn->currentIndex();
    QStringList iplist = ui->ttntIp->text().split(".");
    for(int i=0;i<4;i++) {
        msg.ipAddress[i] = iplist[i].toUInt();
    }
    msg.fre_list = ui->ttntFreList->currentIndex();
    msg.jumpScrect = ui->ttntScrectSlect->currentIndex();
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_init_param));
    memcpy(cmd.content, &msg, sizeof(Struct_init_param));
    delete[] buf;
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
}
void Link11parts::on_pushButton_92_clicked() {//初始化参数 参数注入
    {
        QDialog *dialog = new QDialog;
        QVBoxLayout *major = new QVBoxLayout;
        QHBoxLayout *layout1 =new QHBoxLayout;
        QHBoxLayout *layout2 =new QHBoxLayout;
        QHBoxLayout *layout3 =new QHBoxLayout;
        QLabel *lab_part1 = new QLabel("频表号注入：");
        QLabel *lab_part2 = new QLabel("同步PN注入：");
        QLabel *lab_part3 = new QLabel("密钥号注入：");
        QComboBox *combox1 = new QComboBox;
        for(int i =0;i<20;i++) {
            combox1->addItem("注入频表"+QString::number(i));
        }
        QComboBox *combox2 = new QComboBox;
        combox2->addItems({"2M同步PN","2ML同步PN","1M同步PN","500K同步PN","250K同步PN","注入全部"});
        QComboBox *combox3 = new QComboBox;
        combox3->addItems({"注入密钥:1","注入密钥:2","注入密钥:3","注入密钥:4","注入密钥:5","注入全部"});
        QPlainTextEdit *PLtext1 = new QPlainTextEdit;
        QPlainTextEdit *PLtext2 = new QPlainTextEdit;
        QPlainTextEdit *PLtext3 = new QPlainTextEdit;
        PLtext1->appendPlainText("1,2,3,4,5,6,7,8,9,10,11,12");
        PLtext2->appendPlainText("01 02 03 04 05 06 07 08");
        PLtext3->appendPlainText("01 02 03 04 05 06 07 08");
        QPushButton *btn1 =  new QPushButton("注入");
        QPushButton *btn2 =  new QPushButton("注入");
        QPushButton *btn3 =  new QPushButton("注入");
        layout1->addWidget(lab_part1);
        layout1->addWidget(PLtext1);
        layout1->addWidget(combox1);
        layout1->addWidget(btn1);
        layout2->addWidget(lab_part2);
        layout2->addWidget(PLtext2);
        layout2->addWidget(combox2);
        layout2->addWidget(btn2);
        layout3->addWidget(lab_part3);
        layout3->addWidget(PLtext3);
        layout3->addWidget(combox3);
        layout3->addWidget(btn3);
        major->addLayout(layout1);
        major->addLayout(layout2);
        major->addLayout(layout3);
        dialog->setWindowTitle("参数注入");
        dialog->setLayout(major);
        dialog->setModal(true);
        dialog->show();
        connect(dialog,&QDialog::destroyed,[=]() {
            delete lab_part1;
            delete lab_part2;
            delete lab_part3;
            delete PLtext1;
            delete PLtext2;
            delete PLtext3;
            delete combox1;
            delete combox2;
            delete combox3;
            delete btn1;
            delete btn2;
            delete btn3;
            delete layout1;
            delete layout2;
            delete layout3;
            delete major;
            delete dialog;
        });
        connect(btn1,&QPushButton::clicked,[=]() {
            Struct_CommandMsg cmd;//定义报文体
            Struct_TTNT_JunmpFreIn msg;//定义报文数据内容
            //报文内容赋值
            cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_TTNT_JunmpFreIn)-sizeof(cmd.content);
            cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
            msg.fre_num =combox1->currentIndex() ;
            QList<QString> fre_list = PLtext1->toPlainText().split(",");
            for(int i=0;i<fre_list.length();i++) {
                msg.fre_list[i] = fre_list[i].toUInt();
            }
            cmd.header = qToBigEndian(cmd.header);
            cmd.length =qToBigEndian(cmd.length);
            cmd.content = (char*)malloc(sizeof (Struct_TTNT_JunmpFreIn));
            memcpy(cmd.content, &msg, sizeof(Struct_TTNT_JunmpFreIn));
            //调用协议类进行发送
            setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数注入成功");
        });
        connect(btn2,&QPushButton::clicked,[=]() {
            Struct_CommandMsg cmd;//定义报文体
            Struct_TTNT_SynPn msg;//定义报文数据内容
            //报文内容赋值
            cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
            msg.syntype =combox2->currentIndex() ;
            char *buf = new char[1024];
            int len1=hexstringtochar(PLtext2->toPlainText(),buf);
            msg.len = len1;
            msg.len = qToBigEndian(msg.len);
            msg.message =  (uchar*)malloc(len1);
            memcpy(msg.message,buf,len1);
            cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_TTNT_SynPn)-sizeof(msg.message)+len1-sizeof(cmd.content);
            cmd.header = qToBigEndian(cmd.header);
            cmd.length =qToBigEndian(cmd.length);
            cmd.content = (char*)malloc(sizeof (Struct_TTNT_SynPn)-sizeof(msg.message)+len1);
            memcpy(cmd.content, &msg, sizeof(Struct_TTNT_SynPn)-sizeof(msg.message));
            memcpy(cmd.content+sizeof(Struct_TTNT_SynPn)-sizeof(msg.message),msg.message,len1);
            //调用协议类进行发送
            setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数注入成功");
            delete [] buf;
        });
        connect(btn3,&QPushButton::clicked,[=]() {
            Struct_CommandMsg cmd;//定义报文体
            Struct_TTNT_ScrectIn msg;//定义报文数据内容
            //报文内容赋值
            cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
            msg.secrecttype =combox3->currentIndex() ;
            char *buf = new char[1024];
            int len1=hexstringtochar(PLtext3->toPlainText(),buf);
            msg.len = len1;
            msg.len = qToBigEndian(msg.len);
            msg.message =  (uchar*)malloc(len1);
            memcpy(msg.message,buf,len1);
            cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_TTNT_ScrectIn)-sizeof(msg.message)+len1-sizeof(cmd.content);
            cmd.header = qToBigEndian(cmd.header);
            cmd.length =qToBigEndian(cmd.length);
            cmd.content = (char*)malloc(sizeof (Struct_TTNT_ScrectIn)-sizeof(msg.message)+len1);
            memcpy(cmd.content, &msg, sizeof(Struct_TTNT_ScrectIn)-sizeof(msg.message));
            memcpy(cmd.content+sizeof(Struct_TTNT_ScrectIn)-sizeof(msg.message),msg.message,len1);
            //调用协议类进行发送
            setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数注入成功");
            delete [] buf;
        });
    }
}
void Link11parts::on_pushButton_99_clicked() {//初始化参数 参数清除
    Struct_CommandMsg cmd;//定义报文体
    save_para_struct msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(save_para_struct)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    msg.command = 0x01;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (save_para_struct));
    memcpy(cmd.content, &msg, sizeof(save_para_struct));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数清除成功");
}
void Link11parts::on_pushButton_100_clicked() {//初始化参数 参数保存
    Struct_CommandMsg cmd;//定义报文体
    save_para_struct msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(save_para_struct)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    msg.command = 0x00;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (save_para_struct));
    memcpy(cmd.content, &msg, sizeof(save_para_struct));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数保存成功");
}
void Link11parts::on_pushButton_59_clicked() {//战术数据 发送
    Struct_CommandMsg cmd;//定义报文体
    Struct_TTNT_Message msg;//定义报文数据内容
    //报文内容赋值
    char *buf = new char[1024];
    msg.send_num =ui->ttntSendNum->text().toUInt();
    msg.send_num = qToBigEndian( msg.send_num);
    msg.message_type = ui->ttntMessageType->currentIndex();
    msg.messagePri = ui->ttntMessageprisend->currentIndex();
    int mes_len =  hexstringtochar(ui->plainTextEdit_35->toPlainText(),buf);
    if(mes_len>1000) {
        QMessageBox::information(NULL,"数据输入过多，最大1000字节", "数据为：" + QString::number(mes_len),QMessageBox::Ok);
        return;
    }
    cmd.length =sizeof(Struct_CommandMsg)+mes_len+sizeof(Struct_TTNT_Message)-sizeof(msg.message)-sizeof(cmd.content);
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(mes_len+sizeof(Struct_TTNT_Message)-sizeof(msg.message));
    memcpy(cmd.content, &msg, sizeof(Struct_TTNT_Message)-sizeof(msg.message));
    memcpy(cmd.content+sizeof(Struct_TTNT_Message)-sizeof(msg.message), buf, mes_len);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    QByteArray sendmessagettnt = cmd.GetQByteArray();
    if(ui->checkBox_8->isChecked()==true) {
        QTimer* timeSendCycleTtnt = timeSendCycleMap[simNowID];
        if(timeSendCycleTtnt == nullptr) {
            timeSendCycleTtnt = new QTimer();
            timeSendCycleMap[simNowID] = timeSendCycleTtnt;
        }
        if(timeSendCycleTtnt->isActive())
            return;
        timeUdpMap[simNowID] = udpCliet;
        udpcliet* nowUdp = timeUdpMap[simNowID];
        uint sendAllttnt = ui->ttntSendPc->text().toUInt();
        int proPkgNum = sendttntPkgNumMap[simNowID];
        connect(timeSendCycleTtnt,&QTimer::timeout,[=](){
            uint senndNumttnt = sendttntPkgNumMap[simNowID];
            if(senndNumttnt<(sendAllttnt+proPkgNum)) {
                senndNumttnt++;
                if(nowUdp->dealSend(sendmessagettnt))
                    ui->lineEdit_41->setText(QString::number(senndNumttnt));
            } else {
                timeSendCycleTtnt->stop();
                //                senndNumttnt =0;
                timeUdpMap.remove(simNowID);
                timeSendCycleMap.remove(simNowID);
            }
            sendttntPkgNumMap[simNowID] = senndNumttnt;
        });
        timeSendCycleTtnt->start(ui->ttntSendTime->value());
    } else {
        uint senndNumttnt = sendttntPkgNumMap[simNowID];
        senndNumttnt++;
        sendttntPkgNumMap[simNowID] = senndNumttnt;
        if(udpCliet->dealSend(sendmessagettnt))
            ui->lineEdit_41->setText(QString::number(senndNumttnt));
    }
}
void Link11parts::on_pushButton_93_clicked() {//战术数据 暂停
    QTimer* timeSendCycleTtnt = timeSendCycleMap[simNowID];
    timeSendCycleTtnt->stop();
    timeUdpMap.remove(simNowID);
    timeSendCycleMap.remove(simNowID);
}
void Link11parts::on_pushButton_95_clicked() {//战术数据 清空
    sendttntPkgNumMap[simNowID] = 0;
    ui->lineEdit_41->setText("0");
}
void Link11parts::on_checkBox_60_clicked(bool checked) {//测试模式
    Struct_CommandMsg cmd;
    TTnttest_model_struct msg;//定义报文数据内容
    //报文内容赋值
    char *buf = new char[1024];
    int mes_len =  hexstringtochar(ui->ttntTestMessage->toPlainText(),buf);
    memset(testTTNTArray,0,1024);
    memcpy(testTTNTArray,buf,mes_len);
    testTTNTMessLen = mes_len;
    if(mes_len>1000) {
        QMessageBox::information(NULL,"数据输入过多，最大1000字节", "数据为：" + QString::number(mes_len),QMessageBox::Ok);
        return;
    }
    cmd.length =sizeof(Struct_CommandMsg)+mes_len+sizeof(TTnttest_model_struct)-sizeof(msg.message)-sizeof(cmd.content);
    cmd.waveType = Struct_CommandMsg::ENUM_WAVE_TTNT;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    if(checked) {
        msg.command = 0x01;
        cmd.content = (char*)malloc(mes_len+sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content, &msg,sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content+sizeof(TTnttest_model_struct)-sizeof(msg.message), buf,mes_len);
        ui->plainTextEdit_35->clear();
        ui->plainTextEdit_35->appendPlainText(ui->ttntTestMessage->toPlainText());
        //调用协议类进行发送
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","测试数据发送成功");
    } else {
        msg.command = 0x00;
        cmd.content = (char*)malloc(mes_len+sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content, &msg,sizeof(TTnttest_model_struct)-sizeof(msg.message));
        memcpy(cmd.content+sizeof(TTnttest_model_struct)-sizeof(msg.message), buf,mes_len);
        ui->plainTextEdit_35->clear();
        //调用协议类进行发送
        setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","退出测试模式成功");
    }
    delete[] buf;
}

void Link11parts::setCommonModel(uchar waveType, int confType, int waveNo) {
    Struct_CommandMsg cmd;//定义报文体
    Struct_COMMON_model msg;//定义报文数据内容
    //报文内容赋值
    cmd.length =sizeof(Struct_CommandMsg)+sizeof(Struct_COMMON_model)-sizeof(cmd.content);
    cmd.waveType = waveType;
    msg.confType = confType;
    msg.waveNo = waveNo;
    cmd.header = qToBigEndian(cmd.header);
    cmd.length =qToBigEndian(cmd.length);
    cmd.content = (char*)malloc(sizeof (Struct_COMMON_model));
    memcpy(cmd.content, &msg, sizeof(Struct_COMMON_model));
    //调用协议类进行发送
    setMessageBox(udpCliet->dealSend(cmd.GetQByteArray()),"通知","参数配置成功");
    free(cmd.content);
    cmd.content=NULL;
}
int Link11parts::hexstringtochar(QString ssttrr, char *aadr) {
    int counnt=0;
    bool ok;
    ssttrr = ssttrr.trimmed().simplified();
    ssttrr.remove("0x");
    QStringList sl = ssttrr.split(" ");
    foreach(QString s, sl) {
        if(s!="") {char c = s.toInt(&ok,16)&0xFF;
            aadr[counnt]=c;
            counnt++;
        }
    }
    return counnt;
}
void Link11parts::setMessageBox(bool isResult,QString str1,QString str2) {
    if(isResult) {
        QMessageBox *m_box = new QMessageBox(QMessageBox::Information,QString(str1),QString(str2),QMessageBox::Ok);
        QTimer::singleShot(1000,m_box,SLOT(accept()));
        m_box->exec();
        delete m_box;
    }
}
