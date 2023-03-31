// 9) char * strchr( char s[], char c); // returns address of given character first occurrence in given string

#include<stdio.h>
char * strchr1(char s[], char c);
int main()
{
	char t;
	char s[50];
	char c;
	printf("enter a string\n");
	scanf("%s",s);
	printf("enter a character\n");
	scanf(" %c",&c);
	printf("given str matched %s\n",strchr1(s,c));
	return 0;
}

char * strchr1(char s[], char c)
{

	for(;*(s)!='\0';s++)
	{
		if(!(*(s)!=c))
		return s;
	}

}






































