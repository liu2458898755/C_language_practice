#include<stdio.h>
main()
{
	char ch;
	while((ch=getch())!=27)
	{
		switch(ch)
		{
			case 'M':
			case 'm':
				printf("monday\n");
				break;
			case 'T':
			case 't':
				ch=getch();
				//error:if(ch=='u'&&ch=='U')
				if(ch=='u'||ch=='U')
				printf("tuesday\n");
				else if(ch=='h'||ch=='H')printf("thursday\n");
				break;
			case 'W':
			case 'w':
				printf("wednesday\n");
				break;
			case 'F':
			case 'f':
				printf("friday\n");
				break;
			case 'S':
			case 's':
				ch=getch();
				if(ch=='u'||ch=='U')
				printf("sunday\n");
				else if(ch=='a'||ch=='A')printf("saturday\n");
				break;
			default:printf("no such day\n"); 
				break;
		}
	}
 } 
