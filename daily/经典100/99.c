#include<stdio.h>
main()
{
	FILE *fp1,*fp2,*fp3;
	char str[100];
	fp1=fopen("A.txt","r");
	fp2=fopen("B.txt","r");
	fp3=fopen("C.txt","w");
	fscanf(fp1,"%s",str);
	fprintf(fp3,"%s",str);
	fscanf(fp2,"%s",str);
	fprintf(fp3,"%s",str);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
