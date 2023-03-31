//4) Write a swap function to swap the values of two character variables.

#include<stdio.h>
void swap(char *p,char*s);
int main()
{
	char s,s1;
	printf("enter two chars\n");
	scanf(" %c %c",&s,&s1);
	swap(&s,&s1);
	printf("%c-s,%c-s1\n",s,s1);
	return 0;
}
void swap(char *p,char *s)
{
	char temp;
	temp=*p;
	*p=*s;
	*s=temp;
	return ;
}
