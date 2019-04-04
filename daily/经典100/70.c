#include<stdio.h>
main()
{
	char a[99999],*p;
	p=a;
	int count=0;
	scanf("%s",a);
	while(*p++)
	{
		count++;
	}
	printf("%d",count);
}
