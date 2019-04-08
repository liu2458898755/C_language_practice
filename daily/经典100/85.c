#include<stdio.h>
int judge(int k)
{
	if(k==1)return 0;
	int i,flag=1;
	for(i=2;i<k;i++)
	{
		if(k%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
main()
{
	int n,k=9,count=1;
	scanf("%d",&n);
	if(!judge(n))
	{
		printf("·ÇËØÊı");
		return 0; 
	}
	while(1)
	{
		if(k%n==0)
		{
			printf("%d%%%d=0\n",k,n);
			break;
		}
		else 
		{
			k=k*10+9;
			count++;
		 } 
	}
	printf("%d\n",count);
}
