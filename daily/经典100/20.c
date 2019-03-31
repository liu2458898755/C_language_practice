#include<stdio.h>
main()
{
	int k;
	float sum=0,n=100;
	for(k=1;k<=10;k++)
	{
		sum+=n;//下坠 
		n=n/2;//着地 
		sum+=n;//上升 
	}
	printf("第十次着地时距离：%f\n第十次上升：%f",sum-n,n);
 } 
