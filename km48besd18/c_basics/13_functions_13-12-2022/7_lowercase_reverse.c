/*7)"Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.
char CaseReverse(char );" */


#include<stdio.h>
char call(char c);
int main()
{
	char c,i;
	printf("enter a character\n");
	scanf("%c",&c);
	if(c>='a'&&c<='z')
	{
		call(c);
		printf("%c is reverse\n",(call(c)));
	}
	else
		printf("%c is same\n",c);
	return 0;
}
char call(char c)
{
	char s;
	s=c-32;
	return s;
}
