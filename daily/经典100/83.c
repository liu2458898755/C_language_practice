#include<stdio.h>
//1位4个
//2位4*7个 
//3位4*8*7个 
//4位4*8*8*7个 
//…… 
main()
{
	int sum=4+28,i,k=28;
	for(i=2;i<=8;i++)
	{
		k=k*8; 
		sum+=k;
		//printf("%d %d\n",k,sum);
	}
	printf("%d",sum);
}
