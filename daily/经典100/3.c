#include<stdio.h>
#include<stdio.h>
main()
{
    int i;
    for(i=-100;i<10000;i++)
    {
        if(sqrt(i+100)*sqrt(i+100)==i+100&&
           sqrt(i+268)*sqrt(i+268)==i+268)printf("%d\n",i);
    }
}
