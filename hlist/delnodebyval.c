#include"defs.h"
#include<stdio.h>
#include"stddef.h"
extern struct student *h[4];

int delnode_byval(int v)
{
	struct student *t = h[4];
	int k;
	k = get_hash_key(v);
	t = h[k];
	if (h[k]->no == v)
	{
		h[k] = h[k]->next;
		t = h[k];
		return 0;
	}
	   while(t->next->no != v || t->next != NULL)
	   {
		   t = t->next;
	
	   }
	   if(t->no != v)
		   return 0;
	    
	   else if(t->next == NULL)
	    {
		 t = NULL;
		 return 0;
		}
     t->next = t->next->next;
     return 0;
	 
}




