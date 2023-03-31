/*3)  read a date in d-m-y format and print it back in given format below:
 *
 * eg input :2-3-2000
 * output: 2nd March, 2000
 *
 * eg input: 4-1-2001
 * output: 4th January, 2001*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s[12]={"january","february","march","april","may","june","july","augest","september","october","november","december"};
	char *s1[31]={0};
	s1[0]="st";s1[20]="st";s1[30]="st";s1[1]="nd";s1[21]="nd";s1[22]="rd";s1[2]="rd";
	int d,m,y;
	printf("enter day,month,year\n");
	scanf("%d%d%d",&d,&m,&y);
	if(s1[d-1]==NULL)
		s1[d-1]="th";
	printf("%d%s %s, %d\n",d,s1[d-1],s[m-1],y);
	return 0;
}
