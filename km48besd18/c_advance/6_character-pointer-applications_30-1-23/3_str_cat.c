/*3) Implement your own string concatenation function.
 *
 * try calling the string copy function by sending the below as input:
 * 1) string constant as destination and string variable as source
 * 2) string variable as destination and string constant as source
 * 3) string variable as destination and string variable as source
 * 4) string constant as destination and string constant as source
 *
 * note down the output and analyze the reasons.*/

#include<stdio.h>
int main()
{
	char s[50]="sree";
	char s1[50]="kanth";
	void cat(char *d,char *s);
//	cat("sree",s);
	cat(s,"kanth");
	printf("%s-2\n",s);
	cat(s,s1);
	printf("%s-3\n",s);
	cat("sree","kanth");
	return 0;
}
void cat(char *d,char *s)
{
	int i=0,j=0;
	for(i=0;d[i];i++);
	for(j=0;d[i]=s[j];j++,i++);
	return;
}

