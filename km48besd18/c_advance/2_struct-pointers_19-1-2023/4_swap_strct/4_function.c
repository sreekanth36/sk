#include"sk.h"
#include<string.h>
void scan(std s[])
{
	int i;
	printf("enter 2 students details\n");
	for(i=0;i<2;i++)
	{
	printf("enter id,name,date,month,year,joining date,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].dob.d,&s[i].dob.m,&s[i].dob.y,&s[i].doj.d,&s[i].doj.m,&s[i].doj.y,&s[i].gender);
	}
}
void swap(std s1,std s[])
{
	int i;
	for(i=0;i<1;i++)
	{		
		s1=s[i];
		s[i]=s[i+1];
		s[i+1]=s1;
	}
}
void print(std s[])
{
	int i;
	printf("output:\n");
	for(i=0;i<2;i++)
	printf("id-%d\nname-%s\n%d-%d-%d\n%d-%d-%d\ngender-%c\n",s[i].ID,s[i].name,s[i].dob.d,s[i].dob.m,s[i].dob.y,s[i].doj.d,s[i].doj.m,s[i].doj.y,s[i].gender);
}

