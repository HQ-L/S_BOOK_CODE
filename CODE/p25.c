#include <msp430.h>
int main(void)
{
    WDTCTL = WDTHOLD + WDTPW; // 关闭看门狗
    P1SEL &= ~(BIT3 + BIT0);  // 设置 P1.,P1.3 为 IO 口
    P1DIR |= BIT0;            //P1.0 口为输出
    P1DIR &= ~BIT3;           //P1.3 口为输入‘
    P1REN |= BIT3;            // 使能 sw2 为上下拉（P1.3）
    P1OUT |= BIT3;            // 使能 sw2 上拉
    P1IFG &= ~BIT3;           //PI.3 口中断标志位清零
    _BIS_SR(GIE);             //* 打开总中断（至关重要的一步！！我曾经就因为忘记这句话调代码调了好久）
    while(1)
    {
    }
}