int update_node_bypos(int x, int v)
{
	extern struct student  *h;
	struct student *t =h;
	int i = 0;
	while (i != x)
	{
		t = t -> next;
		i = i + 1;
	}
	t -> no = v;
	return 0;
}


		

	

