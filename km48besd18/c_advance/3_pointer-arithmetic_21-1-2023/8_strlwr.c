// 8) char * strlwr(char s[]); // returns s base address

#include<stdio.h>
char *upper(char s[]);
int main()
{
	char s[50];
	printf("enter a charater\n");
	scanf(" %50[^\n]s",s);
	printf("%s",upper(s));
	return 0;
}

char* upper(char s[])
{
	char *c=s;	
	for(;*(s)!='\0';s++)
	{
		if(*(s)>='A' && *(s)<='Z')
			*(s)=*(s)+32;
	}
	return c;
}



