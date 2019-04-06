#include<stdio.h>
#include<stdlib.h>
typedef struct LIST
{
	int a;
	struct LIST *next;
	struct LIST *last;
}List;
typedef List *Node;
Node creatlist()
{
	int n;
	printf("input list lenth:");
	scanf("%d",&n);
	Node head,p;
	head=p=(Node)malloc(sizeof(List));
	scanf("%d",&p->a);
	while(--n)
	{
		
		p->next=(Node)malloc(sizeof(List));
		//scanf("%d",p->next->a);
		scanf("%d",&p->next->a);
		p->next->last=p;
		p=p->next;
	}
	p->next=NULL;
	return head;
}
main()
{
	Node head1,head2;
	head1=creatlist();
	printf("%d\n",head1->a);
	printf("%d\n",head1->next->next->next->a);
	printf("%d\n",head1->next->next->next->last->a);
}

