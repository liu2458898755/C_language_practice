#include<stdio.h>
void fun(int *i,int n)//后置 
{
	if(n<=8)fun(i,n+1);
	*(n+i+1)=*(n+i);
}
main()
{
	int arr[11]={1,3,5,6,8,9,10,23,34},//9,10,空置； 
	i=0,n;
	scanf("%d",&n);
	//error:while(n<arr[i])i++;
	//error:while(n>arr[i])i++;i无上限 
	while(n>arr[i]&&i!=9)i++;
	fun(arr,i);
	arr[i]=n;
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
 } 
