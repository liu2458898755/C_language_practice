#include<stdio.h>
main()
{
	int a,b,n,sum=0;
	scanf("%d%d",&a,&n);//n²»¿ÉÌ«´ó 
	b=a;
	while(n--)
	{
		sum+=b;
		b=10*b+a; 
	}
	printf("%d",sum);
}
