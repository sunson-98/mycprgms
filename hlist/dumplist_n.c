#include<stdio.h>
#include"defs2.h"
extern struct student2 *h[26];
void dumplist_n(void)
{
	struct student2 *t;
	int i = 0;
	for(i = 0; i <= 26; i++)
	{
		t = h[i];
	while(t != NULL)
	{
		printf("\nname = %s\n", t->v);
		t = t->next;
	}
	}

}



