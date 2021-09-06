#include"defs.h"
#include"stdio.h"
#include<stddef.h>
#include<stdlib.h>

extern struct student *h[4];

int addnode_hash(int v)
{
	struct student *t = NULL, *p = NULL;
	int hk;
	p = (struct student *) malloc(sizeof(struct student));
	p->no = v;
	p->next != NULL;
	hk = get_hash_key(v);
	printf("v :%d, hk :%d\n", v, hk);
	t = h[hk];
	if (h[hk] == NULL)
	{
		//printf("%s->%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
		h[hk] = p;
		return 0;
	}
	
	//printf("%s->%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
	while(t->next != NULL)
	{
		t = t->next;
	}
	 t->next = p;
	return 0;
}




