#include<stdio.h>
double fun1(int i)
{
	double sum=0;
	while(i!=-1)
	{
		sum+=1.0/i;
		i-=2;
	}
	return sum;
}
double fun2(int i)
{
	double sum=0;
	while(i)
	{
		sum+=1.0/i;
		i-=2;
	}
	return sum;
}
double fun3(int i)
{
	if(i%2)return fun1(i);
	else return fun2(i);
}
double fun4(double (*p)(),int i)
//error:double fun4(double *p(),int i)
{
	//error:return *p(i);
	return (*p)(i);
}
double (* fun5(int i))()
{
	if(i%2)return fun1;
	else return fun2; 
}
double (* fun6(double(*k[])(),int i))()
{
	if(i%2)return k[0];
	else return k[1];
}
main()
{
	int n;
	double (*p[2])()={fun1,fun2};
	scanf("%d",&n);
	printf("fun3_%lf\n",fun3(n));
	if(n%2)printf("fun4_%lf\n",fun4(fun1,n));
	else printf("fun4_%lf\n",fun4(fun2,n));
	printf("fun5_%lf\n",fun5(n)(n));
	printf("fun6_%lf\n",fun6(p,n)(n));
	
	
}
