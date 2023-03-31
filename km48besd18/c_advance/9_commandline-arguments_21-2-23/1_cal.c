/*1	Implement the calculator program using Command line arguments

eg., input:  >./calc   56 + 671
output : 727

note: when giving * in commandline, always give "*"*/

#include<stdio.h>
int sk(char sk[])
{
	int s=0,i;
	for(i=0;sk[i];i++)
	{
		if(sk[i]!='-')
			s=(s*10)+(sk[i]-48);
	}
	if(sk[0]=='-')
		s=-s;
	return s;
}
int main(int argc,char * argv[])
{
/*	printf("%p\n",argv[0]);
	printf("%p\n",&argv[0]);
	printf("%p\n",&argv[0][0]);*/
	int s,i,k;
	s=sk(argv[1]);
	k=sk(argv[3]);
	if(argv[2][0] == '+')
		printf("add is:%d\n",s+k);
	else if(argv[2][0] == '-')
		printf("sub is:%d\n",s-k);
	else if(argv[2][0] == '*')
		printf("mul is:%d\n",s*k);
	else
		printf("div is:%d\n",s/k);
	return 0;
}
