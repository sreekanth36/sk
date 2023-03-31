//11) C program to check whether a character is vowel or consonant using switch statement

#include<stdio.h>
int main()
{
	char c;
	printf("enter char value\n");
	scanf("%c",&c);
	switch(c)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c is vowel\n",c);
			 break;
		Default:printf("%c is not a vowel\n",c);
	}
}



