// 10) char * strstr(char str[], char sub[]); //returns the address of character in main string from where substring is matching.

#include<stdio.h>
char * strstr1(char str[],char sub[]);
int main()
{
	int t,i;
	char str[50];
	char sub[50];
	printf("enter a string character\n");
	scanf("%50[^\n]s",str);
	printf("enter a substring character\n");
	scanf(" %50[^\n]",sub);
	printf("matched from char is %s\n",strstr1(str,sub));
	return 0;
}

char * strstr1(char str[], char sub[])
{
	char *a,*k;
	for(;*(str)!=0;str++)
	{
		if(*(str)==*(sub))
		{
			a=str;
			k=sub;
			for(;;str++,sub++)
			{
				if(*(sub)==0)
				{
					return a;
				}
				else if(*(str)!=*(sub))
				{str=a;
					break;
				}
			}
			sub=k;
		}
	}
}




