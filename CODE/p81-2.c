void EXTI2_IRQHandler(void)
{
// �߼����벿��;
	EXTI_ClearITPendingBit(EXTI_Line2);
}
