// 5) Print a string in normal and then reverse, using recursion, without modifying the string.

#include <stdio.h>
#include <string.h>

void sk(char *a)
{
	if((*a)==0)
		return ;
	printf("%c",*a);
	sk(a+1);
}

void skrev(char *a)
{
	if(!(*a))
		return ;
	skrev((a)+1);
	printf("%c",*a);
}

int main()
{
	char a[20]={0};
	char *k=NULL;
	printf("enter a name\n");
	scanf("%19[^\n]s",a);
	printf("==> Normal string <==\n");
	sk(a);
	printf("\n==> reverse string <==\n");
	skrev(a);
	printf("\n");
	return 0;
}

