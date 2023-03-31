//9)Write a program to read a character and print if it is vowel or not.

#include<stdio.h>
int main()
{
	char c;
	printf("enter char value\n");
	scanf("%c",&c);
	if ((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')||(c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
		printf("%c is vowel\n",c);
	else 
		printf("%c is not a vowel\n",c);
	return 0;
}



