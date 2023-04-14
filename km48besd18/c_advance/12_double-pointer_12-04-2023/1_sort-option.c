// 1.command line argument string sorting program using swapping function using call by reference of pointers 

#include<stdio.h>
#include<string.h>


int i=1,j=1,c=0,s=4,k=1;
char *sk;

void sksort(char **argv)
{
	sk=*(argv+j);
	*(argv+j)=*(argv+j+1);
	*(argv+j+1)=sk;
}

void skri(int argc,char **argv)
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==1&&strcasecmp(argv[j],argv[j+1])<0)
			{
				c=1;
				sksort(argv);
			}
		}
		if(c==0)
			break;
	}
}

void skr(int argc,char **argv)
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==2&&(strcmp(argv[j],argv[j+1])<0))
			{
				c=1;
				sksort(argv);
			}
		}
		if(c==0)
			break;
	}
}

void ski(int argc,char **argv)
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==3&&(strcasecmp(argv[j],argv[j+1])>0))
			{
				c=1;
				sksort(argv);
			}
		}
		if(c==0)
			break;
	}
}

void sk2(int argc,char ** argv)
{
	int sk1=argc;
	for(;i<argc-1;i++,sk1--)
	{
		for(j=k;j<sk1-1;j++)
		{
			if(s==4&&(strcmp(argv[j],argv[j+1])>0))
			{
				c=1;
				sksort(argv);
			}
		}
		if(c==0)
			break;
	}
}

int main(int argc,char *argv[])
{
	int sk1=argc;
	char **abc=argv;
	void (*sk[4])(int,char **)={skri,skr,ski,sk2};
	if(((strcmp(argv[1],"-r")==0) && (strcmp(argv[2],"-i")==0))||((strcmp(argv[2],"-r")==0) && (strcmp(argv[1],"-i")==0)))
	{
		i=3;k=3,s=1;
		sk[0](argc,abc);
	}
	else if(strcmp(argv[1],"-r")==0)
	{
		i=2;k=2,s=2;
		sk[1](argc,abc);
	}
	else if(strcmp(argv[1],"-i")==0)
	{
		i=2;k=2,s=3;
		sk[2](argc,abc);
	}
	else
		sk[3](argc,abc);
	for(i=k;i<argc;i++)
		printf(" %s\n",argv[i]);
	return 0;
}

