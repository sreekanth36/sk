#define ADC_SR         (*(int *)0x40012000)
#define ADC_SMPR1      (*(int *)0x4001200C)
#define ADC_SQR3       (*(int *)0x40012034)
#define ADC_CR1        (*(int *)0x40012004)
#define ADC_CR2        (*(int *)0x40012008)
#define ADC_DR         (*(int *)0x4001204C)
#define RCC_AHBIENR    (*(int *)0x40023830)
#define GPIOC_MODER    (*(int *)0x40020800)
#define SYSCFG_EXTICR3 (*(int *)0x40013810)
#define	EXTI_IMR       (*(int *)0x40013C00)
#define EXTI_FTSR		   (*(int *)0x40013C0C)
#define EXTI_PR			   (*(int *)0x40013C14)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define NVIC_ISER1     (*(int *)0xE000E104)
#define GPIOB_MODER    (*(int *)0x40020400)
#define GPIOB_ODR      (*(int *)0x40020414)
	
void delay(int a)
{
	int b=0;
	for(b=4000*a;b;b--);
}

int a,x=0,sk=0;
char z[2];

void Write_high_nibble(unsigned char data)
{
	GPIOB_ODR |= (data >>4);
/*	int a=7,b=3;
	while(a>3)
	{
		if(data & 0x1<<a)
			GPIOB_ODR |= 0x1<<b;
		a--;
		b--;
	}
*/	GPIOB_ODR |= 0x1<<8;
	delay(10);
	GPIOB_ODR &= ~(0x1<<8);
	GPIOB_ODR &= ~(0x0F);	
}
	
void Write_low_nibble(unsigned char data)
{
		int a=0;
	data &= ~(0xF0);
		GPIOB_ODR |= data;
/*	while(a<4)
	{
		if(data & 0x1<<a)
			GPIOB_ODR |= 0x1<<a;
		a++;
	}*/
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
	int i=0,b=0;
/*	if(sk==1)
	{
		SK_LCD_Write_DATA(data[i]);
		i++;
		b++;
		if(b==16)
			SK_LCD_Write_CMD(0xC0);
		if(b==32)
			SK_LCD_Write_CMD(0x80);
		sk=0;
	}*/
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


int main()
{
	RCC_AHBIENR |= 0x6;
	while(!(RCC_AHBIENR & 0x6));
	RCC_APB2ENR |= 0x100;
	while(!(RCC_APB2ENR & 0x100));
	GPIOC_MODER |= 0x3;
	ADC_SMPR1 |= 0x7;
	ADC_SQR3 |= 0xA;
	ADC_CR1 &= ~(0x3<<24);
	ADC_CR2 |= 0x0401;
	GPIOB_MODER &= (0x0);
	GPIOB_MODER |= 0x10555;
	GPIOB_ODR &= (0x0);
	RCC_APB2ENR |= 0x10;
	while(!(RCC_APB2ENR & 0x1<<4));
	SK_LCD_init();
	while(1)
	{
		ADC_CR2 |= 0x1<<30;
		while(!(ADC_SR & 0x2));
		a = ADC_DR;
		a/=10;
		x=0;
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
			delay(5000);
		
	}
}