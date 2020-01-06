#include <msp430.h>

int main(void)
{
    WDTCTL = WDTHOLD + WDTPW; //关闭看门狗（当不用看门狗定时器时，这句话一定需要，不然就会一直复位）
    P1SEL &= ~(BIT3 + BIT0);  //设置 P1.,P1.3 为 IO 口
    P1DIR |= BIT0;            //P1.0 口为输出
    P1DIR &= ~BIT3;           //P1.3 口为输入‘
    P1REN |= BIT3;            //使能 sw2 为上下拉（P1.3）
    P1OUT |= BIT3;            //使能 sw2 上拉
    while (1)
    {
        if ((BIT3 & P1OUT))
            P1OUT |= BIT0; //如果按键按下为高电平即灯亮
        else
            P1OUT &= ~BIT0; //否则灯灭
    }
}