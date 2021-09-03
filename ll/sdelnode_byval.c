int del_nodebyval(int v)
{
	struct student *t = h;
	
	while(t -> next -> no != v)
	{
		t = t -> next;
	}
	t -> next = t -> next -> next;
	return 0;
}

