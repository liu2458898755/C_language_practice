#include<stdio.h>
void fun(int *a,int k)
{
	if(k!=9)fun(a,k+1);
	printf("%d ",a[k]);
}
main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	fun(a,0);
}
