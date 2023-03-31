//9.matching string with substring and return its index.


#include<stdio.h>
int compare(char sk[],char sk2[]);
int main()
{
	int s;
	char sk[50];
	char sk2[50];
	printf("enter string character\n");
	scanf("%50[^\n]s",sk);
	printf("enter substring character\n");
	scanf(" %50[^\n]s",sk2);
	s=compare(sk,sk2);
	if(s==-1)
		printf("match not found\n");
	else
		printf("It start from index is:%d\n",s);
	return 0;
}
int compare(char sk[],char sk2[])
{
	int i,j,a;
	for(i=0;sk[i]!=0;i++)
	{
		if(sk[i]==sk2[0])
		{
			for(j=1,a=i+1; ;j++,a++)
			{
				if(sk2[j]==0)
					return i;
				if(sk[a]!=sk2[j])
					break;
			}
		}
	}
	return -1;
}
