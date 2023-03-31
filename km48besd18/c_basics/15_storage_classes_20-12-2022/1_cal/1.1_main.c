/*1.Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.
1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
2 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.*/


#include"sk1.1.h"
int a,b;
char x;
int main()
{
	printf("enter 2 values\n");
	scanf("%d%c%d",&a,&x,&b);
	switch(x)
	{
		case '+':printf("add of num is:%d\n",add());break;
		case '-':printf("sub of num is:%d\n",sub());break;
		case '*':printf("mul of num is:%d\n",mul());break;
		case '/':printf("div of num is:%d\n",div());break;
		case '%':printf("mod of num is:%d\n",mod());break;
	}
	return 0;
}



