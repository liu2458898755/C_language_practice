#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100],*p;
	int count=0,l;
	p=str1;
	scanf("%s",str1);
	scanf("%s",str2);
	l=strlen(str2);
	while(*p)
	{
		//error:if(!strcmp(p,str2))count++;
		if(!strncmp(p,str2,l))count++;
		p++;
	} 
	printf("%d",count);
}
