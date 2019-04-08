#include<stdio.h>
//809*??=800*??+9*??+1
//#define ANS
#ifdef ANS
output(long b,long i) 
{ 
	printf("\n%ld/%ld=809*%ld+%ld",b,i,i,b%i); 
} 
main() 
{
	long int a,b,i; 
	a=809; 
	for(i=10;i<100;i++) 
	{
		b=i*a+1; 
		if(b>=1000&&b<=10000&&8*i<100&&9*i>=100) 
		output(b,i); 
	} 
} 
#else
main()
{
	int i;
	for(i=1;i<100;i++)
	{
		if(8*i/100==0&&8*i/10&&9*i/100&&9*i/1000==0)
		printf("i=%d 809*i=%d\n",i,809*i);
	}
}
#endif
