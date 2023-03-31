//6) Write a program to read n integers from the user , and count +ve numbers and -ve numbers separately. When user enters 0, stop the reading the numbers.


#include<stdio.h>
int main()
{
	int a=0,n,x=0,y=0,i=0;
	printf("enter max count\n");
	scanf("%d",&n);
	while (i<n)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		if (a>0)
			x++;
		if (a<0)
			y++;
		if (a==0)
			break;
		i++;
	}
	printf("Total postive count is:%d\nTotal negtive count is:%d\n",x,y);
	return 0;
}
