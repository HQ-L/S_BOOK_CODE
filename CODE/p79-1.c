/*
cortex - m3�ں˷��鷽ʽ��8�飩�ṹ���﷽ʽ��
*/
typedef struct
{
	__IO uint32_t ISER[8];		/*	�ж�ʹ�����üĴ���		��< ƫ������ 0x000  Interrupt Set Enable Register			*/ 
	uint32_t RESERVED0[24];
	__IO uint32_t ICER[8];		/*	�ж����ʹ�ܼĴ���		��< ƫ������ 0x080  Interrupt Clear Enable Register		*/ 
	uint32_t RESERVED1[24];
	__IO uint32_t ISPR[8];		/*	�жϹ������üĴ���		��< ƫ������ 0x100  Interrupt Set Pending Register		*/ 
	uint32_t RESERVED2[24];
	__IO uint32_t ICPR[8];		/*	�ж��������Ĵ���		��< ƫ������ 0x180  Interrupt Clear Pending Register		*/ 
	uint32_t RESERVED3[24];
	__IO uint32_t IABR[8];		/*	�жϼ���״̬λ�Ĵ���	��< ƫ������ 0x200  Interrupt Active bit Register			*/ 
	uint32_t RESERVED4[56];
	__IO uint32_t IP[240];		/*	�ж����ȼ��Ĵ���		��< ƫ������ 0x300  Interrupt Priority Register(8Bit wide)*/ 
	uint32_t RESERVED5[644];	/*	���������ʽ�Ĵ��� 	*/
	__o  uint32_t STIR;					/*!<ƫ������0xE00  Software Trigger Interrupt Register		*/
}	NVIC_Type;
