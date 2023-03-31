/*5)send the array of structures as argument to a function, that will reverse the order of the array elements. use swap  function written above for swapping. print the array in main function.*/

#include"sk.h"
void swap(std s[],std );
int main()
{
	int i;
	std s[5];
	printf("enter 5 students details\n");
	for(i=0;i<5;i++)
	{
	printf("enter id ,name,date,month,year,joing date ,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].dob.d,&s[i].dob.m,&s[i].dob.y,&s[i].doj.d,&s[i].doj.m,&s[i].doj.y,&s[i].gender);
	}
	swap(s,s[1]);
	for(i=0;i<5;i++)
	printf("id-%d\nname-%s\n%d-%d-%d\n%d-%d-%d\ngender-%c\n",s[i].ID,s[i].name,s[i].dob.d,s[i].dob.m,s[i].dob.y,s[i].doj.d,s[i].doj.m,s[i].doj.y,s[i].gender);
	return 0;
}
