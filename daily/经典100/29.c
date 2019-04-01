#include<stdio.h>
void fun(char *a,int i)
{
	if(*(a+i)!='\0')fun(a,i+1);
	else printf("³¤¶È£º%d\n",i);
	printf("%c",*(a+i-1));
 } 
main()
{
	char str[100];
	scanf("%s",str);
	fun(str,1);
 }
