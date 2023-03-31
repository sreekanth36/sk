#include<stdio.h>
int main()
{
int x=2,s=0,n;
printf("enter a number\n");
scanf("%d",&n);
while(x<n)
{
if (n%x++==0) 
s++;
}
if (s==0)
printf("%d is prime number\n",n);
else 
printf("%d is not prime number\n",n);
return 0;
}
