/**********************************************************************
*			������һ��LEDʵ��			* 
ʵ���������س����D11ָʾ�Ƶ���
ע�������
**********************************************************************/ 


#include "reg52.h"	//���ļ��ж����˵�Ƭ����һЩ���⹦�ܼĴ���

sbit led = P0^0;		//����Ƭ����P0.0�˿ڶ���Ϊled

/*********************************************************************/
#include "reg52.h"	//���ļ��ж����˵�Ƭ����һЩ���⹦�ܼĴ���
#include<intrins.h>	//��ΪҪ�õ������ƺ��������Լ������ͷ�ļ�

typedef unsigned int u16;	//���������ͽ�����������
typedef unsigned char u8;

#define led P0		//��P0�ڶ���Ϊled ����Ϳ���ʹ��led����P0��

/**********************************************************************
* �� �� �� ��delay
* �������� ����ʱ������i=1ʱ����Լ��ʱ10us
**********************************************************************/
void delay(u16 i)
{
	while(i --);
}

void main()
{
	u8 i;
	led = 0x01;
	delay(50000);	//��Լ��ʱ450ms
	while(1)
	{
		for(i = 0; i < 7; i ++)	//��led����һλ 
		{
			led = _crol_(led,1);
			delay(50000);	//��Լ��ʱ450ms
		}
		for(i = 0; i < 7; i ++)	//��led����һλ
		{
			led = _cror_(led,1);
			delay(50000);	//��Լ��ʱ450ms 
		}
	}
}