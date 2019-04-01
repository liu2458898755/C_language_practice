#include<stdio.h>
void fun(char *a)
{
	if(*(a+1)!='\0')fun(a+1);
	printf("%c",*a);
 } 
main()
{
	char str[100];
	scanf("%s",str);
	fun(str);
 }
