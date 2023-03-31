//6) Count and print how many girls and how many boys are there in the class.

#include<stdio.h>
#define n 5
struct count
{
	char c,name[50];
	int id;

}s[n];
void sk(struct count s[],int *,int*);
int main()
{
	int i,j=0,k=0;
	for(i=0;i<n;i++)
	{
		printf("enter gender ,id.name\n");
		scanf(" %c%d %s",&s[i].c,&s[i].id,s[i].name);
	}
	sk(s,&j,&k);
	printf("%d is count of girls and %d is count of boys\n",j,k);
return 0;
}
void sk(struct count s[],int *j,int *k)
{
	int i=0;
	*j=0;*k=0;
	for(i=0;i<n;i++)
	{
		if(s[i].c=='m')
			*k=*k+1;
		if(s[i].c=='f')
			*j=*j+1;
	}
	return ;
}
