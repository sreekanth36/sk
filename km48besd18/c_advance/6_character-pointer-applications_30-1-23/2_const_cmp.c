//2)implement your own string compare function and try calling the function using two string constants as input arguments.

#include<stdio.h>
int main()
{
	int  strcmp1(char *d, char *s);
	if(strcmp1("sree","kanth"))
		printf("both the constant strings are same\n");
	else
		printf("both the constant strings are not same\n");
	return 0;
}
int strcmp1(char *d,char *s)
{
	int i=0;
	for(i=0;d[i]!=0||s[i]!=0;i++)
	{
		if(s[i]!=d[i])
			return 0;
	}
	return 1;
}
