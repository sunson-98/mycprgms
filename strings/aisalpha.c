#include "stdio.h"

int aisalpha (int c)
{
	printf("c :%d\n", c);
	//if (c >= 97 && c <= 122)
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return 1;
	else 
		return 0;
}

