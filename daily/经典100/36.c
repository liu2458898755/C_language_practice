#include<stdio.h>
main()
{
	int i;
	for(i=2;i<100;i++)
	{
		int j,flag=1;
		for(j=2;j<i;j++)
		{
			if(!(i%j))
			{
				flag=0;
				break;
			}
		}
		if(flag)printf("%d\n",i);
	}
	
}
