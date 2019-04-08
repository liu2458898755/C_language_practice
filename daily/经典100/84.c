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
	int n,i;
	scanf("%d",&n);//n>=4
	for(i=2;i<n/2+1;i++)
	{
		//printf("%d_%d %d_%d\n",i,judge(i),n-i,judge(n-i));
		if(judge(i)&&judge(n-i))
		{
			printf("%d = %d + %d\n",n,i,n-i); 
		}
	}
	
} 
