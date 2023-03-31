/*2) Implement itoa function and return the string from the function. Print the result in main.
 * itoa function converts an integer into a string.
 * eg., input 123 , output : "123" (char pointer to "123")
 * declaration : char * itoa(int ))*/

#include<stdio.h>
#include<stdlib.h>
char * itoa(int );
int main()
{
	char *p;
	int k;
	printf("enter integer value\n");
	scanf("%d",&k);
	p=itoa(k);
	printf("output:\n%s\n",p);
	return 0;
}
char * itoa(int i)
{
	int j=0,k=i;
	for(;i;j++)
	{
		i=i/10;
	}
	char *p=(char *)malloc(j);
	for(j--;k;j--)
	{
		p[j]=(k%10+48);
		k=k/10;
	}
	return p;
}
