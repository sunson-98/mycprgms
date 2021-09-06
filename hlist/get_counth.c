#include"defs.h"
#include<stdio.h>
#include<stddef.h>
extern struct student *h[4];

 void get_count(void)
{
int i = 0, y = 0, temp = 0;

struct student *t = h[4];
for(i = 0; i <= 4; i++)
 {
	 t = h[i];
	 while(t != NULL)
	 {
		 t = t->next;
		 y = y + 1;
	 }
	 printf("\n\nno of nodes in:%d hash bucket = %d\n\n", i, y);
	 temp = temp + y;
	 y = 0;
 }
printf("\n\ntotal no of nodes = %d\n\n", temp);
}



