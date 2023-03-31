/*4) read an integer and print it back in complete number name expansion with place values as below:
 *
 * eg., 458
 * output : four hundred fifty eight
 *
 * eg., 1458
 * output: two thousand four hundred fifty eight*/

#include<stdio.h>
#include<string.h>
int main()
{
	char *s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char *s1[9]={"eleven","twelev","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *s2[9]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	printf("enter a number\n");
	char d[50],*ptr;
	int i=0,j;
	scanf("%s",d);
	ptr=d;
	if(strlen(d)==1)
	{
		printf("%s \n",s[d[i]-48]);
		return 0;
	}
loop:
	j=strlen(ptr++);
	if(j==1&&ptr[-2]==48&&ptr[-1]!=48)
		printf("%s \n",s[ptr[-1]-48]);
	if(j==2)
	{
		if(d[i]!=48&&d[i+1]==48)
			printf("%s ",s2[d[i++]-49]);
		else if(ptr[0]!=48&&ptr[-1]==49)
			printf("%s ",s1[ptr[0]-49]);
		else if(d[i]!=48&&d[i+1]!=48)
			printf("%s ",s2[d[i++]-49]);
		 if(ptr[-1]!=49&&ptr[0]!=48&&ptr[-1]!=48)
			 printf("%s ",s[ptr[0]-48]);
		goto loop;
	}
	if(j==3)
	{
		if(ptr[-1]==48)
		{
			i++;
			goto loop;
		}
		printf("%s hundred ",s[d[i++]-48]);
		goto loop;

	}
	if(j==5||j==4)
	{
		if(ptr[-1]==48)
		{
			i++;
			goto loop;
		}
		if(ptr[-1]==49&&ptr[0]!=48&&j==5)
			printf("%s thousand ",s1[ptr[0]-49]);
		else if(ptr[-1]!=48&&ptr[0]!=48&&j==5)
			printf("%s ",s2[ptr[-1]-49]);
		else if(j==5)
			printf("%s thousand ",s2[ptr[-1]-49]);
		else if(j==4 &&ptr[-2]!=49) 
			printf("%s thousand ",s[ptr[-1]-48]);
		i++;
		goto loop;
	}
	if(j==7||j==6)
	{
		if(ptr[-1]==48)
		{
			i++;
			goto loop;
		}
		if(ptr[-1]==49&&ptr[0]!=48&&j==7)
			printf("%s lakh ",s1[ptr[0]-49]);
		else if(ptr[-1]!=48&&ptr[0]!=48&&j==7)
			printf("%s ",s2[ptr[-1]-49]);
		else if(j==7)
			printf("%s lakh ",s2[ptr[-1]-49]);
		else if(j==6 &&ptr[-2]!=49) 
			printf("%s lakh ",s[ptr[-1]-48]);
		i++;
		goto loop;
	}
	printf("\n");
	return 0;
}	
