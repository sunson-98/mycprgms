#include<stdio.h>
#include"string.h"
#include <stdlib.h>
#include "defs.h"

struct villa *h[10];

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
{
	struct villa *new = NULL, *t = NULL;
	int j;

	j = get_hashkey(v);
	//printf("%d :%s. %s:->hash_key :%d\n", __LINE__, __FUNCTION__, __FILE__, j);

	new = malloc(sizeof(struct villa));
	new->no = v;
	new->next = NULL;
	if(j == 0)
		strcpy(new->pos, "l1l");
	if(j == 1)
		strcpy(new->pos, "l1r");
	if(j == 2)
		strcpy(new->pos, "r1r");
	if(j == 3)
		strcpy(new->pos,"r1l");
	if(j == 4)
		strcpy(new->pos, "l2l");
	if(j == 5)
		strcpy(new->pos, "l2r");
	if(j == 6)
		strcpy(new->pos, "r2r");
	if(j == 7)
		strcpy(new->pos, "r2l");


	if(h[j] == NULL)
	{
		h[j] = new;
		return 0;
	}

	t = h[j];
	//printf("%d :%s. %s\n", __LINE__, __FUNCTION__, __FILE__);
	//printf("vno :%d, lane :%s\n", new->no, new->pos);

	while(t->next != NULL)
	{
		t = t->next;
	}
	t->next = new;

	return 0;
}

void dump_list(struct villa *th)
{
	struct villa *t = NULL;
	int flag = 0;
	for (t = th; t != NULL; t = t -> next)
	{
		printf("%s %d  ", t->pos, t->no);
		flag = 1;
	}
	if (flag)
	{
		printf("\n");
		flag = 0;
	}
}

void dump_hash_list(void)
{
	struct villa *t = NULL;
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		printf("%d->", i);
		dump_list(h[i]);
	}
}

int main()
{
	//printf("%d :%s. %s\n", __LINE__, __FUNCTION__, __FILE__);
	add_node(107);
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
	dump_hash_list();
	return 0;
}
