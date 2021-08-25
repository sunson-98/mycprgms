#include"defs.h"
int atoupper(int c);
int astrlen(char *s);
int astrcmp(char *s1, char *s2)
{
	int i, y = 0, t;
	t = astrlen(s1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (atoupper(s1[i]) == atoupper(s2[i]))
			y = y + 1;
	}
	  
	  if (y == t)
		  return 1;
	  else 
		  return 0;
}

    
	


		 


