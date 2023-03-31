// 4) int  strcmp (char s1[], char s2[]);
#include<stdio.h>
int strcmp(char s1[],char s2[]);
int main()
{
	int t;
	char s1[50];
	char s2[50];
	printf("enter a first character\n");
	scanf("%50[^\n]s",s1);
	printf("enter a second character\n");
	scanf(" %50[^\n]",s2);
	t = strcmp(s1,s2);
	if(t==0)
		printf("both are equal\n");
	if(t<0)
		printf(" first is smaller than second \n");
	if(t>0)
		printf(" first is bigger than second \n");
	return 0;
} 

int strcmp(char *s1,char *s2)
{
	int i;
	for(i=0;*(s1+i)!='\0';i++)
	{
		if(*(s1+i)!=*(s2+i))
			return(*(s1+i)-*(s2+i));
	}
	return 0;

}

