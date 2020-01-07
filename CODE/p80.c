void NVIC_PriorityGroupConfig(uint32_t NVIC_PriorityGroup);
/*举个栗子*/
NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 抢占优先级可选 0~3，响应优先级可选 0~3 
