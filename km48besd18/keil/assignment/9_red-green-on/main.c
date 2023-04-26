// RCC_AHBIENR = 0x40023800 + 0x30 = 0x40023830 
// GPIOB_MODER = 0x40020400 + 0x00 = 0x40020400
// GPIOB_ODRB   = 0x40020400 + 0x14 = 0x40020414
// GPIOC_PUPDR = 0x40020800 + 0x0c = 0x4002080c
// GPIOB_ODRC   = 0x40020800 + 0x10 = 0x40020810
// GPIOC_MODER = 0x40020800 + 0x00 = 0x40020800
// SYSCFG_EXTICR3 = 0x40013800 + 0x10 = 0x40013810
// RCC_APB2ENR    = 0x40023800 + 0x44 = 0x40023844 
// EXTI_IMR       = 0x40013C00 + 0x00 = 0x40013C00
// EXTI_FTSR			= 0x40013C00 + 0x0c = 0x40013C0C
// EXTI_PR			  = 0x40013C00 + 0x14 = 0x40013C14
// NVIC_ISER0     = 0xE000E100 + 0x100 + 0x04 * x(0) = 0xE000E100

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
#define NVIC_ISER0     (*(int *)0xE000E100)

void delay(int);

void EXTI9_5_IRQHandler(void)
{
	if(EXTI_PR & 0x100)
	{
		GPIOB_ODR &= ~(0x1<<13);
//		delay(1000);
	}
	if(EXTI_PR & 0x200)
	{
		GPIOB_ODR &= ~(0x1<<14);
//		delay(1000);
	}
	delay(50);
		EXTI_PR |= 0x40;
}

int main()
{
	RCC_AHBIENR |= 0x06;          // set clock to 1 for GPIOB and GPIOC
	while(!((RCC_AHBIENR & 0x6)==6));  // checking for clock set or not 
	GPIOB_MODER |= 0x14000000;    // set port to output mode
	GPIOC_MODER &= ~(0xf0000);    // set port to input mode
	GPIOC_PUPDR |= 0x00050000;		// set PUPDR to pull-up
	GPIOB_ODR |= (0x1<<13);      // REDLED set to OFF
	GPIOB_ODR |= (0x1<<14);      // GREENLED set to OFF
	RCC_APB2ENR |= 0x00004000;
	SYSCFG_EXTICR3 |= 0x00000022;
	EXTI_IMR |= 0x00000300;
	EXTI_FTSR |= 0x00000300;
	NVIC_ISER0 |= 0x00800000;

	while(1)
	{
			if((GPIOC_IDR & (0x1<<8)))
			GPIOB_ODR |= (0x1<<13);	
			if(GPIOC_IDR & (0x1<<9))
			GPIOB_ODR |= (0x1<<14);	
//			delay(500);
		}
	return 0;
}

void delay(int a)
{
	int i;
	for(i=4000*a;i>0;i--);
}
