// 2) Create a 2 dimensional array of characters. Take input of strings from the user and print the strings back using only row index.

#include<stdio.h>
#if !(defined r && defined c)
#error macro are not defined pls define while gcc
#else
int main()
{
	int i,j;
	char arr[r][c];
	for(i=0;i<r;i++)
	{
		printf("enter a value\n");
		scanf("%s",arr[i]);
	}
	for(i=0;i<r;i++)
	{
		printf("%s\n",arr[i]);
	}
	return 0;
}
#endif
	
