//13)write a program to read 4 numbers and print the biggest number.

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter 4 values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b)
		if(a>c)
			if (a>d)
				printf("a is big value:%d\n",a);
			else
				printf("d is big value:%d\n",d);
		else if (c>d)
			printf("c is big value:%d\n",c);
		else
			printf("d is big value:%d\n",d);

	else if (b>c)
		if(b>d)
			printf("b is big value:%d\n",b);
		else 
			printf("d is big value:%d\n",d);
	else if(c>d)
		printf("c is big value:%d\n",c);
	else
		printf("d is big value:%d\n",d);
	return 0;
}







