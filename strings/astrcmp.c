int astrlen(char *s);
int astrcmp(char *s1, char *s2)
{
	int i, y = 0, t;
	t = astrlen(s1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			y = y + 1;
	}
	  
	  if (y == t)
		  return 1;
	  else 
		  return 0;
}

    
	


		 


