//8)check if a character is alphabet or not

#include<stdio.h>
int main()
{
	char c;
	printf("enter char value\n");
	scanf("%c",&c);
	(c>64)&&(c<91)||(c>96)&&(c<123)?printf("%c is Alphabet\n",c):printf("%c is not Alphabet\n",c);
	return 0;
}

