

#include "myheader.h"

void SYSCFG_INIT(void)
{
	RCC_APB2ENR|=(0x1<<14);
	SYSCFG_EXTICR3|=0x00000022;
	EXTI_IMR|=0x00000300;
	EXTI_FTSR|=0x00000300;
}
