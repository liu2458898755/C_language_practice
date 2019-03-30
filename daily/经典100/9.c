#include<stdio.h>
main()
{
    char a[3]="¡ö";
    //printf("%d %d",a[0],a[1]);
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        if((i+j)%2==0)printf("%c%c",-95,-10);
        else printf("  ");
        printf("\n");
    }

}
