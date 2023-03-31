/* 1)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str""" */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void trim(char *sk);
int main()
{
	int a;
	char sk[50];
	printf("enter the string\n");
	scanf("%[^\n]49s",sk);
	trim(sk);
	printf("%s\n",sk);
	return 0;
}

void trim(char *sk)
{
	int i=0,j=0;
	for(i=0;sk[i];i++)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j];j++)	//	for(j=i;sk[j]==' ';j++);
				sk[j]=sk[j+1];	//	strcpy(&sk[i],&sk[j]);
			if(sk[i]!=' ')
				break;
			i--;
		}
	}
	for(i=j;;i--)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j]==' ';j--);	//	for(j=i;sk[j];j++)
			strcpy(&sk[j+1],&sk[i+1]);	//	sk[j]=sk[j+1];
			if(sk[i-1]!=' ')
				break;
		}
	}
}
