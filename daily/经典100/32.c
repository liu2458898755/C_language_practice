#include<windows.h>
#include<stdio.h>
void textbackground(int i)
{
	HANDLE output=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output,i);
}
main()
{
	int color;
	for(color=1;color<8;color++)
	{
		textbackground(color);
		printf("color is %d\n",color);
		getch();
	}
	
}
