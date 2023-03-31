//4) Write a program to read 3 numbers and print the biggest number.

input: A
output: a

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
			printf("a is big:%d\n",a);
	}
	 
		if(b>c)
		{
			if (b>a)
			printf("b is big:%d\n",b);
		}
			
			if(c>a)
			{
			if(c>a)
					printf("c is big:%d\n",c);
			}


				
	return 0;
}

