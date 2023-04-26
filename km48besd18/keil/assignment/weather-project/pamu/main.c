#include<stdio.h>
//RCC_AHB1ENR=0x40023800+0x30=0x40023830
//GPIO_MODER=0x40020000+0x00=0x40020000
//GPIO_ODR=0x40020414
//GPIOC_AFRH =0x40020800+0x20=0x40020820
//RCC_APB2ENR=0x40023800+0x44=0x40023844
//USART_CR1=0x4001 1000+0x0c=0x4001100c
//USART_BRR=0x4001 1400+0x08=0x4001 1408
//USART_CR2=0x4001 1400+0x10=0x40011410
//USART_DR=0x4001 1000+0x04=0x40011004
//USART6_SR=0x4001 1400+0x00=0x40011400
//USART6_CR1=0x4001 1400+0x0C=0x4001 140C
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOC_MODER  (*((int *) 0x40020800))
#define GPIOC_AFRL  (*((int *) 0x40020820))
//#define GPIOB_ODR (*((int *)0x40020414))
#define RCC_APB2ENR (*((int *)0x40023844))
#define USART6_CR1 (*((int *)0x4001140C))
#define USART6_BRR (*((int *)0x40011408))
#define USART6_CR2 (*((int *)0x40011410))
#define USART6_DR (*((int *)0x40011404))
#define USART6_SR (*((int *)0x40011400))
char a;
void delay(int a)
{
int i=0;
while(a--)
for(i=4000;i>0;i--);

}
void outchar(char * c)
{
int i=0;
while(c[i])
{
while(!((USART6_SR & 0x1<<7)!=0)){};
USART6_DR=c[i];
i++;
}
}
void usart_init(void)
{
delay(500);
outchar("AT+RST\r\n");
delay(500);
outchar("AT+CWMODE=3\r\n") ;
delay(500);
outchar("AT+CWLAP\r\n");
delay(500);
outchar("AT+CWJAP=\"KernelMasters\",\"9963111084\"\r\n");
delay(500);
outchar("AT+CIFSR\r\n");
delay(500);
outchar("AT+CIPMUX=0\r\n");
delay(500);
outchar("AT+CWLAP\r\n");
delay(500);
outchar("AT+CIPMODE=0\r\n");
delay(500);
}
char Fetch[50]={0};
float temp=38,hum=11;
int main()
{
RCC_AHB1ENR |= 0x1<<2; // set clock to 1 for GPIOC
while(!(RCC_AHB1ENR & 0x4)); //checking for clock set or not
GPIOC_MODER  |= 0x5<<13; //set port mode TO altarnat functionality(USART6) mode 15 and 13 pins.
GPIOC_AFRL |=0x8<<24;//pin 24 set to UART6 mode
GPIOC_AFRL |=0x8<<28;//pin 28 set to UART6 mode
RCC_APB2ENR |=0x1<<5;//set clock to 1 for UART6
while(!(RCC_APB2ENR & 0x1<<5));
USART6_CR1 |=0x3<<2;//enble TE and RE
USART6_CR1 |=0x1<<13;//enble UE
USART6_BRR=0x8B;//TE AND RE bits per sec.
USART6_CR2 &=0x0<<12;// 1 bit stop
usart_init();
while(1)
{
outchar("AT+CIPSTATUS\r\n");
delay(500);
outchar("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n\"");
delay(500);
sprintf(Fetch,"GET /page.php?temp=%f&hum=%f&dev=11\r\n\r\n", temp,hum);
outchar("AT+CIPSEND=38\r\n");
delay(500);
outchar(Fetch);
delay(5000);
outchar("AT+CIPCLOSE\r\n");
delay(5000);

}
return 0;
}
