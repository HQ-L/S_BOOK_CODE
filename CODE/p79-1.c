/*
cortex - m3内核分组方式（8组）结构体表达方式：
*/
typedef struct
{
	__IO uint32_t ISER[8];		/*	中断使能设置寄存器		！< 偏移量： 0x000  Interrupt Set Enable Register	*/ 
	uint32_t RESERVED0[24];
	__IO uint32_t ICER[8];		/*	中断清除使能寄存器		！< 偏移量： 0x080  Interrupt Clear Enable Register	*/ 
	uint32_t RESERVED1[24];
	__IO uint32_t ISPR[8];		/*	中断挂起设置寄存器		！< 偏移量： 0x100  Interrupt Set Pending Register	*/ 
	uint32_t RESERVED2[24];
	__IO uint32_t ICPR[8];		/*	中断清除挂起寄存器		！< 偏移量： 0x180  Interrupt Clear Pending Register	*/ 
	uint32_t RESERVED3[24];
	__IO uint32_t IABR[8];		/*	中断激活状态位寄存器		！< 偏移量： 0x200  Interrupt Active bit Register	*/ 
	uint32_t RESERVED4[56];
	__IO uint32_t IP[240];		/*	中断优先级寄存器		！< 偏移量： 0x300  Interrupt Priority Register(8Bit wide)*/ 
	uint32_t RESERVED5[644];	/*	软件触发方式寄存器 	*/
	__o  uint32_t STIR;					/*!<偏移量：0xE00  Software Trigger Interrupt Register		*/
}	NVIC_Type;
