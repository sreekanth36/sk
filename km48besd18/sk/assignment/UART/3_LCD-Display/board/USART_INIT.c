

#include "myheader.h"

void USART_INIT(void)
{
	RCC_APB2ENR|=(0X1<<4);
	USART_BRR=0x683;
		USART_CR1|=(0x1<<13);
	USART_CR1|=0X0000000C;
	
	USART_CR1|=(0X1<<5);

}
	