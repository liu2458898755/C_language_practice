//#inlude<stdio.h>
#include<stdio.h>
main()
{
	int n,i=2;
	scanf("%d",&n);
	printf("%d=",n);
	while(n!=1)
	{
		if(n%i==0)
		//printf("i");
		{
			printf("%d",i);
			n=n/i;
			if(n!=1)printf("*");
		}
		else i++;
		
	}
}
