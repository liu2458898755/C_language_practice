#include<stdio.h>
main()
{
	char a,b,c;
	for(a='X';a<='Z';a++)
	{
		//error :if(a!='X');//a����x�� 
		if(a!='X')//a����x�� 
		for(b='X';b<='Z';b++)
		{
			if(b!=a)//b��a������ͬһ�˱� 
			for(c='X';c<='Z';c++)
			{
				if(b!=c&&c!=a&&c!='X'&&c!='Z')//ȷ������a��b��ͬ���Ҳ���x,y�� 
				printf("Avs%c Bvs%c Cvs%c\n",a,b,c);
			}
		}
	}
}
