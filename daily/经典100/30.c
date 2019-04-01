#include<stdio.h>
main()
{
	int a,b,c,d,e,n;
	scanf("%d",&n);
	a=n/10000;
	b=n/1000%10;
	c=n/100%10;
	d=n/10%10;
	//error:e=m%10;
	e=n%10;
	if(a==e&&b==d)printf("yes");
	else printf("no");
}
