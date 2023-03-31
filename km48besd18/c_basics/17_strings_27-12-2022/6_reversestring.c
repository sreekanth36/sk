/* 6) void strrev( char str[]);
//reverse the string (without using any extra array)
//
//eg., input : str[] = "Kernel";
//
//output : str[] = "lenreK"  */


#include<stdio.h>
void reverse (char sk[]);
int main()
{
	char sk[50];
	printf("enter a character\n");
	scanf("%50[^\n]s",sk);
	reverse(sk);
	printf("reverse is:%s\n",sk);
	return 0;
}
void reverse (char sk[])
{
	int i,j;
	char x;
	for(j=0;sk[j]!='\0';j++);
	for(--j,i=0;i<j;i++,j--)
	{
		x=sk[i];
		sk[i]=sk[j];
		sk[j]=x;
	}
}
