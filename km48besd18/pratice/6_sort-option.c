/* 6) sorting a list of names received on command line argument, with options like -r and -i using function pointers to call appropriate functions.
-r : when given sort in descening order, when not given sort in ascending order
-i : when given sort without case sensitivity , when not given sort with case sensitivity

eg., ./sort  -r   sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with case sensitive comparison in descending order

./sort -r -i  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with out case sensitive comparison, in descending order

./sort -i  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with out case sensitive comparison, in ascending order

./sort  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with case sensitive comparison, in ascending order */

#include<stdio.h>
#include<string.h>

int i=1,j=1,c=0,s=4,k=1;
char *sk;
int casecmp(char s[],char k[])
{
	int i;
	for(i=0;s[i]||k[i];i++)
	{
		if(s[i]-32 != k[i])
		{
			printf("2=\n%d\n",(s[i]-32)-k[i]);
			return (s[i]-32)-k[i];
		}if(s[i]+32!= k[i])
		{		printf("2=\n%d\n",(s[i]+32)-k[i]);
			return (s[i]+32)-k[i];
		}if(s[i]!=k[i])
		{		printf("2=\n%d\n",(s[i])-k[i]);
			return (s[i])-k[i];
		}	/*		
				if((s[i] >='A' && s[i]<='Z') && (k[i] >='a' && k[i]<='z'))
				{
				printf("2=\n%d\n",(s[i]+32)-k[i]);
				return (s[i]+32)-k[i];
				}
				else if((s[i] >='a' && s[i]<='z') && (k[i] >='A' && k[i]<='Z'))
				{
				printf("3=\n%d\n",s[i]-(k[i]+32));
				return (s[i]-32)-k[i];
				}
				else
				{
				printf("3=\n%d\n",s[i]-(k[i]));
				return (s[i])-k[i];
				}
				}
				*/	}

	return 0;
}

int main(int argc,char *argv[])
{
	int sk1=argc;
	for(int i=1;i<8;i++)
	{
		printf("%s %s\n",argv[i],argv[i+1]);
	casecmp(argv[i],argv[i+1]);
	printf("%d\n",strcasecmp(argv[i],argv[i+1]));
	}
}

