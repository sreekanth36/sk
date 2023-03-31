//7) int palindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome.


#include<stdio.h>
int palindrome(char sk[]);
int main()
{
	char sk[50],i;
	printf("enter a character\n");
	scanf("%50[^\n]s",sk);
	i=palindrome(sk);
	if(i==1)
		printf("string is palindrome\n");
	else
		printf("string is not a palindrome\n");
	return 0;
}
int palindrome (char sk[])
{
	int i,j;
	for(j=0;sk[j]!='\0';j++);
	for(--j,i=0;i<j;i++,j--)
	{
		if(sk[i]!=sk[j])
			return 0;
	}
	return 1;
}
