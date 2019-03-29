#include<stdio.h>
main()
{
    int y,m,d,thatday=0,i;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    for(i=0;i<m-1;i++)thatday+=month[i];
    thatday+=d;
    if(!(y%4)&&y%100||(y%400))thatday+=1;
    printf("%d",thatday);
}
//error: ´ò´í×ÖÁË
