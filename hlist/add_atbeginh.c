#include<stdio.h>
#include"stdlib.h"
#include<stddef.h>
#include"defs.h"
extern struct student *h[4];

int add_atbegin(int v)
{
	int k = 0;
	struct student *p;
	k = get_hash_key(v);
	if(h[k] == NULL)
	{
		addnode_hash(v);
		return 0;
	}

	p = malloc(sizeof(struct student));
	p->no = v;
	p->next = h[k];
	h[k] = p;
	return 0;
}


  
