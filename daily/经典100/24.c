#include<stdio.h>
main()
{
	int i,a=2,b=1,c;
	float sum=2;
	for(i=2;i<=20;i++)
	{
		c=a;//保留a值 
		a=a+b;//a赋新值 
		b=c;//b赋原a值 
		//debug:printf("%d\\%d\n",a,b);
		sum+=a/b;//叠加 
	}
	printf("%f",sum);
 } 
