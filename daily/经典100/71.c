#include<stdio.h>
typedef struct {
	int number;
	char name[10];
	int score;
}ST;
void input(ST *st)
{
	int k=0;
	while(k!=5)
	{
		printf("input NO.%d student information\n",k+1);
		//error:scanf("%d %s %d",&st[k]->score,&st[k]->name,&st[k]->score);
		//scanf("%d %s %d",&st[k].number,&st[k].name,&st[k].score);
		//error:scanf("%d %s %d",(st+k)->score,(st+k)->name,(st+k)->score);
		scanf("%d %s %d",&(st+k)->score,&(st+k)->name,&(st+k)->score);
		k++;
	}
}
void output(ST *st)
{
	int k=0;
	while(k!=5)
	{
		printf("NO.%d %d %s %d\n",k+1,st[k].number,st[k].name,st[k].score);
		k++;
	}
}
main()
{
	freopen("71.txt","r",stdin);
	ST a[5];
	input(a);
	output(a);
}
