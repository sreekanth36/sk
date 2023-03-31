// 3) Implement bubblesort function and sort the strings in ascending alphabetical order.

#include<stdio.h>
#include<string.h>
#define k (strcmp(arr[i],arr[j]))
#if !(defined r && defined c)
#error macro are not defined pls define while gcc
#else
void bubble(char arr[r][c]);
int main()
{
	int i,j;
	char arr[r][c];
	for(i=0;i<r;i++)
	{
		printf("enter a value\n");
		scanf("%s",arr[i]);
	}

	bubble(arr);
	printf("In ascending order\n");
	for(i=0;i<r;i++)
	{
			printf("%s\n",arr[i]);
	}
	return 0;
}

void bubble(char arr[r][c])
{
	char temp[c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=i;j<r;j++)
		{
			if(k>0)
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);

			}
		}
	}
}
#endif
