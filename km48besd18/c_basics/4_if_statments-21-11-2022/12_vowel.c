//12) Write a program to read a character and print if it is vowel or not.

#include<stdio.h>
int main()
{
	char c;
	printf("enter char value\n");
	scanf("%c",&c);
	if (c=='A')
		printf("%c is vowel\n",c);
	else if (c=='E')
		printf("%c is vowel\n",c);
	else if (c=='I')
		printf("%c is vowel\n",c);
	else if (c=='O')
		printf("%c is vowel\n",c);
	else if (c=='U')
		printf("%c is vowel\n",c);
	else if (c=='a')
		printf("%c is vowel\n",c);
	else if (c=='e')
		printf("%c is vowel\n",c);
	else if (c=='i')
		printf("%c is vowel\n",c);
	else if (c=='o')
		printf("%c is vowel\n",c);
	else if (c=='u')
		printf("%c is vowel\n",c);
	else 
		printf("%c is not a vowel\n",c);
	return 0;
}



