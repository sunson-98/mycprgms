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


int get_count()
{
	struct student *t;
	int i = 0;
	t = h;
	while(t != NULL)
	{
		t = t -> next;
		i = i + 1;
	}
	printf("\n%d\n", i);
}

int valbypos(int x)
{
	int i = 0;
	struct student *t =h;
	while(i != x)
	{
		t = t -> next;
		i = i + 1;
	}
	return (t -> no);
}

int posbyval(int v)
{

	int i = 0;
	struct student *t = h;

	while(t -> no != v)
	{
		t = t -> next;
		i = i + 1;
	}
	return i;
}

  int del_nodebyval(int v)
{
	struct student *t = h;
	
	while(t -> next -> no != v)
	{
		t = t -> next;
	}
	t -> next = t -> next -> next;
	return 0;
}

  int del_nodebypos(int x)
{
	struct student *t = h;
	int i = 0;
	while(i != x)
	{
		t = t -> next;
		i = i + 1;
	}
	 t -> next = t -> next -> next;
	 return 0;
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
	int y;
	int l;
	add_node(10);
	add_node(20);
	add_node(30);
	add_node(50);
	add_atbegin(100);
	del_nodebyval(50);
	dumplist();
	get_count();
	y = valbypos(3);
	l = posbyval(30);
	

	printf("\n%d\n: \n%d\n", y, l);


	
}






