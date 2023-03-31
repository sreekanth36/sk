//8) Write a program to read n positive integers from the user . IF the user enters a negative number, dont count it, and ask for one more positive  integer.


#include<stdio.h>
int main()
{
	int a,s=0,n,i=1;
	printf("enter max count\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("enter a number\n");
		scanf("%d",&a);
		if (a<0)
		{
			printf("enter postive number\n");
			continue;
		}
		printf("The count is %d\n",i);
		i++;	
	}
	return 0;
}
