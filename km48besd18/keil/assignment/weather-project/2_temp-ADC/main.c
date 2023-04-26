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
#define UART6_CR1      (*(int *)0x4001140C)
#define UART6_CR2      (*(int *)0x40011410)
#define UART6_BRR      (*(int *)0x40011408)	
#define UART6_DR       (*(int *)0x40011404)
#define UART6_SR       (*(int *)0x40011400)
#define ADC_SR         (*(int *)0x40012000)
#define ADC_SMPR1      (*(int *)0x4001200C)
#define ADC_SQR3       (*(int *)0x40012034)
#define ADC_CR1        (*(int *)0x40012004)
#define ADC_CR2        (*(int *)0x40012008)
#define ADC_DR         (*(int *)0x4001204C)
#define SYSCFG_EXTICR3 (*(int *)0x40013810)
#define	EXTI_IMR       (*(int *)0x40013C00)
#define EXTI_FTSR		   (*(int *)0x40013C0C)
#define EXTI_PR			   (*(int *)0x40013C14)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define NVIC_ISER1     (*(int *)0xE000E104)
#define GPIOB_MODER    (*(int *)0x40020400)
#define GPIOB_ODR      (*(int *)0x40020414)
	

void delay(int i)
{
	int a;
	for(a=4000*i;a;a--);
}
char c='s';
int a,x=0,sk=0;
char z[2];

void Write_high_nibble(unsigned char data)
{
	GPIOB_ODR |= (data >>4);
	GPIOB_ODR |= 0x1<<8;
	delay(10);
	GPIOB_ODR &= ~(0x1<<8);
	GPIOB_ODR &= ~(0x0F);	
}
	
void Write_low_nibble(unsigned char data)
{
		int a=0;
	data &= ~(0xF0);
	GPIOB_ODR |= data;
	GPIOB_ODR |= 0x1<<8;
	delay(10);
	GPIOB_ODR &= ~(0x1<<8);
	GPIOB_ODR &= ~(0x0F);	
}

void SK_LCD_Write_CMD(unsigned char data)
{
	GPIOB_ODR &= ~(0x1<<4);		//rs=0
	Write_high_nibble(data);
	Write_low_nibble(data);
}

void SK_LCD_Write_DATA(unsigned char data)
{
	GPIOB_ODR |= (0x1<<4);
	Write_high_nibble(data);
	Write_low_nibble(data);
}

void SK_LCD_Write_STR(char * data)
{
	int i=0,b=0;
	for(i=0;data[i];i++);
	i--;
	while(i>=0)
	{
		SK_LCD_Write_DATA(data[i]);
		i--;
		b++;
		if(b==16)
			SK_LCD_Write_CMD(0xC0);
		if(b==32)
			SK_LCD_Write_CMD(0x80);
	}
}

void SK_LCD_init()
{
	delay(20); 
	SK_LCD_Write_CMD(0x33);
	delay(1);
	SK_LCD_Write_CMD(0x32);
	SK_LCD_Write_CMD(0x0C);
	SK_LCD_Write_CMD(0x01);
}


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
	while(!(UART6_SR & 0x1<<7));
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
	RCC_AHBIENR |= 0x6;
	while(!(RCC_AHBIENR & 0x6));
	RCC_APB2ENR |= 0x120;
	while(!(RCC_APB2ENR & 0x120));
	GPIOC_MODER &= ~(0xF<<12);
	GPIOC_MODER |= 0xA003;
	GPIOC_AFRL |= 0x88000000;
	UART6_BRR = 0x8B;
	UART6_CR1 |= 0x202C;
	UART6_CR2 &= 0x0000;
	NVIC_ISER1 |= 0x20;
	ADC_SMPR1 |= 0x7;
	ADC_SQR3 |= 0xA;
	ADC_CR1 &= ~(0x3<<24);
	ADC_CR2 |= 0x0401;
	GPIOB_MODER &= (0x0);
	GPIOB_MODER |= 0x10555;
	GPIOB_ODR &= (0x0);
	SK_LCD_init();
	sk_init();
	while(1)
	{
		ADC_CR2 |= 0x1<<30;
		while(!(ADC_SR & 0x2));
		a = ADC_DR;
		a/=10;
		x=0;
		temp=a;
		while(a)
		{
			z[x]=(a%10)+48;
			a/=10;
			x++;
			sk=1;
		}
		SK_LCD_Write_CMD(0x01);
		SK_LCD_Write_STR(" = pmet");
		SK_LCD_Write_STR(z);
		ADC_CR2 &= ~(0x1<<30);
//			delay(5000);
//		delay(500);
		sk_call("AT+CIPSTATUS\r\n");
		delay(500);
		sk_call("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
		delay(500);
		sprintf(Fetch,"GET /page.php?temp=%f&hum=25&dev=18\r\n\r\n",temp);
		delay(500);
		sk_call("AT+CIPSEND=45\r\n");
		delay(500);
		sk_call(Fetch);
		delay(2500);
//		sk_call("AT+CIPCLOSE\r\n");
//		delay(5000);
	}
}
