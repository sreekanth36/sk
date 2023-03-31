//5) void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string


#include<stdio.h>
void upper(char sk[]);
int main()
{
	char sk[50];
	printf("enter characters\n");
	scanf("%50[^\n]s",sk);
	upper(sk);
	printf("output in lowercase:\n%s\n",sk);
	return 0;
}
void upper(char sk[])
{
	int i;
	for(i=0;sk[i]!='\0';i++)
	{
		if(sk[i]>='a' && sk[i] <='z')
			sk[i]-=32;
	}
}
