/*4) write a function to take the array of structures as argument and return the structure element with oldest date of birth.
 *
 * return the structure variable using return statement and array element with index. Return type of the function will be struct student.
 *
 * eg.,struct student oldeststudent(struct student arr[])
 * {
 *  
 *
 *  return arr[i]; // find the index at which date of  birth is oldest using date comparison function
 *  }*/

#include<stdio.h>
struct student
{
	int d,m,y;
}s[5],s1;
struct student oldstudent(struct student s[]);
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("enter the date month year\n");
	scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);
	}
	s1=oldstudent(s);
	printf("%d-%d-%d is oldest\n",s1.d,s1.m,s1.y);
	return 0;
}
struct student oldstudent(struct student s[])
{
	int d,m,y,i=0,j=0;
	d=s[0].d;m=s[0].m;y=s[0].y;
	for(i=1;i<5;i++)
	{
	if((y>s[i].y)||((y==s[i].y)&&(m>s[i].m))||((y==s[i].y)&&(m==s[i].m)&&(d>s[i].d)))
	{
		d=s[i].d;m=s[i].m;y=s[i].y;j=i;
	}
	}
	return s[j];
}
