#include<stdio.h>
int fun(int i)
{
	return i>1?fun(i-1)+2:10;
}
main()
{
	printf("%d",fun(5));
}
