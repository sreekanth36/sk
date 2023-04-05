

#include "myheader.h"

void GPIOA_INIT(void)
{
	RCC_AHB1ENR|=0X1;
	GPIOA_MODER|=0x00280000;
	GPIOA_AFRH|=0x00000770;
}