// 3) Write a program to reverse a string , using index method.

#include <stdio.h>
#include <string.h>

void sk(char a[],int s,int k)
{
	char b;
	if(s>k)
		return ;
	b=a[s];
	a[s]=a[k];
	a[k]=b;
	sk(a,s+1,k-1);
}

int main()
{
	char a[20]={0};
	printf("enter a name\n");
	scanf("%19[^\n]s",a);
	sk(a,0,strlen(a)-1);
	printf("%s\n",a);
}

