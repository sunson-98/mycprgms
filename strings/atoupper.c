#include "defs.h"

int atoupper(int c)
{
	if (aislower(c) == 1)
	{
		c = c - 32;
		return c;
	}
	else 
		return c;
}


