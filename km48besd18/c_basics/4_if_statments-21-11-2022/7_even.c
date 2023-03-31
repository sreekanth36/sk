//7) Read a number and print if the number is even or odd.

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	if (a%2==0)
		printf("number is even:%d\n",a);
	else 
		printf("number is odd:%d\n",a);
	return 0;
}
