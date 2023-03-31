//1) create an alias name for the structure and start using it. also create date of birth and date of joining as nested structure type members.

#include"sk.h"
void sk(float *,std );
int main()
{
	int i,j;
	std s[2];
	printf("enter 2 students details\n");
	for(i=0;i<2;i++)
	{
	printf("enter id,name,date,month,year,joining date,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].dob.d,&s[i].dob.m,&s[i].dob.y,&s[i].doj.d,&s[i].doj.m,&s[i].doj.y,&s[i].gender);
	for(j=0;j<6;j++)
	{
		printf("enter %d marks\n",j);
		scanf("%d",&s[i].marks[j]);
	}
	sk(&s[i].per,s[i]);
	}
	for(i=0;i<2;i++)
	{
	printf("id-%d\nname-%s\n%d-%d-%d\n%d-%d-%d\ngender-%c\npercentage-%f\n",s[i].ID,s[i].name,s[i].dob.d,s[i].dob.m,s[i].dob.y,s[i].doj.d,s[i].doj.m,s[i].doj.y,s[i].gender,s[i].per);
	}
	return 0;
}





