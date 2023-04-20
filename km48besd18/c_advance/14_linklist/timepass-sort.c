#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	int id;
	char name[15];
	struct list * next;
}sk;

void skprint(sk * s);
sk * skcreate(void);
void sklist(sk **);
void skfree(sk * s);
sk * sksort(sk *h);

int main()
{
	sk *h=NULL;
	sklist(&h);
	printf("<== Before Sort ==>\n");
	skprint(h);
	h=sksort(h);
	printf("<== After Sort ==>\n");
	skprint(h);
	skfree(h);
	return 0;
}

sk * skcreate()
{
	sk * c=NULL;
	c=(sk *)malloc(sizeof(sk));
	c->next=NULL;
	printf("enter a num\n");
	scanf("%d",&c->id);
	getchar();
	return c;
}

void sklist(sk **h)
{
	int i=0;
	sk *c=NULL,*l=NULL;
	char s='y';
	while(s!='n')
	{
		c=skcreate();
		if(*h==NULL)
			*h=c;
		else
			l->next=c;
		l=c;
		printf("enter to continue (y/n)\n");
		scanf(" %c",&s);
	}
}

sk * sksort(sk *h)
{
	sk *s=h,*k=h,*ss=NULL,*sk1=NULL;
	int i=0,j=1,b=1,c=1;
	for(i=1;k;i++)
	{
		j=1;
		s=h;
		ss=s->next;
		sk1=s;
		for(b=1;ss;b++)
		{
			c=1;
			if((s->id)>(ss->id))
			{
				j=0;
				c=0;
				s->next=ss->next;
				ss->next=s;
				if(b==1)
					h=ss;
				else
					sk1->next=ss;
				sk1=ss;
				if(s->next)
				ss=s->next;
				else
					ss=s;
				if(sk1->next)
					s=sk1->next;
				else
					s=sk1;
			}
			if(c)
			{
				sk1=s;
				s=ss;			
				ss=ss->next;
			}
			if(i==b)
				k=sk1;
		}
		if(j)
			break;
		k=k->next;
	}
	return h;
}

void skprint(sk * s)
{
	int i=0;
	printf(" ==>output<==\n");
	while(s)
	{
		printf(" %d   %d\n",++i,s->id);
		s=s->next;
	}
}

void skfree(sk * s)
{
	sk *l=NULL;
	while(s)
	{
		l=s;
		s=s->next;
		free(l);
	}
}

