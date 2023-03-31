/*3) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
 * eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
 * output : kerraaya*/

#include<stdio.h>
#include<stdlib.h>
char * concat(char *,char *,int ,int);
int main()
{
	char *s,*s1,*cat;
	int n;
	printf("enter s and s1 sizes\n");
	scanf("%d",&n);
	s=(char*)malloc(n);
	scanf("%d",&n);
	s1=(char*)malloc(n);
	printf("enter str and str1 elements\n");
	scanf("%49[^\n]s ",s);
	scanf(" %49[^\n]s",s1);
	int m;
	printf("enter m and n values");
	scanf("%d%d",&m,&n);
	cat=concat(s,s1,m,n);
	printf("%s\n",cat);
	return 0;
}
char * concat(char *s,char *s1,int m,int n)
{
	char *s2=(char *)malloc(m*n+1);
	int i;
	for( i=0;i<m;i++)
	{
		s2[i]=s[i];
	}

	for(int j=0;j<n;j++,i++)
	{

		s2[i]=s1[j];
	}
	s2[i]=0;
	return s2;
}
