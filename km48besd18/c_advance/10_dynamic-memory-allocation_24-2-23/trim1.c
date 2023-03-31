/*1)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str"""
*/

#include<stdio.h>
#include<string.h>
void trim(char * sk);
void sk1(char *);
int main()
{
	char sk[50]={0};
	printf("enter string\n");
	scanf("%[^\n]49s",sk);
	trim(sk);
/*	int j,i;
	for(i=0;sk[i];i++)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j];j++)
				sk[j]=sk[j+1];
			if(sk[i]!=' ')
				break;
			i--;
		}
	}
	for(i=j;;i--)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j];j++)
				sk[j]=sk[j+1];
			if(sk[i-1]!=' ')
				break;

		}
	}*/
	printf("%s\n",sk);
	return 0;
}

void trim(char * sk)
{
	int j,i,s;
	for(i=0;sk[i];i++)
	{
		if(sk[i]==' ')
		{
//sk=strchr(sk,' ');
//printf("%d",*sk);
			for(j=i;(sk[j])==' ';j++);
				strcpy(&sk[i],&sk[j]);
			if(sk[i]!=' ')
				break;
		}
	}
	s=strlen(sk);
	for(i=s;;i--)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j]==' ';j++);
			strcpy(&sk[i],&sk[j]);
			if(sk[i-1]!=' ')
				break;

		}
	}
}
