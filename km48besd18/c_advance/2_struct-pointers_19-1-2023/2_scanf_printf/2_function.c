#include"sk.h"
void scan(std s[])
{
	printf("enter id,name,date,month,year,joining date,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s->ID,s->name,&s->dob.d,&s->dob.m,&s->dob.y,&s->doj.d,&s->doj.m,&s->doj.y,&s->gender);
	return ;
}
void print(std s)
{
	printf("id-%d\nname-%s\n%d-%d-%d\n%d-%d-%d\ngender-%c\n",s.ID,s.name,s.dob.d,s.dob.m,s.dob.y,s.doj.d,s.doj.m,s.doj.y,s.gender);
	return ;
}
