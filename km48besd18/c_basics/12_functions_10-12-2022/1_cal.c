/*1)Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
Hint: int add(int , int);
int sub (int, int);*/

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
	int c;
	c=a*b;
	return c;
}
int div(int a,int b)
{
	int c;
	c=a/b;
	return c;
}
int mod(int a,int b)
{
	int c;
	c=a%b;
	return c;
}
