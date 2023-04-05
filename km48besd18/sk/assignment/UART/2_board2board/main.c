#define RCC_AHBIENR    (*(int *)0x40023830)
#define GPIOB_MODER    (*(int *)0x40020400)
#define GPIOB_ODR      (*(int *)0x40020414)
#define GPIOC_PUPDR    (*(int *)0x4002080c)
#define GPIOC_IDR      (*(int *)0x40020810)
#define GPIOC_MODER    (*(int *)0x40020800)
#define SYSCFG_EXTICR3 (*(int *)0x40013810)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define	EXTI_IMR       (*(int *)0x40013C00)
#define EXTI_FTSR		   (*(int *)0x40013C0C)
#define EXTI_PR			   (*(int *)0x40013C14)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define GPIOA_MODER    (*(int *)0x40020000)
#define GPIOA_AFRH     (*(int *)0x40020024)
#define UART_BRR       (*(int *)0x40011008)
#define UART_CR1       (*(int *)0x4001100C)
#define UART_CR2       (*(int *)0x40011010)
#define UART_DR        (*(int *)0x40011004)
#define UART_SR        (*(int *)0x40011000)
#define NVIC_ISER1     (*(int *)0xE000E104)

void delay(int b)
{
	int a;
	for(a=4000*b;a>0;a--);
}
char R='R',G='G';
int sk=0;
void USART1_IRQHandler(void)
{
	if(UART_SR & 0x20)
	{
		G= UART_DR; 
		sk=1;
	}
}

int main()
{
//	char c='s',b;
	RCC_AHBIENR |= 0x7;
	while(!((RCC_AHBIENR & 0x7)==7));  // checking for clock set or not 
	RCC_APB2ENR |= 0x4010;
	while(!(RCC_APB2ENR & 0x1<<4));
	while(!(RCC_APB2ENR & 0x1<<14));
	GPIOA_MODER |= 0x280000;
	GPIOA_AFRH |= 0x770;
	UART_BRR = 0x683;
	UART_CR1 |= 0x202C;
	UART_CR2 |= 0x0000;
//	NVIC_ISER1 |= 0x20;
	GPIOC_MODER &= ~(0xf0000);   
	GPIOB_MODER |= 0x14000000;    // set port to output mode
  GPIOC_PUPDR |= 0x00050000;			// set PUPDR to pull-up
	GPIOB_ODR |= (0x3<<13);    
  
	while(1)
	{
		if(!(GPIOC_IDR & 0x1<<8))
		{
			UART_DR = R;
			delay(500);
		}
		if(!(GPIOC_IDR & 0x1<<9))
		{
			UART_DR = G;
				delay(500);
		}
			if(UART_SR & 0x1<<5 && 	UART_DR == 0x0052)
			{
			GPIOB_ODR ^= (0x1<<13);
										delay(1000);
			}
		if(UART_SR & 0x1<<5 && 	UART_DR == 0x0047)
		{
	//		delay(1000);
			GPIOB_ODR ^= (0x1<<14);
							delay(1000);
		}
	}
}