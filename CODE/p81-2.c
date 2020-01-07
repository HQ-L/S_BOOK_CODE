void EXTI2_IRQHandler(void)
{
//逻辑代码部分；
	EXTI_ClearITPendingBit(EXTI_Line2);
}
