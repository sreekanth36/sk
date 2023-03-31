// 5. WAP implement addition functionality with out using ADD('+') Operator.   

#include<stdio.h>

int main()
{
	int a,b;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
//	printf("%d\n",~b+1);
	printf("add=%d\n",(a - (~(b)-(-1))));
}
