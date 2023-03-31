// 5) read a set of words into a 2 dimentional array. Make a single sentence out of the words with space as a delimitter and store in another single dimentional character array and display. you can use string concatenation function to do this.

#include<stdio.h>
#include<string.h>
#define k strcat(srr,arr[i])
#if !(defined r && defined c)
#error macro are not defined pls define while gcc
#else
void strcat1(char arr[r][c],char srr[]);
int main()
{
	int i,j,a=0,b;
	char arr[r][c];
	char srr[100];
	for(i=0;i<r;i++)
	{	       
		printf("enter a value\n");
		scanf("%s",arr[i]);
	}

 	strcat1(arr,srr);
	printf("%s\n",srr);
	return 0;
}

void strcat1(char arr[r][c],char srr[])
{
	int i;
	char s[2]=" ";
	for(i=0;i<r;i++)
	{
	k;
	strcat(srr,s);
	}
}
#endif
