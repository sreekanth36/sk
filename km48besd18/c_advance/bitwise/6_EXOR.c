// 6. WAP implement XOR functionality with out using XOR(^) operator.

#include<stdio.h>

int main()
{
	int x,p;
	printf("enter two values\n");
	scanf("%d%d",&x,&p);
	printf("EXOR=%d\n",x^p);
	printf("without EXOR=%d\n",((~x&p)+(x&~p)));
}
