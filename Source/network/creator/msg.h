#ifndef MSG_H
#define MSG_H

#include <QString>
#include <QtEndian>

//结构体按1字节对齐
#pragma pack(1)

//----------结构体定义--------//
//原定义发送报文结构体
typedef struct Struct_CommandMsg{
    //报文头
    uint header = 0xE7557E55;
    //报文序号
    ushort msgNo=0x00;
    //报文长度（总长度）
    ushort length;
    //波形类型
    uchar waveType;
    //数据正文
    char *content;
    //校验(8位异或和校验)
    uchar crc;
    //报文尾
    uint tail = 0XAAAAAAAA;

    //波形类型枚举
    enum ENUM_codeType{ENUM_WAVE_NORMALIM = 0x00,      //常规模拟波形
                       ENUM_WAVE_NORMALJUMP = 0x01,    //常规定跳扩波形
                       ENUM_WAVE_LINK4A = 0x02,        //Link4A
                       ENUM_WAVE_LINK11 = 0x03,        //Link11
                       ENUM_WAVE_LINK16 = 0x04,        //Link16
                       ENUM_WAVE_TTNT = 0x05,          //TTNT
                       ENUM_WAVE_SSINCGARS = 0x06,     //SSINCGARS
                       ENUM_WAVE_SSINCGARS2 = 0x07,    //SSINCGARS
                       ENUM_WAVE_EPLARS = 0x08,        //EPLARS
                       ENUM_WAVE_PLATPARAM = 0x09};    //平台参数

    Struct_CommandMsg()
    {
//        header = 0xeb90;
//        code_type = 0;
//        lenght = 0;
//        no = 0;
//        source_ID = 0;
//        dest_ID = 0;
//        crc = 0;
//        content = NULL;
    }

    Struct_CommandMsg(const QByteArray& data)//msg转为commandmsg
    {
        int offset = 0;
        memcpy(&header, data.data(), sizeof(header));
        offset += sizeof(header);
        //报文序号
        memcpy(&msgNo, data.data()+offset, sizeof(msgNo));
        offset+=sizeof(msgNo);
        //报文长度（总长度）
        memcpy(&length, data.data()+offset, sizeof(length));
        length = qFromBigEndian(length);
        offset+=sizeof(length);
        //波形类型
        memcpy(&waveType, data.data()+offset, sizeof(waveType));
        offset+=sizeof(waveType);
        //消息内容
        if(length!=14){
            content = (char*)malloc(length-14);
            memset(content, 0, length-14);
            memcpy(content, data.data()+offset, length-14);
            offset+=length;
        }
        else{
            content=NULL;
        }
        memcpy(&crc,data.data()+offset,sizeof(crc));
        offset+=sizeof(crc);
        memcpy(&tail, data.data()+offset, sizeof(tail));
    }

    QByteArray GetQByteArray()//获取data，并拷贝校验
    {
        QByteArray data;

        ushort len = qFromBigEndian(length);

        data.resize(len);
        data.fill(0);

        int offset = sizeof(Struct_CommandMsg)-sizeof(content)-sizeof(crc)-sizeof(tail);

        memcpy(data.data(), this, offset);
        memcpy(data.data() + offset, content, len-14);

        crc = GetCrc(data);

        offset += len-14;
        memcpy(data.data() + offset, &crc, sizeof(crc));
        offset += sizeof(crc);
        memcpy(data.data() + offset, &tail, sizeof(tail));

        return data;
    }

    short GetCrc(QByteArray data)//计算校验值
    {
        uchar crcLocal = 0;
        for(ushort i = 0; i < data.size() - sizeof(crc); i++){
            if(i == 0){
                crcLocal = data[i];
            }else{
                crcLocal ^= data[i];
            }
        }
        return crcLocal;
    }

    ~Struct_CommandMsg(){
        if(content && length){
            free(content);
            content = NULL;
        }
    }
}Struct_CommandMsg;


typedef struct Struct_Update_Software
{
    uchar msgType = 0x0C;
    uchar type;
    uchar *message;


}Struct_Update_Software;


//配置模式
typedef struct Struct_COMMON_model{
    uchar msgType = 0x00;
    uchar confType;
    uchar waveNo;
}Struct_COMMON_model;

//频率参数配置
typedef struct Struct_COMMON_fre{
    uchar msgType = 0x01;
    ushort fre;//uint fre;
}Struct_COMMON_fre;

//战术数据帧
typedef struct Struct_COMMON_data{
    uchar msgType = 0xE0;
    ushort pkgnum;
    uchar dataType;
    //数据正文
    char *content;
}Struct_COMMON_data;

//测试模式
typedef struct Struct_COMMON_test{
    uchar msgType = 0xF2;
    uchar testMode;
}Struct_COMMON_test;

/*********Link4A波形定义**********/
//配置模式
typedef struct Struct_LINK4A_model{
    uchar msgType = 0x00;
    uchar confType;
    uchar waveNo;
}Struct_LINK4A_conf;

//频率参数配置
typedef struct Struct_LINK4A_fre{
    uchar msgType = 0x01;
    ushort fre;
}Struct_LINK4A_fre;

/*********Link4A波形定义**********/
//主要参数配置
typedef struct Struct_LINK4A_param{
    uchar msgType = 0x02;
    uchar workMode;
    uchar localhost;
    uchar master;
    ushort callcircle;
    uchar symbol;
    uint FSK;
}Struct_LINK4A_param;

//数据查询
typedef struct Struct_LINK4A_datareq{
    uchar msgType = 0xC1;
}Struct_LINK4A_datareq;

//数据查询回复
typedef struct Struct_LINK4A_dataresp{
    uchar msgType = 0xC2;
    uchar no;
    uchar codeerror;
    uchar pkgerror;
    uchar noise;
    uchar status;
}Struct_LINK4A_dataresp;

//定时上报
typedef struct Struct_LINK4A_circlemsg{
    uchar msgType = 0xC3;

    //??为什么经纬高要各7字节
    uint lng;
    uint lat;
    uint hight;
}Struct_LINK4A_circlemsg;

//战术数据帧
typedef struct Struct_LINK4A_data{
    uchar msgType = 0xE0;
    ushort pkgnum;
    uchar dataType;
    //数据正文
    char *content;
}Struct_LINK4A_data;

//消息上传帧
typedef struct Struct_LINK4A_dataup{
    uchar msgType = 0xE1;
    //数据正文
    char *content;
}Struct_LINK4A_dataup;

//解校验前数据
typedef struct Struct_LINK4A_beforecheck{
    uchar msgType = 0xE2;
    //数据正文
    char *content;
}Struct_LINK4A_beforecheck;

//译码前数据
typedef struct Struct_LINK4A_beforetanslate{
    uchar msgType = 0xE3;
    //数据正文
    char *content;
}Struct_LINK4A_beforetanslate;

//保存/清空参数
typedef struct Struct_LINK4A_paramset{
    uchar msgType = 0xF0;
    uchar setparam;
}Struct_LINK4A_paramset;






/*********Link11波形定义**********/
//主要参数配置
typedef struct Struct_LINK11_param{
    uchar msgType = 0x02;
    uchar singleVoice;
    uchar workMode;
    uchar localhost;
    uchar callhost;
    uchar hanMingCode;
    uchar master;
    uint FMgap;
    uint tracksNum;
    uchar twiceModul;
    //帧结构
    uchar frameStruct;
    //符号映射
    uchar symbolMapping;
}Struct_LINK11_param;

//添加入网
typedef struct Struct_LINK11_joinNetWorK{
    uchar msgType = 0xF4;
    //新入PU码
    uchar PUcode;
    //时隙片长度
    ushort stepLen;
    //时隙片个数
    uchar stepNum;
}Struct_LINK11_joinNetWorK;

//清除入网
typedef struct Struct_LINK11_cleanNetWorK{
    uchar msgType = 0xF5;
    uchar PUcode;
}Struct_LINK11_cleanNetWorK;

//开始轮询
typedef struct Struct_LINK11_startRequest{
    uchar msgType = 0xF6;
    uchar flagReq;
}Struct_LINK11_startRequest;

/*********Link16波形定义**********/
//主要参数配置
typedef struct Struct_LINK16_param{
    uchar msgType = 0x02;
    uchar netNo;
    uchar netnum;
    uchar netStruct;
    uchar workMode;
    ushort pathNo;
    uchar relay;
    uchar NTRflag;
    ushort relayNo;
}Struct_LINK16_param;

//网络结构配置
typedef struct Struct_LINK16_netstruct
{
    uchar msgType = 0x03;
    uint msgSecretVar;
    uint tansSecretVar;
    uchar netNo;
    uchar netStruct;
}Struct_LINK16_netstruct;

/*********Link16波形定义**********/
//配置模式
typedef struct Struct_LINK16_model{
    uchar msgType = 0x00;
    uchar confType;
    uchar waveNo;
}Struct_LINK16_conf;

//频率参数配置
typedef struct Struct_LINK16_fre{
    uchar msgType = 0x01;
    uchar model;
    ushort fre;
}Struct_LINK16_fre;


//脉冲配置
typedef struct Struct_LINK16_pulse
{
    uchar msgType = 0x03;
    uchar pkgMode;
    uchar pulseWidth;
    uchar pulseInterval;
    short delay;
    short mainFreDiff;
    uchar shake;
}Struct_LINK16_pulse;
//加密参数配置
typedef struct Struct_LINK16_secrect
{
    uchar msgType = 0x04;
    char *msgSecretVar;
    char *tansSecretVar;

}Struct_LINK16_secrect;
//跳频图案配置
typedef struct Struct_LINK16_jumpmap
{
    uchar msgType = 0x05;
    uchar jumpMapEdit;
    uchar PreciseEdit;
   // uint jumpMap;
    uchar msgJumpMapEdit;
   // uint msgJumpMap;
    uchar slowFre[64];
    uchar preciseFre[16];
    uchar dataFre[744];


}Struct_LINK16_jumpmap;

//时隙配置
typedef struct Struct_LINK16_slot
{
    uchar msgType = 0x06;
    uchar slotInoutFlag;
    uchar slottype;
    uchar slotCircle;
    uchar slotTypestart;
    ushort slotStart;
    uchar slotTypesend;
    ushort slotEnd;
    uchar timeelement;
    uchar timeframe;

}Struct_LINK16_slot;


//网络状态
typedef struct Struct_LINK16_netstatus
{
    uchar msgType = 0xE4;
    uchar status;
    uint netTime;
}Struct_LINK16_netstatus;

//网络拓扑
typedef struct Struct_LINK16_nettopology
{
    uchar msgType = 0xF1;
    //网络拓扑
    char *content;
}Struct_LINK16_nettopology;


//数据查询
typedef struct search_struct
{
    uchar msgType = 0xC1;

}search_struct;

//数据查询回复
typedef struct search_reply_struct
{
    uchar msgType = 0xC2;
    uint wrong_bit ;
    uint wrong_pack;
    uchar noise_radio;
    uchar send_state;

}search_reply_struct;

//定时上报
typedef struct time_reply_struct
{
    uchar msgType = 0xC3;
    uint lon ;
    uint lat;
    uchar height;

}time_reply_struct;
//J数据帧
typedef struct jmessage_send_struct
{
    uchar msgType = 0xe0;
    ushort send_num=0x00;
    uchar message_type;
    ushort pathNo;
    char *message;
}jmessage_send_struct;
//j消息上传帧
typedef struct jmessage_recv_struct
{
    uchar msgType = 0xe1;
    uchar start_len;
    uchar continue_len;
    uchar jn_signal;
    uchar jm_signal;
    uchar continue_signal;
    char *message_start;
    char *message_continue;
}jmessage_recv_struct;
//解校验前数据
typedef struct un_checked_message_struct
{
    uchar msgType = 0xe2;
    uchar *message;
}un_checked_message_struct;
//译码前数据
typedef struct un_decode_message_struct
{
    uchar msgType = 0xe3;
    uchar *message;
}un_decoed_message;
//保存/清空参数
typedef struct save_para_struct
{
    uchar msgType = 0xf0;
    uchar command;
}save_para_struct;
//测试模式
typedef struct TTnttest_model_struct
{
    uchar msgType = 0xf2;
    uchar command;
    ushort sendnum;
    uchar *message;
}TTnttest_model_struct;
typedef struct test_model_struct
{
    uchar msgType = 0xf2;
    uchar command;
    ushort sendnum;
    uchar *message;
}test_model_struct;
/*********TTNT波形定义**********/
//配置模式
typedef struct Struct_TTNT_model{
    uchar msgType = 0x00;
    uchar confType;
    uchar waveNo;
}Struct_TTNT_conf;



//工作参数配置
typedef struct Struct_work_param{
     uchar msgType = 0x01;
       uchar workMode;
       uchar workFre[15];
       uchar srcAddr;
       uchar desAddr;
       uchar speedType;
}Struct_work_param;
//网络参数配置
typedef struct Struct_net_param{
     uchar msgType = 0x02;
    uchar netNum;
    uchar pathNo[2];
    uchar netNumber;
    ushort sendcurrent;
    uchar routConfig;
    ushort statiscycle;
    uchar rout_para[8];
}Struct_net_param;
//初始化参数配置
typedef struct Struct_init_param{
     uchar msgType = 0x03;
    uchar param[8];
    //PN Overlay Bit
    uchar pnOverBit[8];
    uchar syn_pn;
    uchar ipAddress[4];
    uchar jumpScrect;
    uchar fre_list;
}Struct_init_param;
//主要参数配置
typedef struct Struct_TTNT_param{
    uchar msgType = 0x01;
    //工作模式
    uchar workMode;
    //频表号
    uchar fre_list;
    //工作频点

    uchar workFre[15];
    //交织参数
    uchar param[8];
    //PN Overlay Bit
    uchar pnOverBit[8];
    uchar syn_pn;
    uchar ipAddress[4];
    uchar speedType;
    uchar jumpScrect;
    uchar srcAddr;
    uchar desAddr;
    uchar pathNo[2];
    uchar netNum;
    uchar routConfig;
    uchar netNumber;


}Struct_TTNT_param;

//频表注入
typedef struct Struct_TTNT_JunmpFreIn{
    uchar msgType = 0x04;
    uchar fre_num;
    uchar fre_list[12];
}Struct_TTNT_JunmpFreIn;
//同步PN注入
typedef struct Struct_TTNT_SynPn{
    uchar msgType = 0x05;
    uchar syntype;
    ushort len;
    uchar *message;
}Struct_TTNT_SynPn;

//秘钥注入
typedef struct Struct_TTNT_ScrectIn{
    uchar msgType = 0x06;
    uchar secrecttype;
    ushort len;
    uchar *message;
}Struct_TTNT_ScrectIn;

//战术数据帧
typedef struct Struct_TTNT_Message{
    uchar msgType = 0xe0;
    ushort send_num=0x00;
    uchar messagePri;
    uchar message_type;
    char *message;
}Struct_TTNT_Message;
//消息上传帧

//解校验前数据

//译码前数据

//保存/清空参数

//测试模式


/**********平台设置***********/
//频率

//单载波
typedef struct Struct_SignalWave{
    uchar msgType = 0x04;       //单载波测试帧
    uchar SignalWaveSwitch;
}Struct_SignalWave;

//DA输出功率 静默开关
typedef struct Struct_BasicSetting{
    uchar msgType = 0x01;       //基本参数设置
    uchar LoaclPhyAddr;
    char OutPutPower;
    uchar SilenceSwitch;
}Struct_BasicSetting;

//时钟模式
//音量控制

/*********常规波形定义**********/

/*******常规模拟********/
//主要参数配置
typedef struct Struct_NORMAL_param{
    uchar msgType = 0x02;

    uchar workMode;
    uchar AMpercent;
    uchar FMpercent;
    uchar nosieSwitch;
    uchar nosieParam;
    uchar sigleVoice;
    uchar PTT;

}Struct_NORMAL_param;


/*******常规数字********/

//主要参数配置
typedef struct Struct_NORMALJUMP_NET_param{
    uchar msgType = 0x01;

    uchar localhost;
    uchar desthost;
    uchar master;
    uchar netNum;
    uchar netConf;
    uchar sumWorkTime;
    uchar nodeWorkTime;
    uchar relay;
    ushort timeLen;

}Struct_NORMALJUMP_NET_param;

//跳频频表选择帧
typedef struct Struct_JUMPFRECHOICE_param{
    uchar msgType = 0x09;

    ushort tableNum;

}Struct_JUMPFRECHOICE_param;

//跳频频表注入帧
typedef struct Struct_JUMPFRESET_param{
    uchar msgType = 0x0A;

    uchar tableNum;
    ushort freNum;
    uchar pkgSum;
    uchar pkgNum;
    char* content;

}Struct_JUMPFRESET_param;

//抗干扰措施选择帧
typedef struct Struct_ANTI_DISTURB_param{
    uchar msgType = 0x02;

    uchar num;
    uchar type;
}Struct_ANTI_DISTURB_param;

//频率参数配置
typedef struct Struct_NORMALJUMP_fre{
    uchar msgType = 0x04;
    //常规波形频率字节为4字节 区别于其他波形
    uint fre;
}Struct_NORMALJUMP_fre;

//调制方式
typedef struct Struct_NORMALJUMP_modul{
    uchar msgType = 0x06;

    ushort modulType;
}Struct_NORMALJUMP_modul;

//信道编码
typedef struct Struct_NORMALJUMP_code{
    uchar msgType = 0x0E;
    uchar code;
}Struct_NORMALJUMP_code;

//扩频码类型配置
typedef struct Struct_NORMALJUMP_extend{
    uchar msgType = 0x0C;
    uchar type;
    ushort length;
    char content[128];
}Struct_NORMALJUMP_extend;

//结构体字节对齐结束
#pragma pack()

#endif // MSG_H
