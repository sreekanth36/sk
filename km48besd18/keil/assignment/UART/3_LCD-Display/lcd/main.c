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
#define RCC_AHBIENR  (*(int *)0x40023830)
#define GPIOB_MODER  (*(int *)0x40020400)
#define GPIOB_ODR    (*(int *)0x40020414)


char c='s',b;
int sk=0,e=0;
void USART1_IRQHandler(void)
{
	if(UART_SR & 0x20)
	{
		b= UART_DR; 
		sk=1;
	}
}

void delay(unsigned int a)
{
//	STK_LOAD = 16000*a;
	int i;
	for(i=4000*a;i>0;i--);
}

void Write_high_nibble(unsigned char data)
{
//	GPIOB_ODR |= (data >>4);
	int a=7,b=3;
	while(a>3)
	{
		if(data & 0x1<<a)
			GPIOB_ODR |= 0x1<<b;
		a--;
		b--;
	}
	GPIOB_ODR |= 0x1<<8;
	delay(10);
	GPIOB_ODR &= ~(0x1<<8);
	GPIOB_ODR &= ~(0x0F);	
}
	
void Write_low_nibble(unsigned char data)
{
		int a=0;
//	data &= ~(0xF0);
//		GPIOB_ODR |= data;
	while(a<4)
	{
		if(data & 0x1<<a)
			GPIOB_ODR |= 0x1<<a;
		a++;
	}
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
//	GPIOB_ODR &= ~(0x1<<4);
}

void SK_LCD_Write_STR(char * data)
{
	int i=0;
//	static int e=0;
if(e==0)	
	SK_LCD_Write_CMD(0x01);
	while(data[i])
	{
		SK_LCD_Write_DATA(data[i]);
		i++;
		e++;
		if(e==16)
			SK_LCD_Write_CMD(0xC0);
		if(e==32)
		{
			e=0;
			SK_LCD_Write_CMD(0x80);
		}
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
	RCC_AHBIENR |= 0x2;
	while(!(RCC_AHBIENR & 0x2));
	GPIOB_MODER &= (0x0);
	GPIOB_MODER |= 0x10555;
	GPIOB_ODR &= (0x0);
  SK_LCD_init();
	SK_LCD_Write_STR("==>sree kanth      sree kanth<==");
	SK_LCD_Write_CMD(0x80);

	while(1)
	{
		while((UART_SR & 0x1<<5))
		{
	//		w++;
			b = UART_DR;
			UART_DR = b;
			SK_LCD_Write_STR(&b);
			delay(500);
		}
		if(sk==1)
		{
			UART_DR=b;
			SK_LCD_Write_STR(&b);
			sk=0;
		}
	}
}
