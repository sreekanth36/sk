//7) Read a number from user, and print its multiplication table upto 10 multiples.

#include<stdio.h>
int main()
{
	int i=1,a;
	printf("enter a table number\n");
	scanf("%d",&a);
	while(i<=10)
	{
		printf("%d*%d=%d\n",a,i,a*i);
		++i;
	}
	return 0;
}
