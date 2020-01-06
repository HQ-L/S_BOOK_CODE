#pragma vector = PORT1_VECTOR // 这句话是根据中断向量表来的，一个字母都不能错，对于不同中断，一定要好好对照中断向量表，这句话一错根本进不了中断
__interrupt void PORT1(void) // 这 是 中 断 的 格 式， 函 数 名 可 以 自 己 取， 但 是 __interrupt 是必须的
{
    P1OUT ^= BIT0;  // 按键按下一次 P1.0 口状态翻转一次
    P1IFG &= ~BIT3; // 清除标志位
}