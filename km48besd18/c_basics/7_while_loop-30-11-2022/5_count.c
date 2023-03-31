//5) Read n numbers in ascending order. If a number entered is bigger than previous number, then count it. If it is smaller, then dont count it, instead let the loop repeat itself and read another number.

#include<stdio.h>
int main()
{
	int i=0,n,a,b;
	printf("enter max count value\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		if (i==0)
		{
			b=a;
			++i;
			printf("%d is count\n",i);
		}
		else if (a>b)
		{
			printf("%d is count\n",i+1);
			b=a;
			++i;
		}
	}
	return 0;
}
