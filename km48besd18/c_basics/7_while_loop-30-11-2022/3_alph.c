//3) Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character.

#include<stdio.h>
int main()
{
	int i=0,n;
	char c;
	printf("enter max count\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter c value\n");
		scanf(" %c",&c);
		if(c>='0'&&c<='9')
			printf("%c is numeric character\n",c);
		else if(c>='A'&&c<='Z')
			printf("%c is capital alphabet\n",c);
		else if(c>='a'&&c<='z')
			printf("%c is small alphabet\n",c);
		else
			printf("%c is special character\n",c);
		++i;
	}
	return 0;
}



