/*1.Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.
1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
2 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.*/


#include"sk1.2.h"
int a,b,c;
char x;
int main()
{
	printf("enter 2 values\n");
	scanf("%d%c%d",&a,&x,&b);
	switch(x)
	{
		case '+':add();
			printf("add of num is:%d\n",c);break;
		case '-':sub();
			 printf("sub of num is:%d\n",c);break;
		case '*':mul();
			 printf("mul of num is:%d\n",c);break;
		case '/':div();
			 printf("div of num is:%d\n",c);break;
		case '%':mod();
			 printf("mod of num is:%d\n",c);break;
	}
	return 0;
}



