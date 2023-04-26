// RCC_AHBIENR = 0x40023800 + 0x30 = 0x40023830 
// GPIOB_MODER = 0x40020400 + 0x00 = 0x40020400
// GPIOB_ODRB   = 0x40020400 + 0x14 = 0x40020414
// GPIOC_PUPDR = 0x40020800 + 0x0c = 0x4002080c
// GPIOB_ODRC   = 0x40020800 + 0x10 = 0x40020810

#define RCC_AHBIENR  (*(int *)0x40023830)
#define GPIOB_MODER  (*(int *)0x40020400)
#define GPIOB_ODR    (*(int *)0x40020414)
#define GPIOC_PUPDR  (*(int *)0x4002080c)
#define GPIOC_IDR    (*(int *)0x40020810)

int main()
{
	RCC_AHBIENR |= 0x06;          // set clock to 1 for GPIOB and GPIOC
	while(!(RCC_AHBIENR & 0x6));  // checking for clock set or not 
	GPIOB_MODER |= 0x01000000;    // set port to output mode
	GPIOC_PUPDR |= 0x00100000;		// set PUPDR to pull-up
	while(1)
	{
		if(GPIOC_IDR & (0x1<<10))
			GPIOB_ODR &= ~(0x1<<12);		
		if(!(GPIOC_IDR & (0x1<<10)))
			GPIOB_ODR |= (0x1<<12); 
	}
	return 0;
}
