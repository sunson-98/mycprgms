#include<stdio.h>
#include"string.h"
#include <stdlib.h>
#include "defs.h"

int get_hashkey(int v)
{
	if (v == 100 || v == 99 || v == 98)
	  return 0;
	if(v == 111 || v == 101 || v == 107)
		return 1;
	if(v == 86 || v == 89 )
		return 2;
	if(v == 93 || v == 92 || v == 91 || v == 90)
		return 3;
	if(v == 112 || v == 110 || v == 108)
		return 4;
	if(v == 113)
		return 5;
	if(v == 94 || v == 95 || v == 96 || v == 97)
		return 6;
	if(v != 86 && v != 89 && v < 90 && v > 113)
		return 7;
}


  int add_node(int v)
	extern struct villa *h;
{
	struct villa *p = NULL, *t = NULL;
	int j;
	j = get_hashkey(v);

	p = malloc(sizeof(struct villa));
	p->no = v;
	if(j == 0)
		strcpy(p->pos, "l1l");
	if(j == 1)
		strcpy(p->pos, "l1r");
	if(j == 2)
		strcpy(p->pos, "r1r");
	if(j == 3)
		strcpy(p->pos,"r1l");
	if(j == 4)
		strcpy(p->pos, "l2l");
	if(j == 5)
		strcpy(p->pos, "l2r");
	if(j == 6)
		strcpy(p->pos, "r2r");
	if(j == 7)
		strcpy(p->pos, "r2l");
    
	if(h[j] == NULL)
	{
		h[j] = p;
	}
	
	 t = h[j];

	 while(t->next != NULL)
	 {
		 t = t->next;
	 }
	 p = t->next;
	 return 0;
}
  dumplist()
	extern struct villa *h;
{
	struct villa *t = NULL;
	int i = 0;
	while(i<8)
	{
		t = h[i];
		t = t->next;
		printf("\n\n%s\n\n", t->pos);
		printf("\n\n%d\n\n", t->no);
		 if(t->next == NULL)
		  i = i + 1;
	}
}
int main()

{

add_node(100);
add_node(99);
add_node(98);
add_node(111);
add_node(101);
add_node(107);
add_node(86);
add_node(89);
add_node(93);
add_node(92);
add_node(91);
add_node(90);
add_node(112);
add_node(110);
add_node(100);
add_node(113);
add_node(99);
add_node(95);
add_node(96);
add_node(97);
dumplist();

}







		
		





