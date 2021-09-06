#include<stdio.h>
#include "defs.h"

extern struct student *h[4];

void dumplist(void)
{	
	struct student *t;
	int i = 0;
	printf("%s->%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
	for (i = 0; i <= 4; i++)
	{
		//printf("%s->%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
		t = h[i];
		while(t != NULL)
		{
			//printf("%s->%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
			printf("%5d", t->no); 
			t = t->next;
		}
	}
	printf("\n");
}


