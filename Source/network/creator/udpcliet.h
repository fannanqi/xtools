#ifndef UDPCLIET_H
#define UDPCLIET_H

#include <QObject>
#include <QUdpSocket>
class udpcliet : public QObject
{
    Q_OBJECT
public:
    explicit udpcliet(QObject *parent = nullptr);
private:
    QUdpSocket *udpexa;
    QHostAddress localIp;//本地ip
    QHostAddress destIp;//远程ip
    quint16 localPort;//本地端口
    quint16 destPort;//远程端口
     QByteArray recvData;//接收数据
public:
     //初始化udp
    bool initudp(QString srcIP,QString srcPort,QString desIp,QString desPort);
    bool initudp2(QString desIp,QString desPort);//初始化udp-不包含本地ip、端口
    void endudp();//接收udp
    int dealSend(QByteArray sendData);//发送数据
    void dealRecv();//接收数据
    QByteArray hexStringToByteArray(QString str);//16进制转byte
signals:
    void sendMem (QByteArray sendData);//这里就定时发送这个信号过去吧
};

#endif // UDPCLIET_H
