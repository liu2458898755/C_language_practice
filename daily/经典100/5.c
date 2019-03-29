#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        a=a-b;
        b=b+a;
        a=b-a;
    }
    if(a>c)
    {
        a=a-c;
        c=c+a;
        a=c-a;
    }
    if(b>c)
    {
        b=b-c;
        c=c+b;
        b=c-b;
    }
    printf("%d %d %d",a,b,c);
}
