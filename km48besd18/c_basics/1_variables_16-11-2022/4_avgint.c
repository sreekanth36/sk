//calculate average of 4 integer numbers and print the output.

#include<stdio.h>
int main()
{
	int a,b,c,d;
	float e;
	printf("enter 4 int values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=(a+b+c+d)/4.0;
	printf("%f",e);
	return 0;
}
