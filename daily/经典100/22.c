#include<stdio.h>
main()
{
	char a,b,c;
	for(a='X';a<='Z';a++)
	{
		//error :if(a!='X');//a不和x比 
		if(a!='X')//a不和x比 
		for(b='X';b<='Z';b++)
		{
			if(b!=a)//b与a不和人同一人比 
			for(c='X';c<='Z';c++)
			{
				if(b!=c&&c!=a&&c!='X'&&c!='Z')//确保不与a，b相同，且不与x,y比 
				printf("Avs%c Bvs%c Cvs%c\n",a,b,c);
			}
		}
	}
}
