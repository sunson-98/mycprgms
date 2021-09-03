int add_node(int v)
{
	struct student *p = NULL, *t = NULL;
	p = (struct student *) malloc(sizeof(struct student));
	t = h;
	p -> no = v;
	p -> next = NULL;
	if (h == NULL)
	{
		h = p;
		return 0;
	}
	while(t -> next != NULL)
	{
		t = t -> next;
	}

	  t -> next = p;

	  return 0;
}

