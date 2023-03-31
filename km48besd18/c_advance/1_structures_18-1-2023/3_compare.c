/*3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.*/

#include"sk.h"
int sk(struct std,struct std );
int main()
{
	int i;
	printf("enter 2 students details\n");
	for(i=0;i<2;i++)
	{
	printf("enter name,date,month,year,gender\n");
	scanf(" %s%d%d%d %c",s[i].name,&s[i].d,&s[i].m,&s[i].y,&s[i].gender);
	}
	if(sk(s[0],s[1]))
		printf("both given structures are same \n");
	else
		printf("both given structures are not same\n");
	return 0;
}
int sk(struct std si,struct std s)
{
	int i;
	for(i=0;(si.name[i]!=0||s.name[i]!=0);i++)
	{
	if(si.name[i]!=s.name[i])
		return 0;
	}
	if(si.gender!=s.gender)
		return 0;
	if(si.d!=s.d)
		return 0;
	if(si.m!=s.m)
		return 0;
	if(si.y!=s.y)
		return 0;
	return 1;
}
