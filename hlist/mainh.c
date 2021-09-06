#include<stdio.h>
#include "defs.h"

struct student *h[4] = {NULL, NULL, NULL, NULL};

int main()
{
	addnode_hash(10);
	addnode_hash(20);
	addnode_hash(21);
	addnode_hash(15);
	addnode_hash(18);
	//dumplist();
	delnode_byval(28);
	dumplist();
	get_count();
	return 0;
}






