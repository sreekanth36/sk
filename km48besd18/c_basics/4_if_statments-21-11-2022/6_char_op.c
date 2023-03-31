//6)Write a calculator program that takes two integer numbers from user, and one of the operator symbols +,-,* and / as a character and prints the appropriate result using if else.  (print a+b if character entered is + etc)

#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("enter a,c,b values");
	scanf("%d%c%d",&a,&c,&b);
	if (c=='+')
		printf("%d\n",a+b);
	else if(c=='-')
		printf("%d\n",a-b);
	else if(c=='*')
		printf("%d\n",a*b);
	else if (c=='/')
		printf("%d\n",a/b);
		
	return 0;
}
