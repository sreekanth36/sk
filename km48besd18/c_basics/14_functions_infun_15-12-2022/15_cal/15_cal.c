//15) Modify the calculator program - multiply, division and remainder functions to return the result without using the operators *, / and % respectively.

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



