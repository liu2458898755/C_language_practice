#include<stdio.h>
main()
{
	int a[10]={3,4,5,5,3,2,0,0,1,1};
	int i,max=a[0],min=a[0],l=0,s=0;
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{	
			max=a[i];
			l=i;
		}
	}
	int k=a[0];
	a[0]=max;
	a[l]=k;
	for(i=0;i<10;i++)
	{
		if(a[i]<=min)
		{
			min=a[i];
			s=i;
		}
	}
	k=a[9];
	a[9]=min;
	a[s]=k;
	for(i=0;i<10;i++)printf("%d ",a[i]);
}
