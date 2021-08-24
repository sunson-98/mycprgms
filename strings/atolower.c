int aisupper(int c);
int atolower(int c)
{
	if (aisupper(c) == 1)
		c = c + 32;
	  
	return c;
	  
	 
		
}

