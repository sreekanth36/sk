// RCC_AHBIENR = 0x40023800 + 0x30 = 0x40023830 
// GPIOB_MODER = 0x40020400 + 0x00 = 0x40020400
// GPIOB_ODRB   = 0x40020400 + 0x14 = 0x40020414
// GPIOC_PUPDR = 0x40020800 + 0x0c = 0x4002080c
// GPIOB_ODRC   = 0x40020800 + 0x10 = 0x40020810
// GPIOC_MODER = 0x40020800 + 0x00 = 0x40020800

#define RCC_AHBIENR  (*(int *)0x40023830)
#define GPIOB_MODER  (*(int *)0x40020400)
#define GPIOB_ODR    (*(int *)0x40020414)
#define GPIOC_PUPDR  (*(int *)0x4002080c)
#define GPIOC_IDR    (*(int *)0x40020810)
#define GPIOC_MODER  (*(int *)0x40020800)

void delay(int);

int main()
{
	RCC_AHBIENR |= 0x06;          // set clock to 1 for GPIOB and GPIOC
	while(!((RCC_AHBIENR & 0x6)==6));  // checking for clock set or not 
	GPIOB_MODER |= 0x14000000;    // set port to output mode
	GPIOC_MODER &= ~(0x3<<10);    // set port to input mode
	GPIOC_PUPDR |= 0x0050000;		// set PUPDR to pull-up
	GPIOB_ODR |= (0x1<<13);      // REDLED set to OFF
	GPIOB_ODR |= (0x1<<14);      // GREENLED set to OFF
	while(1)
	{
		if(!(GPIOC_IDR & (0x1<<8))) // IDR value 1
		{
					GPIOB_ODR &= ~(0x1<<13);	
					delay(1000);
		}
	//	if((GPIOC_IDR & (0x1<<8)))
	//		GPIOB_ODR |= (0x1<<13);	
		if(!(GPIOC_IDR & (0x1<<9))) // IDR value 1
		{
					GPIOB_ODR &= ~(0x1<<14);	
  			delay(1000);
		}
	//	if(GPIOC_IDR & (0x1<<9))
	//		GPIOB_ODR |= (0x1<<14);	
			// LED set to ON and OFF
//		delay(1000);
	}
	return 0;
}

void delay(int a)
{
	int i;
	for(i=4000*a;i>0;i--);
}
