/*2) read an integer number, display the number as a number name expansion.
 * eg., 458 : four five eight*/

#include<stdio.h>
int main()
{
	char *s[9]={"one","two","three","four","five","six","seven","eight","nine"},i[50];
	printf("pls enter numarical num \n");
	int j=0,su=0;
	scanf(" %s",i);
	for(j=0;i[j];j++)
	{
		su=i[j]-49;
		printf("%s ",s[su]);
	}

}
