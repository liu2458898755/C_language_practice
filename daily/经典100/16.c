//շת��������Լ��
//��С������*���Լ��=����֮��
#include<stdio.h>
main()
{
	int a,b,c,m;
	scanf("%d%d",&a,&b);
	m=a*b;
	while(c=a%b)
	{
		a=b;
		b=c;
		
	}
	printf("���Լ��%d\n",b);
	printf("��С������%d\n",m/b); 
 } 
