//5) Modify the calculator program - multiply, division and remainder functions to return the result without using the operators *, / and % respectively.


#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main()
{
	int a,b,x;
	char c;
	printf("enter 2 values\n");
	scanf("%d%c%d",&a,&c,&b);
	switch (c)
	{
		case '+':
			x=add(a,b);
			printf("add of num is:%d\n",x);
			break;
		case '-':
			x=sub(a,b);
			printf("sub of num is:%d\n",x);
			break;
		case '*':
			x=mul(a,b);
			printf("mul of num is:%d\n",x);
			break;
		case '/':
			x=div(a,b);
			printf("div of num is:%d\n",x);
			break;
		case '%':
			x=mod(a,b);
			printf("mod of num is:%d\n",x);
			break;
	}
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c=0,i;
	for(i=0;i<b;i++)
		c+=a;
	return c;
}
int div(int a,int b)
{
	int i=0;
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
	
	return i;
}
int mod(int a,int b)
{
	int i=0;
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
	a=-a;
	}
	else if (a<0 && b>0)
	{
		a=-a;
		while (b<=a)
		{
		a=a-b;
		i++;
		}
		a=-a;
	}
	if (a==0 && b==0)
	{
		i=0;
		a=0;
	}
	
	return a;
}
