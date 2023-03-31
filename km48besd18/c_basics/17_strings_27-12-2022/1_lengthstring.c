/*1) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
//int strlen_1(char str[])
//{
//int i;
//for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
//return i;  // return the count.
//}
*/

#include<stdio.h>
int str(char sk[]);
int main()
{
	char sk[50];
	printf("%d\n",str(sk));
	return 0;
}
int str(char sk[])
{
	int i;
	printf("enter character\n");
	scanf("%50s",sk);
	for(i=0;sk[i]!='\0';i++);
return i;
}
