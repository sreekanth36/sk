//12) Write the calculator program using switch case statement.

#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("enter a,c,b values\n");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case '+':
			printf("%d\n",a+b);
			break;
		case '-':
			printf("%d\n",a-b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		case '/':
			printf("%d\n",a/b);
			break;
	}
		
	return 0;
}
