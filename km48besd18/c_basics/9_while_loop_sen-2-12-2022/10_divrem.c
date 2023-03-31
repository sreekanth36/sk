#include<stdio.h>
int main()
{
	int a,b,i=0,m=0,s=0,y=0;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	if(a>0 && b>0)
	{
		while(a>=b)
		{
			a=a-b;
			i++;
		}
	}
	else if (a>0 && b<0)
	{
		b=-b;
	while (b<=a)
	{
		a=a-b;
		i++;
	}
		i=-i;
	}
	else if (a<0 && b<0)
	{
		a=-a;
		b=-b;
	while (b<=a)
	{
		a=a-b;
		i++;
	}
	}
	else if (a<0 && b>0)
	{
		a=-a;
		while (b<=a)
		{
		a=a-b;
		i++;
		}
		i=-i;
	}
	if (a==0 && b==0)
	{
		i=0;
		a=0;
	}
	printf("%d is quotient\n%d is remainder\n",i,a);
	return 0;
}
