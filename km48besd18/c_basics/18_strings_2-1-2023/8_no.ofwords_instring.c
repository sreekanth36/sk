//8.no.of words in string to count.


#include<stdio.h>
int compare(char sk[]);
int main()
{
	char sk[50];
	printf("enter a character\n");
	scanf("%50[^\n]s",sk);
	printf("no.of words in string is:%d\n",compare(sk));
	return 0;
}
int compare(char sk[])
{
	int i,j=1;
	if(sk[0]==0)
		return 0;
	for(i=0;sk[i]!=0;i++)
	{
		if(sk[i]==' ' && sk[i+1]!=' ' && sk[i+1]!=0)
			j++;
	}
	return j;
}
