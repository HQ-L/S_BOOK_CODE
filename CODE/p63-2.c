#include "led.h"
#include "stm32f10x.h"

void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE); //使能PB端口时钟

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5; //LED0-->PB.5 端口配置
    GPIO_InitStructure.GPOI_Mode = GPIO_Mode_Out_PP; //推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; //IO口熟读为50MHz
    GPIO_Init(GPIOB, &GPIO_InitStructure); //根据设定参数初始化GPIOB.5
    GPIO_SetBits(GPIOB, GPIO_Pin_5); //PB.5输出高
}