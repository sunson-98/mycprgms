#include<stdio.h>
#include"defs2.h"
#include"stdlib.h"
#include"stddef.h"
#include<string.h>
extern struct student2 *h[26];
int addnode_name(char *v)
{
	struct student2 *t, *p = NULL;
	int j;
	j = get_hashkey_names(v[0]);
	t = h[j];
    p = malloc(sizeof(struct student2));
	strcpy(p->v,v);
	p->next = NULL;

	if(h[j] == NULL)
	{
		h[j] = p;
		return 0;
	}

	while(t->next != NULL)
	{
		t = t->next;
	}
	
	t->next =p;
	return 0;
}



