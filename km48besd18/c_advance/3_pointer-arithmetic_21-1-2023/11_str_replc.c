/* 11) Write a function to replace a given substring by another string of same length in a given string, return the destination string base address.

char * strreplacestr(char * str[], char *sub1[] , char *sub2[]);

eg., input main string: Kernel Masters
input substring: er
input substring to replace: 12

output: K12nel Mast12s */

#include<stdio.h>
char * strreplace(char  * str, char * sub1, char * sub2);
int main()
{
	char str[50];
	char sub1[50];
	char sub2[50];
	printf("enter a string character \n");
	scanf("%s",str);
	printf("enter a substring character\n");
	scanf("%s",sub1);
	printf("enter a char to change into\n");
	scanf("%s",sub2);
	printf("char after replace %s\n",strreplace(str,sub1,sub2));
	return 0;
} 


char * strreplace(char * str,char *sub1,char *sub2)
{
	char *c=sub2,*a=str,*d;
	for(;*(str)!='\0';str++)
	{

		if(*(str)==*(sub1))
		{
			a=str;
			d=sub1;
			for(;;str++,sub1++)
			{
				if(*(sub1)==0)
				{
					str=a;
					for(;*(sub2);sub2++,str++)
						*(str)=*(sub2);
					sub2=c;
				}
				else if(*(str)!=*(sub1))
				{
					str=a;
					sub1=d;
					break;
				}  	
			}
		}  	
	}
	return a;
}
	 








