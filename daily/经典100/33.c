#include<stdio.h>
#include<windows.h>
void gotoxy(int a,int b)
{
	COORD pos;
	pos.X=2*a;
	pos.Y=b;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
main()
{
	gotoxy(20,10);
	printf("yes");
	getch();
	system("cls");
	printf("no");
}
