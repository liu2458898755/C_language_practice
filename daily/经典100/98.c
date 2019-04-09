#include<stdio.h>
main()
{
	char str[100],*p;
	int n;
	p=str;	
	FILE *fp=fopen("text.txt","w");
	scanf("%s",str);
	while(*p)
	{
		if(*p>='a'&&*p<='z')*p=*p-32;
		p++;
	}
	fprintf(fp,"%s",str);
	fclose(fp);
}
