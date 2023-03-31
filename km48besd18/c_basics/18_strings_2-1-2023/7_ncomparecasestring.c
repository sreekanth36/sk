//7.string compare and find which is smaller using n user input.


#include<stdio.h>
int compare(char sk[],char sk2[],int);
int main()
{
	int s,n;
	char sk[50];
	char sk2[50];
	printf("enter 1st string\n");
	scanf("%s",sk);
	printf("enter 2nd string\n");
	scanf("%s",sk2);
	printf("enter a value to check\n");
	scanf("%d",&n);
	s=compare(sk,sk2,n);
	if(s==0)
		printf("Both arrays are same\n");
	else if(s<0)
		printf("array 1 is smaller than array 2\n");
	else if(s>0)
		printf("array 1 is bigger than array 2\n");
	return 0;
}
int compare(char sk[],char sk2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(!((sk[i]==sk2[i]+32)||(sk[i]+32==sk2[i])) && (sk[i]!=sk2[i]))
			return (sk[i]-sk2[i]);
	}
	return 0;
}
