#include "udpcliet.h"

udpcliet::udpcliet(QObject *parent) : QObject(parent)
{

}

bool udpcliet::initudp(QString srcIP, QString srcPort, QString desIp, QString desPort)
{
    localIp = QHostAddress(srcIP);
    localPort  =srcPort.toUInt();
    destIp =QHostAddress(desIp);
    destPort = desPort.toUInt();


    bool ret = false;
    udpexa= new QUdpSocket(this);
    ret = udpexa->bind(localIp,localPort,QAbstractSocket::DefaultForPlatform);
    if(!ret)
        qDebug()<<"local recv bind failed";
    else{
        qDebug()<<"local recv bind success";
        connect(udpexa,&QUdpSocket::readyRead,this,&udpcliet::dealRecv);
    }
    return ret;
}
bool udpcliet::initudp2(QString desIp,QString desPort) {
    destIp =QHostAddress(desIp);
    destPort = desPort.toUInt();
    udpexa= new QUdpSocket(this);
    qDebug()<<"local recv bind success";
    connect(udpexa,&QUdpSocket::readyRead,this,&udpcliet::dealRecv);
    return true;
}

void udpcliet::endudp()
{
    if(udpexa) {
        disconnect(udpexa,&QUdpSocket::readyRead,this,&udpcliet::dealRecv);
        udpexa->close();
        udpexa->deleteLater();  // 释放对象资源
        udpexa = nullptr;  // 防止悬挂指针
    }
}

int udpcliet::dealSend(QByteArray sendData)
{
    qDebug() <<__FILE__<<__LINE__<<"发送数据内容:"<<sendData.toHex();
    return(udpexa->writeDatagram(sendData,destIp,destPort));
}

void udpcliet::dealRecv()
{
    //    qDebug()<<"recv:";
    //recvData.resize(recv->hasPendingDatagrams());
    QHostAddress RemoteIp;
      while(udpexa->hasPendingDatagrams())
      {
        recvData.resize(udpexa->pendingDatagramSize());
         udpexa->readDatagram(recvData.data(),recvData.size());

      }

    //recv->readDatagram(recvData.data(),recvData.size(),&RemoteIp,&RemotePort);
      //  qDebug()<<QString(recvData.toHex(' '));    //这个打印处理出来就是ascii对应的值
    //    qDebug()<<recvData.data();              //这个打印出来就是对应的字符串
    emit sendMem(recvData);
    //后面去处理接收

}

QByteArray udpcliet::hexStringToByteArray(QString str)
{
    QByteArray byteArr;
    str = str.replace(" ", ""); //去空格
    if (0 != (str.size() % 2)) {
        str.insert(str.size() - 1, '0'); //不是2的倍数 给最后一个补0 例如: a0 8 ,凑成 a0 08
    }

    for (int nIndex = 0; nIndex < str.size(); nIndex += 2) {
        char ch = QString(str[nIndex]).toInt(nullptr,16) * 16 + QString(str[nIndex + 1]).toInt(nullptr,16);
        byteArr.append(ch);
    }
    return byteArr;
}
