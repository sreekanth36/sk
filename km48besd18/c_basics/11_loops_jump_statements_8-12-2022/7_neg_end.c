//7) write a program to read integers from the user and add them as long as the user enters positive numbers. Stop and print the sum when the user enters negative number.


#include<stdio.h>
int main()
{
	int a=0,s=0;
	while(a>=0)
	{
		printf("enter a number\n");
		scanf("%d",&a);
		if (a<0)
			break;
		s+=a;
			
	}
	printf("Total sum of pos number is %d\n",s);
	return 0;
}
