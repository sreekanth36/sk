/*9)Define a macro to compute the length of a string ,when string is given as argument.*/

#include<stdio.h>
#define s(s) for(i=0;s[i];i++);
int main()
{
	int i=0;
	char sk[50];
	printf("enter string elements\n");
	scanf("%49[^\n]s",sk);
	s(sk)
		printf("%d is the length of the element\n",i);
	return 0;

}
