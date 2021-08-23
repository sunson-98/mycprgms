
int aislower (int c);
int atoupper(int c)

{
	if (aislower(c) == 1)
		c = c - 32;
	return c;
}


