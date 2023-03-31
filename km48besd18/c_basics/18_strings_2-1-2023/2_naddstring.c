/*2) void strcat( char d[] , char s[]); using n user input.
 *
 * concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )*/


#include<stdio.h>
void add(char sk[],char sk2[],int);
int main()
{
	int n;
	char sk[50];
	char sk2[50];
	printf("enter 1st character\n");
	scanf("%50[^\n]s",sk);
	printf("enter 2nd character\n");
	scanf(" %50[^\n]s",sk2);
	printf("enter max copy count\n");
	scanf("%d",&n);
	add(sk,sk2,n);
	printf("output:\n%s\n",sk);
	return 0;
}
void add(char sk[],char sk2[],int n)
{
	int i=0,j;
	for(j=0;sk[j]!='\0';j++);
	for (i=0;i<n;i++,j++)
		sk[j]=sk2[i];

}
