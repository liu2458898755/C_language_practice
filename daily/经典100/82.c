#include<stdio.h>
//«ÿæ≈…ÿ 
main()
{
	char s[10],i;
	int sum=0;
	scanf("%s",s); 
	while(s[i])
	{
		char k;
		for(k='0';k<='9';k++)
		{
			if(k==s[i])sum=(sum+k-48)*8;
		}
		i++;
	 }
	 printf("%d",sum/8);
}
