NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn; //ѡ��EXTI2�ж�
NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x02; //��ռ���ȼ�Ϊ2
NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x02; //��Ӧ���ȼ�Ϊ2
NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //ʹ�� EXTI2 �ж�
NVIC_Init(&NVIC_InitStructure); //��ʼ�����ϲ���
