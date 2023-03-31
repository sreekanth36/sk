/*Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).)*/
#include"sk.h"
int main()
{
	int a,b;
	char c;
	printf("enter 2 values\n");
	scanf("%d %c%d",&a,&c,&b);
	switch(c)
	{
		case '+':printf("add is:%d \n",add);
			 break;
		case '-':printf("sub is:%d \n",sub);
			 break;
		case '*':printf("mul is:%d \n",mul);
		 	 break;
		case '/':printf("div is:%d \n",div);
			 break;

	}
	return 0;
}
