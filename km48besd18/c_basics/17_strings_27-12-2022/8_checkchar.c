//8) int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 


#include<stdio.h>
int compare(char sk[],char);
int main()
{
	int s;
	char sk[50],n;
	printf("enter string character\n");
	scanf("%50[^\n]s",sk);
	printf("enter a character\n");
	scanf(" %c",&n);
	s=compare(sk,n);
	if (s==-1)
		printf("character not found\n");
	else
		printf("index is:%d\n",s);
	return 0;
}
int compare(char sk[],char n)
{
	int i;
	for(i=0;sk[i]!='\0';i++)
	{
		if(n==sk[i])
			return i;
	}
	return -1;
}
