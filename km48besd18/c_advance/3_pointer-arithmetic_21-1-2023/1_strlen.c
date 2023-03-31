// 1) int strlen(char s[]);

#include<stdio.h>
int lenstr(char s[]);
int main()
{
	int i;
	char str[50];
	printf("enter the str value\n");
	scanf("%s",str);
	i=lenstr(str);
	printf("string length : %d\n",i);
	return 0;
} 


int lenstr(char s[])
{
	char *ptr;
	int i=0,c=0;
	ptr=s;
	for(;*(ptr+i)!='\0';i++)
		c++;
		return c;
}

