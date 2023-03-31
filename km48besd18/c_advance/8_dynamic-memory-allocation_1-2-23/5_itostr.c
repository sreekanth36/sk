/*5)  read a set of numbers from the user, and convert each integer to string using itoa function that you have written above, and print the numeric string in calling function in the same loop. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	printf("enter set count\n");
	scanf("%d",&i);
	int a[i],j;
	for(j=0;j<i;j++)
	{
		scanf("%d",&a[j]);

	}
	char *s;
	char * itoa(int );
	for(j=0;j<i;j++)
	{

		s=itoa(a[j]);
		printf("%s -numaric\n",s);
		free(s);
	}
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
