/*erroe:
//���һֻ��ƽ������ʱ��Ӧʣ��6�����ӵ����࣬�����ߺ�Ӧʣ��4��
#include<stdio.h>
main()
{ 
	int i,sum=4;
	for(i=0;i<5;i++)//5ֻ���� 
	{
		sum=(sum/4*5)+1;//ÿֻ���ڲ���ǰ���������� 
	}
	printf("%d",sum);
 }
 */
#include<stdio.h>
//����󲢷�ֻ���ĸ�
//��ȡ����ö�٣��ҵ���С����ֹ 
main()
{ 
	int i,n,sum;
	for(n=0;n<4000;n++)
	{
		sum=n;//�ݴ� 
		for(i=0;i<5;i++)//5ֻ���� 
		{
			int k=sum;
			sum=(sum-1)/5*4;//ÿֻ���ڲ�������������� 
			if(sum/4*5+1!=k)break;
			if(i==4){
				//printf("%d ",sum);
				printf("%d\n",n);
			}
		}
	}
	
 }
  
