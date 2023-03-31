//6.string compare and find which is smaller.


#include<stdio.h>
int compare(char sk[],char sk2[]);
int main()
{
	int s;
	char sk[50];
	char sk2[50];
	printf("enter 1st string\n");
	scanf("%s",sk);
	printf("enter 2nd string\n");
	scanf("%s",sk2);
	s=compare(sk,sk2);
	if(s==0)
		printf("Both arrays are same\n");
	else if(s<0)
		printf("array 1 is smaller than array 2\n");
	else if(s>0)
		printf("array 1 is bigger than array 2\n");
	return 0;
}
int compare(char sk[],char sk2[])
{
	int i;
	for(i=0;sk[i]!='\0';i++)
	{
		if(!((sk[i]==sk2[i]+32)||(sk[i]+32==sk2[i])) && (sk[i]!=sk2[i]))
			return (sk[i]-sk2[i]);
	}
	return 0;
}
