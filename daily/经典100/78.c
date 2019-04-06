#define N 4 
#include "stdio.h" 
static struct man 
{ 
	char name[20]; 
	int age; 
}person[N]={"li",18,"wang",19,"zhang",22,"sun",20}; 
main() 
{
	struct man *q,*p; 
	int i,m=0; 
	p=person; 
	for (i=0;i<N;i++) 
	{
		if(m<p->age) 
		q=p++; 
		m=q->age;
	} 
	printf("%s,%d",(*q).name,(*q).age); 
	} 
