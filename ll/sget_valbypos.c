int valbypos(int x)
{
	int i = 0;
	struct student *t =h;
	while(i != x)
	{
		t = t -> next;
		i = i + 1;
	}
	return (t -> no);
}

