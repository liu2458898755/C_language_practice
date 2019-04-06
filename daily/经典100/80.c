/*erroe:
//最后一只猴平分桃子时，应剩余6个，扔掉多余，再拿走后，应剩余4个
#include<stdio.h>
main()
{ 
	int i,sum=4;
	for(i=0;i<5;i++)//5只猴子 
	{
		sum=(sum/4*5)+1;//每只猴在操作前的桃子数。 
	}
	printf("%d",sum);
 }
 */
#include<stdio.h>
//在最后并非只有四个
//采取暴力枚举，找到最小答案终止 
main()
{ 
	int i,n,sum;
	for(n=0;n<4000;n++)
	{
		sum=n;//暂存 
		for(i=0;i<5;i++)//5只猴子 
		{
			int k=sum;
			sum=(sum-1)/5*4;//每只猴在操作后的桃子数。 
			if(sum/4*5+1!=k)break;
			if(i==4){
				//printf("%d ",sum);
				printf("%d\n",n);
			}
		}
	}
	
 }
  
