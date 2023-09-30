#include <stdio.h>

void ss(char *s);
int main()
{
	char sk[50]={0};
	printf("enter char\n");
	scanf("%s",sk);
	ss(sk);
}

void ss(char *s)
{
	int a=0,b=0,c=1,i=0,j=0,kk=0;
	for(;s[i];i++)
	{
		b=i-1;
		while(b>=0)
		{
			if(s[i]==s[b])
			{
		printf("%c=%c b=%d i=%d\n",s[i],s[b],b,i);
				c=0;
			}
			b--;
		}
		j=i;
		if(c)
		{
			printf("he\n");
			a=0;
			while(s[j])
			{
				if(s[i]==s[j])
					a++;
				j++;

			}
		printf("%c=%d\n",s[i],a);
		}
		c=1;
		if(a%2!=0)
			kk++;
	}
	if(kk<=1)
		printf("palin\n");
	else
		printf("not palin\n");
}

