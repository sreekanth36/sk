/*4)WAP to print if  a character is alphanumeric or special character, using macros.*/
#include<stdio.h>
#define alpha(c) ((('0'<=c)&&(c<='9'))||(('A'<=c)&&(c<='Z'))||(('a'<=c)&&(c<='z')))
int main()
{
	char c;
	printf("enter a char\n");
	scanf(" %c",&c);
	if(alpha(c))
		printf("%c is alphanumaric char",c);
	else
		printf("%c is a special char\n",c);
	return 0;

}
