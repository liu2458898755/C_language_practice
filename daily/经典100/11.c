#include<stdio.h>
main()
{
    __int64 i=1,k=1,n,j;
    scanf("%I64d",&n);
    if(n==1||n==2)printf("1\n");
    for(j=3;j<=n;j++)
    {
        i=i+k;
        __int64 z=k;
        k=i;
        i=z;
    }
    printf("%I64d",k);
}
