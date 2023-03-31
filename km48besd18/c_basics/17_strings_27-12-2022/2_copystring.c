/*2) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
	int i = 0;
	while( s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
}*/



#include<stdio.h>
void copy(char sk[],char sk2[]);
int main()
{
	char sk[50];
	char sk2[50];
	printf("enter characters\n");
	scanf("%50[^\n]s",sk);
	copy(sk,sk2);
	printf("output:\n%s\n",sk2);
	return 0;
}
void copy(char sk[],char sk2[])
{
	int i;
	for (i=0;sk[i]!='\0';i++)
		sk2[i]=sk[i];
	sk2[i]='\0';
}
