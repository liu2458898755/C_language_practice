#include<stdio.h>
main()
{
    int i,j;
    printf("%c %c",1,2);
    for(i=0;i<9;i++)
    {
        for(j=0;j<i;j++)
        printf("%c%c%c%c",-95,-10,-95,-10);
        printf("\n");
    }
}
