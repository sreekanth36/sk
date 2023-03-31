/*3) void strcat( char d[] , char s[]);
 *
 * concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
 * eg., char d[] = "Kernel";
 * char s[] = "Masters";
 *
 * output: after concatenation d[] becomes " KernelMasters"; */


#include<stdio.h>
void add(char sk[],char sk2[]);
int main()
{
	char sk[50];
	char sk2[50];
	printf("enter 1st character\n");
	scanf("%50[^\n]s",sk);
	printf("enter 2nd character\n");
	scanf(" %50[^\n]s",sk2);
	add(sk,sk2);
	printf("output:\n%s\n",sk);
	return 0;
}
void add(char sk[],char sk2[])
{
	int i=0,j;
	for(j=0;sk[j]!='\0';j++);
	for (i=0;sk2[i]!='\0';i++,j++)
		sk[j]=sk2[i];

}
