//1)Create a character pointer array, initialise the pointers to read only strings. Sort the array and print.

#include<stdio.h>
#include<string.h>
int main()
{
	char *s[12]={"jan","feb","march","aprl","may","june","july","aug","sep","oct","nov","dec"};
	int i=0,j=0;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				char *tem=s[j];
				s[j]=s[j+1];
				s[j+1]=tem;
			}
		}
	}
	for(i=0;i<12;i++)
	printf("%s\n",s[i]);
}
