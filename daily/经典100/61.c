#include<stdio.h>
main()
{
	int a[10]={1};//其余为0 
	int b[10]={1,1};
	int i,j;
	printf("1 \n1 1 \n");
	for(i=3;i<=10;i++)
	{
		printf("1 "); 
		for(j=1;j<i-1;j++)//方法2
		//for(j=1;j<i;j++)//方法1 
		{
			if(i%2)printf("%d ",a[j]=b[j-1]+b[j]);
			else printf("%d ",b[j]=a[j-1]+a[j]);
		}
		printf("%d\n",a[j]=1);//方法2 最后一个一定要赋值为1，否则值为0，影响下一行 
		//printf("\n");//方法1 
		
	}
	
}
