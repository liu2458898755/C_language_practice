#include<stdio.h>
main()
{
	FILE *fp=fopen("96.txt","w");
	char ch;
	while((ch=getch())!='#')
	{
		printf("%c",ch);
		fputc(ch,fp);
	}
	fclose(fp);
}
