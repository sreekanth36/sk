//10. convert given string into integer.


#include<stdio.h>
int intconvert(char sk[]);
int main()
{
	char sk[50];
	printf("enter string character\n");
	scanf("%50[^\n]s",sk);
	printf("integer is:%d\n",intconvert(sk));
	return 0;
}
int intconvert(char sk[])
{
	int i,x,s=0;
	for(i=0;sk[i]!=0;i++)
	{
		s*=10;
		x=sk[i]-48;
		s=x+s;
	}
	return s;
}
