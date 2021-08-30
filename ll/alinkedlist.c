#include<stdio.h>
#include<stdlib.h>
struct student
{
	int no;
	struct student *next;
};

struct student *h = NULL;
int add_node(int v)
{
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	struct student *p = NULL, *t = NULL, *h;
	t = h;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	p = (struct student *) malloc(sizeof(struct student));
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	p -> no = v;
	p -> next = NULL;
	if (h == NULL)
	{
		printf("%d:%s\n", __LINE__, __FUNCTION__);
		h = p;
		return 0;
	}
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	while(t -> next != NULL)
	{
		printf("%d:%s\n", __LINE__, __FUNCTION__);
		t = t -> next;
	}
	t -> next = p;

	printf("%d:%s\n", __LINE__, __FUNCTION__);
	return 0;
}


int dumplist()
{
	struct student *t = NULL;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	t = h;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	while(t != NULL)
	{
		printf("\n%d : %p\n", t->no, t->next);
		printf("%d:%s\n", __LINE__, __FUNCTION__);
		t = t->next;
	}
}

int main()
{
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	add_node(10);
	return 0;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	add_node(20);
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	add_node(30);
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	add_node(50);
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	dumplist();
	printf("%d:%s\n", __LINE__, __FUNCTION__);
}






