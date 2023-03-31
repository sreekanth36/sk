//4.relpace string one to another


#include<stdio.h>
void compare(char sk[],char,char);
int main()
{
	char sk[50],n,c;
	printf("enter string character\n");
	scanf("%50[^\n]s",sk);
	printf("enter a character to replace\n");
	scanf(" %c",&n);
	printf("enter a character replace with\n");
	scanf(" %c",&c);
	compare(sk,n,c);
	printf("%s\n",sk);
	return 0;
}
void compare(char sk[],char n,char c)
{
	int i;
	for(i=0;sk[i]!='\0';i++);
	for(i--;sk[i]!='\0';i--)
	{
		if(n==sk[i])
			sk[i]=c;
	}
}
