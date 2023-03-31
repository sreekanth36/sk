/*1) void strcpy ( char d[] . char s[]); using n user input.
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).*/



#include<stdio.h>
void copy(char sk[],char sk2[],int);
int main()
{
	int n;
	char sk[50];
	char sk2[50];
	printf("enter 1st string characters\n");
	scanf("%50[^\n]s",sk);
	printf("enter no.of max copy count\n");
	scanf("%d",&n);
	copy(sk,sk2,n);
	printf("output:\n%s\n",sk2);
	return 0;
}
void copy(char sk[],char sk2[],int n)
{
	int i;
	for (i=0;i<n;i++)
		sk2[i]=sk[i];
	sk2[i]=0;
}
