int posbyval(int v)
{

	int i = 0;
	struct student *t = h;

	while(t -> no != v)
	{
		t = t -> next;
		i = i + 1;
	}
	return i;
}

