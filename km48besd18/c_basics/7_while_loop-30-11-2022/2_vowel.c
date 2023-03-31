//2) Read n characters from user, and print if each character is vowel or not.

#include<stdio.h>
int main()
{
	int i=0,n;
	char c;
	printf("enter max count value\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter c value\n");
		scanf(" %c",&c);
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			printf("%c is vowel\n",c);
		else
			printf("%c is not vowel\n",c);
		i++;
	}
	return 0;
}
