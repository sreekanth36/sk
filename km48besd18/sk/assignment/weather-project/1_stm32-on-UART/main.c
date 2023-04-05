#include<stdio.h>
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
#define UART1_CR1      (*(int *)0x4001100C)
#define UART_CR2       (*(int *)0x40011010)
#define UART_DR        (*(int *)0x40011004)
#define UART_SR        (*(int *)0x40011000)
#define NVIC_ISER1     (*(int *)0xE000E104)
#define GPIOC_AFRL     (*(int *)0x40020820)
//#define UART 0x4001 1400
#define UART6_CR1     (*(int *)0x4001140C)
#define UART6_CR2     (*(int *)0x40011410)
#define UART6_BRR     (*(int *)0x40011408)	
#define UART6_DR      (*(int *)0x40011404)
#define UART6_SR      (*(int *)0x40011400)
	

void delay(int i)
{
	int a;
	for(a=4000*i;a;a--);
}
char c='s';
int sk=0;
/*void USART1_IRQHandler(void)
{
	if(UART_SR & 0x20)
	{
		b= UART_DR; 
		sk=1;
	}
}*/

void sk_data(char b)
{
//	while(!(UART6_SR & 0x1<<7));
	while(((UART6_SR & 0x1<<7)==0));
			UART6_DR = b;
}
void sk_call(char *c)
{
	int i=0;
	while(c[i])
	{
		sk_data(c[i]);
		i++;
	}
}
void sk_init()
{
	delay(500);
	sk_call("AT\r\n");
	delay(500);
	sk_call("AT+RST\r\n");
	delay(500);
	sk_call("AT+CWMODE=3\r\n");
	delay(500);
	sk_call("AT+CWLAP\r\n");
	delay(500);
	sk_call("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");
	delay(500);
	sk_call("AT+CIFSR\r\n");
	delay(500);
	sk_call("AT+CIPMUX=0\r\n");
	delay(500);
	sk_call("AT+CIPMODE=0\r\n");
}
char Fetch[50];
double temp=30,hum=25;

int main()
{
//	char c='s',b;
	RCC_AHBIENR |= 0x4;
	while(!(RCC_AHBIENR & 0x4));
	RCC_APB2ENR |= 0x20;
	while(!(RCC_APB2ENR & 0x20));
	GPIOC_MODER &= ~(0xF<<12);
	GPIOC_MODER |= 0xA000;
	GPIOC_AFRL |= 0x88000000;
	UART6_BRR = 0x8B;
	UART6_CR1 |= 0x202C;
	UART6_CR2 &= 0x0000;
	NVIC_ISER1 |= 0x20;
	sk_init();
	while(1)
	{
		delay(500);
		sk_call("AT+CIPSTATUS\r\n");
		delay(500);
		sk_call("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
		delay(500);
		sprintf(Fetch,"GET /page.php?temp=30&hum=25&dev=18\r\n\r\n");
		delay(500);
		sk_call("AT+CIPSEND=45\r\n");
		delay(500);
		sk_call(Fetch);
		delay(5000);
		sk_call("AT+CIPCLOSE\r\n");
		delay(5000);
	}
}
