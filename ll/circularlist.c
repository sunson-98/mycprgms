#include"stdio.h"
#include"stdlib.h"
struct student
{
	int no;
	struct student *next;
};

struct student *h;
int add_node_circular(int v)
{
	struct student *p = NULL, *t = NULL;
	p = (struct student *) malloc(sizeof(struct student));
	t = h;
	p -> no = v;
	p -> next = h;
	if (h == NULL)
	{
		h = p;
		p -> next =h; 
		return 0;
	}
	while(t -> next != h)
	{
		t = t -> next;
	}

	  t -> next = p;

	  return 0;
}


int dumplist()
{
	struct student *t = h;
	
	while(t -> next != h)
	{
		printf("\nnode value = %d\n", t -> no);
		t = t -> next;
	}
	printf("\nnode value = %d\n", t -> no);
}

int main()
{
	add_node_circular(10);
	add_node_circular(20);
	add_node_circular(30);
	add_node_circular(50);
	add_node_circular(60);
	dumplist();
	
}






