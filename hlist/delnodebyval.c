#include"defs.h"
#include<stdio.h>
#include"stddef.h"
extern struct student *h[4];

int delnode_byval(int v)
{
	struct student *t = h[4], *pt;
	int k;
	k = get_hash_key(v);
	t = h[k];
	if (h[k]->no == v)
	{
		h[k] = h[k]->next;
		t = h[k];
		return 0;
	}
	   while(t->no != v && t != NULL)
	   {
		   pt = t;
		   t = t->next;
	   }

	    if(t == NULL)
		{
	     printf("\nthere is no such node with no:%d\n", v);
		 return 0;
		}
		if (t->next == NULL)
		{
			pt->next = NULL;
			free(t);
			return 0;
		}
       pt->next = t->next;
      return 0;
}




