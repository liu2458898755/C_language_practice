#include<stdio.h>
#include<windows.h>
void color(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}
main()
{
/*	int i=0;
	while(++i)
	{
		color(i-1);
		printf("SAMPLE ");
		if(!(i%8))printf("\n");
		Sleep(100);
	}
*/
	color(235);
	system("cls");	
}
