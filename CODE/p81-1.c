NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn; //选择EXTI2中断
NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x02; //抢占优先级为2
NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x02; //响应优先级为2
NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //使能 EXTI2 中断
NVIC_Init(&NVIC_InitStructure); //初始化以上参数
