#include<stdio.h>
main()
{
	char str1[100],str2[50],*p,*q;
	scanf("%s",str1);
	scanf("%s",str2);
	p=str1;
	q=str2;
	while(*p)p++;
	while(*q)*p++=*q++;
	*p='\0';
	printf("%s",str1);
 } 
