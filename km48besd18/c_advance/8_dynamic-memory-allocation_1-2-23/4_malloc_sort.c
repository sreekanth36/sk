/*4)  Write a program to read  n number of strings from a user and print which string is the smallest of all ( in string comparison, smallest string means that should come the first in dictionary sorting order). Create the strings dynamically and read the data.)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if !(defined n)
#error pls enter number strings n number.
#else
int main()
{
	char *s[n];
	int i,k;
	printf("enter str size\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		s[i]=(char *)malloc(k);
		printf("enter string%d elments\n",i+1);
		scanf(" %49[^\n]s",s[i]);
	}
	for(i=0;i<n-1;i++)
	{

		for(k=0;k<n-1-i;k++)
		{

			if(strcmp(s[k],s[k+1])>0)
			{
				char *temp=(char *)malloc(50);
				strcpy(temp,s[k]);
				strcpy(s[k],s[k+1]);
				strcpy(s[k+1],temp);
				free(temp);
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
	return 0;
}
#endif
