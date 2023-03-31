//1) Read n number of numbers from user (n value taken as input) and print if each number is even or odd.

#include<stdio.h>
int main()
{
	int i=0,n,a;
	printf("enter max count value\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is even number\n",a);
		else
			printf("%d is odd number\n",a);
		i++;
	}
	return 0;
}
