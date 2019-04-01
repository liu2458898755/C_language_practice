#include<stdio.h>
#define QJS 
main()
{
#ifdef QJS
	int sum=1,i;
	for(i=20;i>1;i--)
	sum=sum*i+1;
	printf("%d",sum);
#else
	int i,sum=0,k=1;
	for(i=1;i<=20;i++)
	{
		k*=i;
		sum+=k;
	 } 
	 printf("%d",sum);
#endif
 } 
