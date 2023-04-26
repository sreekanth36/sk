// RCC_AHBIENR = 0x40023800 + 0x30 = 0x40023830 
// GPIOC_PUPDR = 0x40020800 + 0x0c = 0x4002080c
// GPIOC_ODR   = 0x40020800 + 0x10 = 0x40020810

#define RCC_AHBIENR  (*(int *)0x40023830)
#define GPIOC_PUPDR  (*(int *)0x4002080c)
#define GPIOC_IDR    (*(int *)0x40020810)

void delay(int);
int c=0;
int main()
{
	RCC_AHBIENR |= 0x04;          // set clock to 1 for GPIOB and GPIOC
	while(!(RCC_AHBIENR & 0x4));  // checking for clock set or not 
	GPIOC_PUPDR |= 0x00100000;		// set PUPDR to pull-up
	while(1)
	{
		if(!(GPIOC_IDR & (0x1<<10)))
			{			c++;
				delay(1000);
			}
	}
	return 0;
}

void delay(int a)
{
	int i;
	for(i=4000*a;i>0;i--);
}
