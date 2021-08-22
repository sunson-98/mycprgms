#include "stdio.h"

int islower (int c)
{
	printf("c :%d\n", c);
	//if (c >= 97 && c <= 122)
	if (c >= 'a' && c <= 'z')
		return 1;
	else 
		return 0;
}

