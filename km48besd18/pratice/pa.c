

#include<stdio.h>
void trim(char * sk);
int main()
{
	char sk[50]={0};
	printf("enter string\n");
	scanf("%[^\n]49s",sk);
	trim(sk);

	printf("%s\n",sk);
	return 0;
}

void trim(char * sk)
{
	int a,j,i;
	for(i=0;sk[i];i++)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j];j++)
				sk[j]=sk[j+1];
			if(sk[i]!=' ')
				break;
			i--;
		}
	}
	for(i=j;;i--)
	{
		if(sk[i]==' ')
		{
			for(j=i;sk[j];j++)
				sk[j]=sk[j+1];
			if(sk[i-1]!=' ')
				break;

		}
	}
}
