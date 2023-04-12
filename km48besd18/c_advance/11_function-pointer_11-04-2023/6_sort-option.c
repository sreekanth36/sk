/* 6) sorting a list of names received on command line argument, with options like -r and -i using function pointers to call appropriate functions.
-r : when given sort in descening order, when not given sort in ascending order
-i : when given sort without case sensitivity , when not given sort with case sensitivity

eg., ./sort  -r   sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with case sensitive comparison in descending order

./sort -r -i  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with out case sensitive comparison, in descending order

./sort -i  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with out case sensitive comparison, in ascending order

./sort  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with case sensitive comparison, in ascending order */

#include<stdio.h>
#include<string.h>

int i=1,j=1,c=0,s=4,k=1;
char *sk;
void skri(int argc,char *argv[])
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==1&&strcasecmp(argv[j],argv[j+1])<0)
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
}

void skr(int argc,char *argv[])
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==2&&(strcmp(argv[j],argv[j+1])<0))
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
}

void ski(int argc,char *argv[])
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==3&&(strcasecmp(argv[j],argv[j+1])>0))
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
}

void sk2(int argc,char * argv[])
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==4&&(strcmp(argv[j],argv[j+1])>0))
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
}

int main(int argc,char *argv[])
{
	int sk1=argc;
	void (*sk[4])(int,char *s[])={skri,skr,ski,sk2};
	if((strcmp(argv[1],"-r")==0) && (strcmp(argv[2],"-i")==0))
	{
		i=3;k=3,s=1;
		sk[0](argc,argv);
	}
	else if(strcmp(argv[1],"-r")==0)
	{
		i=2;k=2,s=2;
		sk[1](argc,argv);
	}
	else if(strcmp(argv[1],"-i")==0)
	{
		i=2;k=2,s=3;
		sk[2](argc,argv);
	}
	else
		sk[3](argc,argv);
	for(i=k;i<argc;i++)
		printf(" %s\n",argv[i]);
	return 0;
}

