/*1)Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
Hint: int add(int , int);
int sub (int, int);*/

#include"sk.h"
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

