#include"stdio.h"
#include"stdlib.h"
struct student
{
	int no;
	struct student *next;
};

struct student *h;
int add_atbegin(int v)
{
	struct student *p;
	p = (struct student*) malloc(sizeof(struct student));
	p -> no = v;
	p -> next = h;
	h = p;
}


int add_node(int v)
{
	struct student *p = NULL, *t = NULL;
	p = (struct student *) malloc(sizeof(struct student));
	t = h;
	p -> no = v;
	p -> next = NULL;
	if (h == NULL)
	{
		h = p;
		return 0;
	}
	while(t -> next != NULL)
	{
		t = t -> next;
	}

	  t -> next = p;

	  return 0;
}


int dumplist()
{
	struct student *t = h;
	
	while(t != NULL)
	{
		printf("\nnode value = %d\n", t -> no);
		t = t->next;
	}
}

int main()
{
	add_node(10);
	add_node(20);
	add_node(30);
	add_node(50);
	add_atbegin(100);
	dumplist();

	
}






