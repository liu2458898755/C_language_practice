#include<stdio.h>
typedef struct{
	int id;
	char name[20];
	int a[3];
	float av;
}ST;
main()
{
	FILE *fp=fopen("stu.txt","w");
	ST s[5];
	int i=0,j;
	while(i!=5)
	{
		printf("input %d info\n",i+1);
		scanf("%d %s",&s[i].id,&s[i].name);
		fprintf(fp,"id:%d name:%s ",s[i].id,s[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%d",&s[i].a[j]);
			fprintf(fp," no.%dcours:%d",j+1,s[i].a[j]);
			s[i].av+=s[i].a[j];
		}
		fprintf(fp," average:%f\n",s[i].av/=3);
		i++;
	}
	fclose(fp);
 } 
