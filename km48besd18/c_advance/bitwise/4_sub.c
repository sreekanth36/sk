// 4. WAP implement subtraction functionality with out using SUB('-') Operator.    

#include<stdio.h>

int main()
{
	int a,b;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	printf("sub=%d\n",(a + (~(b)+1)));
}
