// 6) Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in a loop.

#include<stdio.h>
#if !(defined r && defined c)
#error you waste fellow inside we dnt define the macros define while gcc
#else
int main()
{

	char name[r][c];
	int i,j;

	for(i=0;i<r;i++)
	{
	        printf("enter the name\n");
		scanf(" %49[^\n]s",name[i]);
	}
	printf("\nentered characters\n");
	for(i=0;i<r;i++)
	{
		for(j=0;name[i][j];j++)
		{
			printf("%c",name[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
#endif





