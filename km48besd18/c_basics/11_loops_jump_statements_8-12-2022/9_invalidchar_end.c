//9) Write the calculator program to read 2 numbers and one of the characters +,-,*,/ or % in a loop, and print the output as long as the user is entering valid characters. If the user enters invalid character for the operation, then stop the program. 


#include<stdio.h>
int main()
{
	int a,b,n;
	char c;
sk:
	printf("enter 2 values\n");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case '+':
		printf("add of two numbers is%d\n",a+b);
		//break;
		goto sk;
		case '-':
		printf("sub of two numbers is %d\n",a-b);
		//break;
		goto sk;
		case '*':
		printf("mul of two numbers is %d\n",a*b);
		//break;
		goto sk;
		case '/':
		printf("div of two numbers is %d\n",a/b);
		//break;
		goto sk;
		case '%':
		printf("mod of two numbers is %d\n",a%b);
		//break;
		goto sk;
	}
//goto sk;
	return 0;
}
