

#include "myheader.h"

int up_switch=0,down_switch=0,received=0;
char rd;


void EXTI9_5_IRQHandler (void)
{
	if(EXTI_PR&(0x1<<8))
	{	
			USART_DR='R';
	
		EXTI_PR|=(0X1<<8);
	}
	 if(EXTI_PR&(0x1<<9))
	{
			USART_DR='G';
	
		EXTI_PR|=(0X1<<9);
	}
}


void USART1_IRQHandler (void)
{
		rd=USART_DR;
				
				if(rd=='R'||rd=='r')
				{
					GPIOB_ODR&=(~(0x1<<13));
					DELAY(500);
					GPIOB_ODR|=(0X1<<13);
				}
			else if(rd=='G' ||rd=='g')
				{
					GPIOB_ODR&=(~(0x1<<14));
					DELAY(500);
					GPIOB_ODR|=(0x1<<14);
				}
				else
				{
					GPIOB_ODR|=(0X1<<12);
					DELAY(500);
					GPIOB_ODR&=(~(0x1<<12));
				}
//	received=1;
}

int main()
{
	GPIOA_INIT();
	GPIOB_INIT();
	GPIOC_INIT();
	SYSCFG_INIT();
	USART_INIT();
	NVIC_INIT();
	
	while(1)
	{

/*		if(up_switch==1)

		{{if(USART_SR&(0X1<<7))
			USART_DR='G';
			up_switch=0;
		}
	}
		 if(down_switch==1)
		{
			if(USART_SR&(0X1<<7))
				USART_DR='R';
			down_switch=0;
		}
		 if(received==1)
		{
			rd=USART_DR;
				
				if(rd=='R'||rd=='r')
				{
					GPIOB_ODR&=(~(0x1<<13));
					DELAY(500);
					GPIOB_ODR|=(0X1<<13);
				}
				if(rd=='G' ||rd=='g')
				{
					GPIOB_ODR&=(~(0x1<<14));
					DELAY(500);
					GPIOB_ODR|=(0x1<<14);
				}
				else
				{
					GPIOB_ODR|=(0X1<<12);
					DELAY(500);
					GPIOB_ODR&=(~(0x1<<12));
				}
						received=0;
			}
			*/

		}
	return 0;
}