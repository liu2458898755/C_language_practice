#include<stdio.h>
main()
{
	char ch;
	int b=0,a=0,n=0,o=0;
	while((ch=getch())!='\r')//\r\n
	{
		printf("%c",ch);
		if(ch==' ')b++;
		else if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')a++;
		else if(n>='0'&&n<='9')n++;
		else o++;
	}
	printf("\n�ո�%d  ��ĸ%d  ����%d  ����%d",b,a,n,o);
}
