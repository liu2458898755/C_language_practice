#include<stdio.h>
typedef struct LIST
{
	int n;
	struct LIST *next;
}List;
main()
{
	List d={1,NULL},c={2,&d},b={3,&c},a={4,&b},*head=&a;
	while(head)
	{
		printf("%d ",head->n);
		head=head->next;
	}
}
