int add_node_double(int v)
{
	struct student *p = NULL, *t = NULL;
	p = (struct student *) malloc(sizeof(struct student));
	t = h;
	p -> no = v;
	p -> next = NULL;
	if (h == NULL)
	{
		h = p;
		p -> p = NULL;
		return 0;
	}
	while(t -> next != NULL)
	{
		t = t -> next;
	}

	  t -> next = p;
	  p -> p = t;

	  return 0;
}

