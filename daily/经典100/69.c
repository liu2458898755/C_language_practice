#include<stdio.h>
//N-1人 
#define N 10
main()
{
	int s[N]={},
	i=0,count=0,n=0;
	//error:while(n!=N)
	while(n!=N-1)
	{
		
		if(s[i%(N-1)+1]==0)count++;
		if(count==3)
		{
			s[i%(N-1)+1]=1;
			n++;
			if(n==N-1)
			{
				//printf("%d",i%(n-1)+1);
				printf("%d",i%(N-1)+1);
			}
			//count==0;
			count=0;
		}
		i++;
	}
}
/*
main()
{
	int a[N]={},
	count=0,//数数 
	i=0,//推进 
	k=N,//结束 
	n;//最近一个out 
	while(k)
	{
		if(a[i%N]==1)
		{
			k--;
			i++;
			continue;
		}
		else {
			i++;
			count++;
			k=N;
		}
		if(count==3)
		{
			a[i%N]=1;
			n=i%N;
			count=0; 
		}
	}
	printf("%d",n);
}*/ 
