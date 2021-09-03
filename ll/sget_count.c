int get_count()
{
	extern struct student *h;
	int i = 0;
	struct student *t = h;
	while(t != NULL)
	{
		t = t -> next;
		i = i + 1;
	}
	printf("\n%d\n", i);
}


