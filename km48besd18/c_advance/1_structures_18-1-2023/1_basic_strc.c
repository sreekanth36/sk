/*1) Practice scanf and printf on each member of the structure using a structure variable  using the below structure template:
 *
 * struct student
 * {
 * 
 * int ID;
 * char name[50];
 * int marks[6];
 * int d,m,y;
 * float per;
 * char gender
 * };
 *
 * create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
 * Then calculate percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).*/

#include"sk.h"
void sk(float *,struct std );
int main()
{
	int i,j;
	printf("enter 2 students details\n");
	for(i=0;i<2;i++)
	{
	printf("enter id,name,date,month,year,doj,moj,yoj,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].d,&s[i].m,&s[i].y,&s[i].d1,&s[i].m1,&s[i].y1,&s[i].gender);
	for(j=0;j<6;j++)
	{
		printf("enter %d marks\n",j);
		scanf("%d",&s[i].marks[j]);
	}
	sk(&s[i].per,s[i]);
	}
	printf("output:\n");
	for(i=0;i<2;i++)
	{
	printf("id-%d\nname-%s\n%d-%d-%d\n%d-%d-%d\ngender-%c\npercentage-%f\n",s[i].ID,s[i].name,s[i].d,s[i].m,s[i].y,s[i].d1,s[i].m1,s[i].y1,s[i].gender,s[i].per);
	}
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
