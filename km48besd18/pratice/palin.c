#include<stdio.h>
int main()
{
	char sk[]="Abc232vasadaad757tamat";
	int i,s,b,j;
	for(i=0;sk[i];i++)
	{
		for(j=i+1;sk[j];j++)
		{	
		       	if(sk[j]==sk[i])
			{
//				printf("j-%c i-%c\n",sk[j],sk[i]);
				for(s=j,b=i;s>b;s--,b++)
				{
					if(sk[s]!=sk[b])
						goto tata;
				}
				for(s=i;s<=j;s++)
					printf("%c",sk[s]);
//				printf("\n");
				i=j;
//			printf("i-%c\n",sk[i]);
			break;
			}
		}
tata:
	}
	printf("\n");
}
