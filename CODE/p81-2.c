void EXTI2_IRQHandler(void)
{
// Âß¼­´úÂë²¿·Ö;
	EXTI_ClearITPendingBit(EXTI_Line2);
}
