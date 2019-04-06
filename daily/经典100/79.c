#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//±È½ÏASCIIÂë
//ÉýÐò 
void swap(char *p,char *q)
{
	char k[100];
	strcpy(k,p);
	strcpy(p,q);
	strcpy(q,k);
 } 
main()
{
	char str[3][100];
	int i;
	for(i=0;i<3;i++)
	{
		printf("input str%d :\n",i+1);
		scanf("%s",str[i]);
	}
	if(strcmp(str[0],str[1])>0)swap(str[0],str[1]);
	if(strcmp(str[0],str[2])>0)swap(str[0],str[2]);
	if(strcmp(str[1],str[2])>0)swap(str[1],str[2]);
	printf("%s\n%s\n%s",str[0],str[1],str[2]);
}
