

#include "myheader.h"

void GPIOC_INIT(void)
{
	RCC_AHB1ENR|=(0x1<<2);
	GPIOC_PUPDR|=0x00050000;
}
