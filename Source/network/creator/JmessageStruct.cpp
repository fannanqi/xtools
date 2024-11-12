/*
 * Link11_manage.c
 *
 *  Created on: 2023骞�5鏈�31鏃�
 *      Author: 719
 */

#include"JmessageStruct.h"
#include"string.h"
#include"stdio.h"


void uchartoBit(uchar* src ,uchar* res,int srclen)
{

	for(int i=0;i<srclen;i++)
	{
		for(int j =0;j<8;j++)
		{
			res[8*i+j] = (src[i]>>(7-j))&0x01;
		}
	}
}
uchar Bittouchar(uchar* src ,uchar* res,int srclen)
{

	if(srclen%8==0)
	{
		for(int i =0;i<srclen/8;i++)
		{
			res[i] =0;
			for(int j =0;j<8;j++)
			{
				res[i] |= (src[8*i+j]<<(7-j));
			}
		//	printf("%d\r\n",res[i]);
		}
		return srclen/8;
	}
	else
	{
		for(int i =0;i<(srclen/8+1);i++)
				{
					res[i] =0;
					for(int j =0;j<8;j++)
					{
						res[i] |= (src[8*i+j]<<(7-j));
					}
				//	printf("%d\r\n",res[i]);
				}
				return srclen/8+1;
	}
}


int GetJmessArray(uchar* src,uchar* resbuf)//绫诲瀷5锛�6
{
	int movecount =0;
	int movecount1=0;
	int movecount2 =0;
	int messagelen1 = src[0];
	int messagelen2 = src[1];
	int type1 = src[2];
	int type2 = src[3];
	int type3 = src[4];
	movecount +=5;
	uchar buff1[1024] = {0};
	uchar buff2[2048] = {0};
	uchar buff3[1024] = {0};
	uchar buff4[1024] = {0};
	memset(&buff1,0,sizeof(buff1));
	memset(&buff2,0,sizeof(buff2));
	memset(&buff3,0,sizeof(buff3));
	memset(&buff4,0,sizeof(buff4));
	int len1 =0;
	int count=0;
	uchar* bitbuf = (uchar*)&buff1;
	uchar* bitbuf1 = (uchar*)&buff3;
	uchar* res=(uchar*)&buff2;
	uchartoBit(src+movecount, bitbuf, messagelen1);
	uchartoBit(src+movecount+messagelen1, bitbuf1, messagelen2);
	int cnum=messagelen1*8;
	int cnum1=messagelen2*8;
	uchar bigtype[5] = {0};
	uchar littletype[3] = {0};
	uchar messagelen[3] = {0};
	uchar contype[5] = {0};
	bigtype[0] = (type1>>4)&0x01;
	bigtype[1] = (type1>>3)&0x01;
	bigtype[2] = (type1>>2)&0x01;
	bigtype[3] = (type1>>1)&0x01;
	bigtype[4] = (type1)&0x01;

	littletype[0] = (type2>>2)&0x01;
	littletype[1] = (type2>>1)&0x01;
	littletype[2] = (type2)&0x01;

	contype[0] = (type3>>4)&0x01;
	contype[1] = (type3>>3)&0x01;
	contype[2] = (type3>>2)&0x01;
	contype[3] = (type3>>1)&0x01;
	contype[4] = (type3)&0x01;

	res[0] = 0x00;
	res[1] = 0x00;
	uchar Addleng[2] = {0x01,0x00};
	uchar conleng[2] = {0x00,0x01};
//	Addleng[0] = 0x01;
//	Addleng[1] = 0x00;
	memcpy(res+2,(uchar*)&bigtype,5);
	memcpy(res+7,(uchar*)&littletype,3);
	while(cnum>0)
	{
		if(count==0)
		{
			cnum -=57;
			memcpy(res+13,bitbuf+movecount1,57);

			movecount1 = movecount1 +57;
			count++;
		}
		else
		{
			cnum -=68;
			memcpy(res+70*count,&Addleng,2);
			memcpy(res+70*count+2,bitbuf+movecount1,68);
			movecount1 = movecount1 +68;
			count++;
		}
	}
	while(cnum1>0)
		{
			cnum1 -=63;
			memcpy(res+70*count,&conleng,2);
			memcpy(res+70*count+2,&contype,5);
			memcpy(res+70*count+7,bitbuf1+movecount2,63);
			movecount2 = movecount2 +63;
			count++;
		}
	 messagelen[0] = ((count-1)>>2)&0x01;
	 messagelen[1] = ((count-1)>>1)&0x01;
	 messagelen[2] = ((count-1))&0x01;
	 memcpy(res+10,&messagelen,3);
	len1 = Bittouchar(res, resbuf, 70*count);
	return len1;

}

int DealJmessArry(uchar* src,uchar* resbuf,int srclen)
{
	int movecount =0;
	int movecount1 =0;
	int movecount2 =0;
	
	uchar buffer1[2048];
	uchar buffer2[1024];
	uchar buffer3[1024];

	uchar* bitbuf = (uchar*)&buffer1;
	uchar dealbuf[70];
	int countnum =0;
	uchar* res = (uchar*)&buffer2;
	uchar* res1 = (uchar*)&buffer3;
    memset(bitbuf,0,2048);
    memset(res,0,1024);
    memset(res1,0,1024);


	uchartoBit(src, bitbuf, srclen);
	memcpy((uchar*)&dealbuf,bitbuf,70);
	movecount +=70;
	int bytenum1 =0;
	int bytenum2 =0;


	memcpy(res,&dealbuf[13],57);
	bytenum1 +=57;
	movecount1+=57;
	uchar typebuf[5];
	uchar* type =(uchar*)&typebuf;
	type[0] = dealbuf[2]*16+dealbuf[3]*8+dealbuf[4]*4+dealbuf[5]*2+dealbuf[6];
	type[1] = dealbuf[7]*4+dealbuf[8]*2+dealbuf[9];
    type[2] =0;
	countnum = dealbuf[10]*4+dealbuf[11]*2 +dealbuf[12];
    int coun_len = (srclen*8)/70;
    if(coun_len<countnum)
    {

        return 0;
    }
	for(int i =0;i<countnum;i++)
	{
		memcpy((uchar*)&dealbuf,bitbuf+movecount,70);
		movecount +=70;
		if((dealbuf[0]==0x01)&&(dealbuf[1]==0x00))
		{
			memcpy(res+movecount1,&dealbuf[2],68);
			movecount1+=68;
			bytenum1 +=68;
		}
		else if((dealbuf[0]==0x00)&&(dealbuf[1]==0x01))
		{
            type[2] = dealbuf[2]*16+dealbuf[3]*8+dealbuf[4]*4+dealbuf[5]*2+dealbuf[6];
			memcpy(res1+movecount2,&dealbuf[7],63);
			movecount2+=63;
			bytenum2 +=63;
		}

	}
	uchar num1 =0;

	uchar num2 =0;

	resbuf[2] = type[0];
	resbuf[3] = type[1];
	resbuf[4] = type[2];

	num1 = Bittouchar(res, resbuf+5, bytenum1);

	num2 = Bittouchar(res1, resbuf+num1+5, bytenum2);
	resbuf[0] = num1;
	resbuf[1] = num2;

	return num1 + num2 +5;


}
//int main()
//{
//	int j =0;
//	uchar data[19] = {0x09, 0x05, 0x05, 0x04, 0x05, 0x011, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99,0x01,0x02,0x03,0x04,0x05};
//	uchar outdata[30];
//	uchar outbuf[30];
//	GetJmessArray((uchar*)&data,(uchar*)&outdata);
//
//	//璋冭瘯瑙ｆ瀽浠ｇ爜
//	j=DealJmessArry((uchar*)&outdata,(uchar*)&outbuf,30);
//	printf("%d\n",j);
//	//return j;
//}
