

#include "myheader.h"

void GPIOB_INIT(void)
{
	RCC_AHB1ENR|=(0X1<<1);
	GPIOB_MODER|=0x15000000;
	GPIOB_ODR|=0X00006000;
}