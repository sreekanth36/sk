/*2) Create an array of structures using above template. read the data for all elements of the array. and print the topper name with highest percentage.*/

#include"sk.h"
void sk(float *,struct std );
int main()
{
	int i,j,a=0;
	printf("enter 3 students details\n");
	for(i=0;i<3;i++)
	{
	printf("enter id,name,date,month,year,joining date ,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].d,&s[i].m,&s[i].y,&s[i].d1,&s[i].m1,&s[i].y1,&s[i].gender);
	for(j=0;j<6;j++)
	{
		printf("enter %d marks\n",j);
		scanf("%d",&s[i].marks[j]);
	}
	sk(&s[i].per,s[i]);
	}
	for(i=0;i<2;i++)
	{
		if(s[a].per<s[i+1].per)
			a=i+1;
	}
	printf("no.id-%d\nname- %s is topper and marks is %f\n",s[a].ID,s[a].name,s[a].per);
	return 0;
}
void sk(float *sk,struct std s)
{
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		sum=sum+s.marks[i];
	}
	*sk=(sum/6.0);
}
