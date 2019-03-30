#include<stdio.h>
main()
{
    int i;
    for(i=101;i<200;i++)
    {
        int j,flag=1;
        for(j=2;j<i;j++)
        if(i%j==0)
        {
            flag=0;break;
        }
        if(flag)printf("%d\n",i);
    }
}
