//3)Write a program to take input for two character variables using pointers and find out which character has higher ascii value.


#include<stdio.h>
int main()
{
	char x,y;
	char *a=&x,*b=&y;
	printf("enter 2 characters\n");
	scanf("%c %c",a,b);
	printf("%c is bigger\n",*a>*b?*a:*b);
}
