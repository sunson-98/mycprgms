#include"defs.h"
#include<stddef.h>
#include<stdlib.h>
int get_hash_key(int v);
int addnode_hash(int v)
{
	extern struct student *h[4];
	struct student *t = NULL, *p = NULL;
	int k;
	p = (struct student *) malloc(sizeof(struct student));
	p -> no = v;
	p -> next = NULL;
	k = get_hash_key(v);
	t = h[k];
	if (h[k] == NULL)
	{
		h[k] = p;
		return 0;
	}
  while(t -> next != NULL)
  {
	  t = t -> next;
  }
  p = t -> next;
  return 0;
}




