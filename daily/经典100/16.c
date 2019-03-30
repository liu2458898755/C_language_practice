//辗转相除得最大公约数
//最小公倍数*最大公约数=两数之积
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
	printf("最大公约数%d\n",b);
	printf("最小公倍数%d\n",m/b); 
 } 
