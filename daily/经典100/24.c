#include<stdio.h>
main()
{
	int i,a=2,b=1,c;
	float sum=2;
	for(i=2;i<=20;i++)
	{
		c=a;//����aֵ 
		a=a+b;//a����ֵ 
		b=c;//b��ԭaֵ 
		//debug:printf("%d\\%d\n",a,b);
		sum+=a/b;//���� 
	}
	printf("%f",sum);
 } 
