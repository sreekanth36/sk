








i













i





int main()
{ int x,a,b,a1,b1,a2,b2,a3,b3,a4,b4;
	printf("enter the x value");
	scanf("%d",&x);
	a=x/2000;
	b=x%2000;
	a1=b/500;
	b1=b%500;
	a2=b1/200;
	b2=b1%200;
	a3=b2/100;
	b3=b2%100;
	a4=b3/50;
	b4=b3&50;
	printf("no.of 2000/-notes:%d\nno.of 500/-notes:%d\nno.of 200/- notes:%d\nno.of 100/- notes:%d\nno.of 50/- notes:%d\n",a,a1,a2,a3,a4);
       return 0;
}       
