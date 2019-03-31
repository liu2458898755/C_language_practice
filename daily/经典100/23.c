#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		//error:pirntf("%c",'*');
		printf("%c",'*');
		printf("\n");
	}
	for(i=4;i>0;i--)
	{
		for(j=i;j>0;j--)
		printf("%c",'*');
		printf("\n");
	}
	
}
