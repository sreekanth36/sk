// 2)  char * strrev( char s[]); // returns string base address

#include<stdio.h>
char * revstr(char s[]);
int main()
{
	int i;
	char str[50];
	printf("enter the string\n");
	scanf("%s",str);
	printf("reverse string:%s\n",revstr(str));
	return 0;
}


char * revstr(char s[])
{
	int i,j,c=0;
	char temp;
	char *ptr;
	ptr=s;
	for(i=0;*(ptr+i)!='\0';i++)
		c++;
	for(j=i-1,i=0;i<j;i++,j--)
	{
		temp=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=temp;

	}
	return s;
}
