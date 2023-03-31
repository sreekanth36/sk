// 6) a set of words seperated by commas is given as input as a single string. Divide the words at comma, and store them as individual strings in a two dimentional array and display the array.

#include<stdio.h>
#include<string.h>
#if !(defined c)
#error macro not defined pls define the macro while gcc
#else
int main()
{
	int i,j=0,a,b=0;
	char str[c];
	printf("enter a string\n");
	scanf("%49[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if( str[i]==',' && str[i+1]!='\0')
		{
			a++;
		}  	
	}
	char arr[a+1][c];
	int s=0;
	for(i=0;str[s]!='\0';i++)
	{
		for(b=0;;s++,b++)
		{

			arr[i][b]=str[s];
			if(str[s]==',')
			{
				arr[i][b]='\0';
				s++;
				break;
			}
			else if(str[s]=='\0')
				break;
		}  	
	}
	for(i=0;i<a+1;i++)
	{		
	printf("%s\n",arr[i]);
	}
	return 0;
}

#endif

