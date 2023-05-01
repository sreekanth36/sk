// 4) write a program to reverse a string, using pointer increment method.

#include <stdio.h>
#include <string.h>

void sk(char *a,char *k)
{
	char b;
	if(a>k)
		return ;
	b=*a;
	*a=*k;
	*k=b;
	sk(a+1,k-1);
}

int main()
{
	char a[20]={0};
	char *k=NULL;
	printf("enter a name\n");
	scanf("%19[^\n]s",a);
	k=a;
	sk(a,k+strlen(a)-1);
	printf("%s\n",a);
}

