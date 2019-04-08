#include<stdio.h>
main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=(n/1000+5)%10;
	b=(n/100%10+5)%10;
	c=(n/10%10+5)%10;
	d=(n%10+5)%10;
	printf("%d",1000*d+100*c+10*b+a);
}
