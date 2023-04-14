/* 2) Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime. 
-read number of strings (number of rows)
	- allocate memory for a character pointer array, for the given number of rows
	- visit each row using a row loop.allocate memory for each string dynamically, assign base address to the character pointer array element. Read the string.
	- sort the character pointer array (sort the strings). use string comparison function, and swap functions.
	- release the dynamic memory properly, after printing the results. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i=1,j=1,c=0,s=4,k=0;
char *sk;

void sksort(char **argv)
{
	sk=*(argv+j);
	*(argv+j)=*(argv+j+1);
	*(argv+j+1)=sk;
}

void sk2(int argc,char ** argv)
{
	int sk1=argc,i=0;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=0;j<sk1-1;j++)
		{
			if((strcmp(argv[j],argv[j+1])>0))
			{
				c=1;
				sksort(argv);
			}
		}
		if(c==0)
			break;
	}
}

int main()
{
	int r,i,c;
	char **sk;
	printf("enter no.of rows\n");
	scanf("%d",&r);
	sk=(char **)malloc(sizeof(char *)*r);
	for(i=0;i<r;i++)
	{
		printf("enter no.of column\n");
		scanf("%d",&c);
		sk[i]=(char *)malloc(sizeof(char));
		printf("enter string\n");
		scanf("%s",sk[i]);
	}
	sk2(r,sk);
	printf("output:\n");
	for(i=0;i<r;i++)
		printf(" %s\n",sk[i]);
	for(i=0;i<r;i++)
		free(sk[i]);
	free(sk);
	return 0;
}
