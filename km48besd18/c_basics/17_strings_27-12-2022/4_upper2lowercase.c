//4). void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

#include<stdio.h>
void lower(char sk[]);
int main()
{
	char sk[50];
	printf("enter characters\n");
	scanf("%50[^\n]s",sk);
	lower(sk);
	printf("output in lowercase:\n%s\n",sk);
	return 0;
}
void lower(char sk[])
{
	int i;
	for(i=0;sk[i]!='\0';i++)
	{
		if(sk[i]>='A' && sk[i] <='Z')
			sk[i]+=32;
	}
}
