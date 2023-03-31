#include<stdio.h>
int main()
{
int a,b,n;
char c='y';
while(c=='y')
{
printf("enter 2 values\n");
scanf("%d%c%d",&a,&c,&b);
switch(c)
{
case '+':
printf("add of two numbers is%d\n",a+b);
break;
case '-':
printf("sub of two numbers is %d\n",a-b);
break;
case '*':
printf("mul of two numbers is %d\n",a*b);
break;
case '/':
printf("div of two numbers is %d\n",a/b);
break;
}
printf("enter to continue or not-y/n\n");
scanf(" %c",&c);
}
return 0;
}
