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
Node movenext(Node p)
{
	if(p->next)
	p=p->next;
	printf("%d\n",p->a);
	return p;
 } 
 Node movelast(Node p)
 {
 	if(p->last)
 	p=p->last;
 	printf("%d\n",p->a);
 	return p;
 }
main()
{
	Node head,head1,head2;
	char ch;
	head=head1=creatlist();
	head2=creatlist();
#ifdef MOVE
	while((ch=getch())!=27)
	{
		switch(ch)
		{
			case 'q':head1=movelast(head1);break;
			case 'e':head1=movenext(head1);break;
			default:break;
		}
	}
#endif
	//error:while(head1)head1=head1->next;
	while(head1->next)head1=head1->next;
	head1->next=head2;
	head2->last=head1;
	printf("%d",head->next->next->next->next->a);
}

