//6) Read  n numbers from user ,and print the smallest number of all.

#include<stdio.h>
int main()
{
	int i=0,n,a,b;
	printf("enter max count\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		if (i==0)
			b=a;
		else
			b=(a>b)?b:a;
		printf("%d is count\n",i+1);
		++i;
	}
	printf("%d is smallest to all\n",b);
	return 0;
}
