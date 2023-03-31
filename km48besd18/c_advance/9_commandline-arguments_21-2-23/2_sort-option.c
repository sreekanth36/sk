/* 2.sorting a list of names received on command line argument, with options like -r and -i

if -r option is given strings are to be sorted in descending order.

if -r option is not there, strings are to be sorted in ascending order.

if -i option is given, strings are to be compared using stricmp function (case insensitive)
	
if -i option is not given, strings are to be compared using strcmp function (case sensitive)
	
eg.,
>./sort -r -i abc Abe def dEf gHi aBc iKf deF
	these strings are to be sorted in descending order considering capital and small letters as same.
	
>./sort -r abc Abe def dEf gHi aBc iKf deF
	these strings are to be sorted in descending order considering capital and small letters as different.
	
>./sort -i abc Abe def dEf gHi aBc iKf deF
	these strings are to be sorted in ascending order considering capital and small letters as same.  
	    
>./sort abc Abe def dEf gHi aBc iKf deF
	these strings are to be sorted in ascending order considering capital and small letters as different.*/

#include<stdio.h>
#include<string.h>
int casecmp(char s[],char k[])
{
	int i;
	for(i=0;s[i]||k[i];i++)
	{
		if(s[i]-32 != k[i] && s[i]+32!= k[i] && s[i]!=k[i])
			return s[i]-k[i];
	}
	return 0;
}
int main(int argc,char * argv[])
{
	int i=1,j=1,c=0,s=4,k=1,sk1=argc;
	char *sk;
	if((strcmp(argv[1],"-r")==0) && (strcmp(argv[2],"-i")==0))
	{
		i=3;k=3,s=1;
	}
	else if(strcmp(argv[1],"-r")==0)
	{
		i=2;k=2,s=2;
	}
	else if(strcmp(argv[1],"-i")==0)
	{
		i=2;k=2,s=3;
	}
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if((s==1&&casecmp(argv[j],argv[j+1])<0)||(s==2&&(strcmp(argv[j],argv[j+1])<0))||(s==3&&(casecmp(argv[j],argv[j+1])>0))||(s==4&&(strcmp(argv[j],argv[j+1])>0)))
			{
				c=1;
				sk=argv[j];
				argv[j]=argv[j+1];
				argv[j+1]=sk;
			}
		}
		if(c==0)
			break;
	}
	for(i=k;i<argc;i++)
		printf(" %s\n",argv[i]);
	return 0;
}
