#include<stdio.h>
#include<stdlib.h>
//向后移动m，向前m取 
void back(int *p,int m)
{
	int *q=(int *)malloc(sizeof(int)*20);
	int j,i=0;
	for(j=20-m;j<20;j++)
	{
		q[i++]=p[j];	
	}
	for(j=0;j<20-m;j++)
	{
		q[i++]=p[j];
	}
	for(i=0;i<20;i++)
	p[i]=q[i];
	free(q);
	q=NULL;
}
main()
{
	freopen("68.txt","r",stdin);
	int a[20];
	int i;
	for(i=0;i<20;i++)
	scanf("%d",&a[i]);
	back(a,5);
	for(i=0;i<20;i++)
	printf("%d ",a[i]);
 } 
