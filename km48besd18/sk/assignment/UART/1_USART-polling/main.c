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

void delay()
{
	int a;
	for(a=4000*1000;a>0;a--);
}
char c='s',b;
int sk=0;
void USART1_IRQHandler(void)
{
	if(UART_SR & 0x20)
	{
		b= UART_DR; 
		sk=1;
	}
}

int main()
{
//	char c='s',b;
	RCC_AHBIENR |= 0x1;
	while(!(RCC_AHBIENR & 0x1));
	RCC_APB2ENR |= 0x10;
	while(!(RCC_APB2ENR & 0x1<<4));
	GPIOA_MODER |= 0x280000;
	GPIOA_AFRH |= 0x770;
	UART_BRR = 0x683;
	UART_CR1 |= 0x202C;
	UART_CR2 |= 0x0000;
	NVIC_ISER1 |= 0x20;
/*	while(1)
	{
		while(!(UART_SR & 0x1<<7));
			UART_DR = c;
		while(!(UART_SR & 0x1<<5));
			b = UART_DR;
//		if(c<'z')
		c++;
	}*/
/*	while(1)
	{

		if(UART_SR & 0x1<<7)
			UART_DR = c;
			if(UART_SR & 0x1<<5)
			b = UART_DR;
		c++;
//			delay();
	}*/
	while(1)
	{
		if(sk==1)
		{
			UART_DR=b;
			sk=0;
		}
	}
}
