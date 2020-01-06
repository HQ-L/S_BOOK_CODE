#include "reg52.h"   //此文件中定义了单片机中的一些特殊功能寄存器
#include <intrins.h> //因为要用到左右移函数，所以加入这个头文件

typedef unsigned int u16; //对数据类型进行声明定义
typedef unsigned char u8;

#define led P0 //将P0口定义为led 后面就可以用led代替P0口

/*******************************************************
* 函 数 名    ：delay
* 函数功能    ：延时函数，i = 1时，大约延时10us
*******************************************************/
void delay(u16 i)
{
    while (i--);
}

void main()
{
    u8 i;
    led = 0x01;
    delay(50000); //大约延时450ms
    while (1)
    {
        for (i = 0; i < 7; i++) //将led左移一位
        {
            led = _crol_(led, 1);
            delay(50000); //大约延时450ms
        }
        for (i = 0; i < 7; i++) //将led右移一位
        {
            led = _cror_(led, 1);
            delay(50000); //大约延时450ms
        }
    }
}