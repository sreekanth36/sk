#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct list
{
	int id;
	struct list * next;
}sk;

sk * skcreate();
void sklist(sk **h);
void skfree(sk * s);
void skmid(sk *);
void skcir(sk *);
void skprint(sk *);
void sktravel(sk *,sk *);
void skdel(sk *);

int main()
{
	sk *h=NULL,*h1=NULL;
	sklist(&h);
//	sklist(&h1);
//	skmid(h);
//	sktravel(h,h1);
//	skcir(h);
	skdel(h);
	skprint(h);
//	skprint(h1);
	skfree(h);
//	skfree(h1);
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
	sk *c=NULL,*l=NULL,*ss=NULL;
	char s='y';
	while(s!='n')
	{
		i++;
		c=skcreate();
		if(*h==NULL)
			*h=c;
		else
			l->next=c;
		l=c;
//		if(i==3)
//			ss=c;
		printf("enter to continue (y/n)\n");
		scanf(" %c",&s);
	}
//	c->next=*h;
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

void skmid(sk *h)
{
	sk *s=h;
	for(;h && h->next;)
	{
		h=h->next;
		if(h)
			h=h->next;
		if(h)
			s=s->next;
	}
	printf("%d\n",s->id);
}

void skcir(sk *h)
{
	sk *s=h,*k=h,*ss=NULL;
	int sk=0;
	for(;k;)
	{
		s=s->next;
		k=k->next;
		if(k)
			k=k->next;
		if(s==k)
		{
			sk=1;
			break;
		}
	}
	if(sk && s)
		printf("LL in loop=%d\n",s->id);
	else
	{
		printf("LL is not in loop\n");
		return ;
	}
//	printf("in==s=%d k=%d s=%p k=%p\n",s->id,k->id,s,k->next);
	s=h;
	ss=k;
	if(s!=k)
	{
		for(;;)
		{
//			printf("1==s=%d k=%d s=%p k=%p\n",s->id,k->id,s,k->next);
			//		ss=k;
			//		k=k->next;
			s=s->next;
			if((s)==(k->next))
			{
//				printf("hehe\n");
				k->next=NULL;
				break;
			}
			//		ss=k;
			k=k->next;
			//		s=s->next;
//			printf("2==s=%d k=%d s=%p k=%p\n",s->id,k->id,s,k->next);
//			sleep(3);
		}
	}
	else
	{
		for(;k->next!=s;k=k->next);
		k->next=NULL;
	}
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

void sktravel(sk *h,sk *h1)
{
	int s=1,sk1=0,x=1,a=0,b=0;
	sk *s1=h,*k=h1,*ss=h,*ss1=h1,*kk=NULL;
	printf("enter which linked list to link\n");
	scanf("%d",&a);
	if(a==2)
	{
		s1=h1;k=h;
	}
	if(a>2 || a<1)
		b=1;
	printf("enter which node to link\n");
	scanf("%d",&x);
	if(!x)
		b=1;
	for(;s<x;s++)
	{
		k=k->next;
		if(!k)
		{
			b=1;break;
		}
	}
	if(b)
	{
		printf("out off range\n");
		return ;
	}
	for(;s1->next;s1=s1->next);
	s1->next=k;
	for(;k->next;k=k->next);
	if(a==1)
	{
		k->next=ss1;
		k=ss;
		s1=ss;
	}
	else
	{
		k->next=ss;
		k=ss1;
		s1=ss1;
	}
//	s1=k=ss;
	for(;k;)
	{
//		printf("1==s=%d k=%d s=%p k=%p\n",s1->id,k->id,s1,k->next);
		s1=s1->next;
		k=k->next;
		if(k)
			k=k->next;
		if(s1==k)
		{
			sk1=1;
			break;
		}
//		printf("2==s=%d k=%d s=%p k=%p\n",s1->id,k->id,s1,k->next);
//		sleep(2);
	}
	if(sk1 && s1)
		printf("LL in loop=%d\n",s1->id);
	else
	{
		printf("LL is not in loop\n");
		return ;
	}
	if(a==1)
		s1=ss;
	else
		s1=ss1;
	for(;;)
	{
//		printf("3==s=%d k=%d s=%p k=%p\n",s1->id,k->id,s1,k->next);
		k=k->next;
		if((s1->next)==(k))
		{
//			printf("hehe\n");
//			printf("5==s=%d k=%d s=%p k=%p\n",s1->id,k->id,s1,k->next);
			s1->next=NULL;
			break;
		}
		s1=s1->next;
//		printf("4==s=%d k=%d s=%p k=%p\n",s1->id,k->id,s1,k->next);
//		sleep(2);
	}
	if(a==2)
		ss1=ss;
	for(;k && k->next!=ss1;k=k->next);
	k->next=NULL;
}

void skdel(sk *h)
{
	int s;
	sk *k=NULL;
	printf("enter which node to delete\n");
	scanf("%d",&s);
	for(;s>1;s--)
		h=h->next;
	printf("h=%d h=%p\n",h->id,h);
	k=h->next;
	*h=*(h->next);
	printf("h1=%d h1=%p\n",h->id,h);
	free(k);
}

