#include<stdio.h>
#include"defs2.h"
#include"stddef.h"
int get_hashkey_names(char p)
{
	int i, j = 0;
	if(p >= 65 && p <= 90)
	{
		for(i = 65; i != p; i++,j++);
		return j;
	}
	
	if(p >= 97 && p <= 123)
	{
		for(i = 65; i != p; i++,j++);
		return j;
	}
}

		
		
			



