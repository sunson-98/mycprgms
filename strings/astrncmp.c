int astrncmp(char *s1, char *s2, int n)
{
	int i, y = -1;
	for (i = 0; i <= n; i++)
	{
		if (s1[i] == s2[i])
			
			y = y + 1;
		
		else 
			break;
	}
	  
	  if (y == n)
		  return 1;
	  else 
		  return 0;
}

    
	


		 


