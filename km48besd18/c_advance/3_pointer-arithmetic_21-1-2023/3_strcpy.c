//  3) char * strcpy( char d[] , char s[]);  // returns destination base address

#include<stdio.h>
char * strcpy1(char drr[],char srr[]);
int main()
{
	int i;
	char srr[50];
	char drr[50];
	printf("enter a character\n");
	scanf("%50s",srr);
	strcpy1(drr,srr);
	printf("destination string : %s\n",drr);
	return 0;
}

char * strcpy1(char *drr,char *srr)
{
	int i=0;
	for(i=0;*(srr+i)!='\0';i++)
	{
		*(drr+i)=*(srr+i);
	}
	return drr;
}

























