#include<stdio.h>
main()
{
	int k;
	float sum=0,n=100;
	for(k=1;k<=10;k++)
	{
		sum+=n;//��׹ 
		n=n/2;//�ŵ� 
		sum+=n;//���� 
	}
	printf("��ʮ���ŵ�ʱ���룺%f\n��ʮ��������%f",sum-n,n);
 } 
