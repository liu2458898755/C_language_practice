#include<stdio.h>
//1λ4��
//2λ4*7�� 
//3λ4*8*7�� 
//4λ4*8*8*7�� 
//���� 
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
