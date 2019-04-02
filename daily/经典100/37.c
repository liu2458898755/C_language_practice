#include<stdio.h>
main()
{
	int arr[10]={1,3,4,5,2,8,7,6,0,9};
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		if(arr[i]>arr[j])
		{
			int k=arr[i];
			arr[i]=arr[j];
			arr[j]=k;
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	printf("\n");

}

