// RCC_AHBIENR    = 0x40023800 + 0x30 = 0x40023830 
// GPIOB_MODER    = 0x40020400 + 0x00 = 0x40020400
// GPIOB_ODRB     = 0x40020400 + 0x14 = 0x40020414
// GPIOC_PUPDR    = 0x40020800 + 0x0c = 0x4002080C
// GPIOB_ODRC     = 0x40020800 + 0x10 = 0x40020810
// SYSCFG_EXTICR3 = 0x40013800 + 0x10 = 0x40013810
// RCC_APB2ENR    = 0x40023800 + 0x44 = 0x40023844 
// EXTI_IMR       = 0x40013C00 + 0x00 = 0x40013C00
// EXTI_FTSR			= 0x40013C00 + 0x0c = 0x40013C0C
// EXTI_PR			  = 0x40013C00 + 0x14 = 0x40013C14
// NVIC_ISER1     = 0xE000E100 + 0x100 + 0x04 * x(1) = 0xE000E104

#define RCC_AHBIENR    (*(int *)0x40023830)
#define GPIOB_MODER    (*(int *)0x40020400)
#define GPIOB_ODR      (*(int *)0x40020414)
#define GPIOC_PUPDR    (*(int *)0x4002080C)
#define GPIOC_IDR    	 (*(int *)0x40020810)
#define SYSCFG_EXTICR3 (*(int *)0x40013810)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define	EXTI_IMR       (*(int *)0x40013C00)
#define EXTI_FTSR		   (*(int *)0x40013C0C)
#define EXTI_PR			   (*(int *)0x40013C14)
#define NVIC_ISER1     (*(int *)0xE000E104)

int a=0;
void delay(int x)
{
	int i=0;
	for(i=4000*x;i>0;i--);
}

void EXTI15_10_IRQHandler(void)
{
	if(EXTI_PR & 0x400)
	{
		GPIOB_ODR &= ~(0x1<<13);
		a++;
		delay(2000);
	}
		EXTI_PR |= 0x40;
}

int main()
{
	RCC_AHBIENR |= 0x06;          // set clock to 1 for GPIOB and GPIOC
	while(!((RCC_AHBIENR & 0x6)==6));  // checking for clock set or not 
	RCC_APB2ENR |= 0x00004000;
	SYSCFG_EXTICR3 |= 0x00000200;
	EXTI_IMR |= 0x00000400;
	EXTI_FTSR |= 0x00000400;
	NVIC_ISER1 |= 0x00000100;
	GPIOB_MODER |= 0x04000000;    // set port to output mode
	GPIOC_PUPDR |= 0x00100000;		// set PUPDR to pull-up
	GPIOB_ODR |= (0x1<<13);      // LED set to OFF
	while(1)
	{
		if((GPIOC_IDR & (0x1<<10))) // IDR value 1
	GPIOB_ODR |= (0x1<<13);			// LED set to OFF 
//		delay(1000);
	}
	return 0;
}

