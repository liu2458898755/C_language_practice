#include<stdio.h>
void fun(int *a,int *b,int *c)
{
	if(*a<*b)
	{
		int d=*a;
		*a=*b;
		*b=d;
	}
	if(*a<*c)
	{
		int d=*a;
		*a=*c;
		*c=d;
	}
	if(*b<*c)
	{
		int d=*b;
		*b=*c;
		*c=d;
	}
}
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	//error:fun(a,b,c); 
	fun(&a,&b,&c);
	printf("%d %d %d",a,b,c);
 } 
