// 5) int strncmp(char s1[]. char s2[], int n);

#include<stdio.h>
int strncmp1(char s1[],char s2[],int n);
int main()
{
	int t,n;
	char s1[50];
	char s2[50];
	printf("enter a first character\n");
	scanf("%50[^\n]s",s1);
	printf("enter a second character\n");
	scanf(" %50[^\n]",s2);
	printf("enter a n for count\n");
	scanf("%d",&n);
	t = strncmp1(s1,s2,n);
	if(t==0)
		printf("both are equal\n");
	if(t<0)
		printf(" first is smaller than second \n");
	if(t>0)
		printf(" first is bigger than second \n");
	return 0;
} 

int strncmp1(char *s1,char *s2,int n)
{
	int i,j;
	for(i=0;i<n;i++,j++)
	{
		if(!((*(s1+i)==*(s2+i)+32)||(*(s1+i)+32==*(s2+i))) && (*(s1+i)!=*(s2+i)))
			return(*(s1+i)-*(s2+i));
	}
	return 0;

}

