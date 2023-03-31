//6)Input an alphabet. Output its case reverse.

#include<stdio.h>
int main()
{
	char a;
	printf("enter a value\n");
	scanf("%c",&a);
	(a>=65)&&(a<=90)?printf("%c is reverse\n",a+32):(a>=97)&&(a<=122)?printf("%c is reverse\n",a-32):printf("invalid");
}
