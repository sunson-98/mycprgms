int update_node_byval(int k, int v)
{
	extern struct student *h;
	struct student *t = h;
	while (t -> no != k)
	{
		t = t -> next;
	}
	t -> no = v;
	return 0;
}



