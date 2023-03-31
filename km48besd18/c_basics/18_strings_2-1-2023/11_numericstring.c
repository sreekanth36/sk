//11.verify given string is numeric or not.


#include<stdio.h>
int num(char sk[]);
int main()
{
	int s;
	char sk[50];
	printf("enter string character\n");
	scanf("%50[^\n]s",sk);
	s=num(sk);
	if(s==0)
		printf("The string is not numeric\n");
	else
		printf("The string is numeric\n");
	return 0;
}
int num(char sk[])
{
	int i;
	for(i=0;sk[i]!=0;i++)
	{
		if(!(sk[i]>='0' && sk[i]<='9'))
			return 0;
	}
	return 1;
}
