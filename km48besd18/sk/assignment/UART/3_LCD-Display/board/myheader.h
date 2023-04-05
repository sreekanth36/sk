

#define RCC_AHB1ENR (*(int *)0x40023830)
	#define GPIOA_MODER (*(int *)0x40020000)
#define GPIOA_AFRH (*(int *) 0x40020024)
	#define GPIOB_MODER (*(int *) 0x40020400)
		#define GPIOC_MODER (*int *) 0x40020800)
			#define GPIOC_PUPDR (*(int *) 0x4002080c)
				#define RCC_APB2ENR (*(int *) 0x40023844)
					#define SYSCFG_EXTICR3 (*(int*) 0x40013810)
						#define EXTI_IMR (*(int *) 0x40013C00)
							#define EXTI_FTSR (*(int *) 0x40013C0C)
								#define USART_CR1 (*(int *)0x4001100C)
									#define USART_CR2 (*(int *) 0X40011010)
										#define USART_BRR (*(int *) 0X40011008)
											#define NVIC_ISER0 (*(int*) 0XE000E100)
												#define NVIC_ISER1 (*(int *) 0XE000E104)
													#define GPIOB_ODR (*(int *)0X40020414)
														#define USART_SR (*(int*)0X40011000)
#define USART_DR (*(int *) 0X40011004)
#define EXTI_PR (*(int *) 0X40013C14)

void GPIOA_INIT(void);
void GPIOB_INIT(void);
void GPIOC_INIT (void);
void SYSCFG_INIT(void);
void USART_INIT(void);
void NVIC_INIT(void);
void DELAY(int X);
