  int del_nodebypos(int x)
{
	extern struct student *h;
	struct student *t = h;
	int i = 0;
	 if (x == 0)
	 {
		 h = h -> next;
		 t = h;
	    return 0;
	 }

    
	 while(i != x - 1 )
	{
		t = t -> next;
		i = i + 1;
	}
	 if (t -> next -> next == NULL)
		 t -> next = NULL;
	 else
        t -> next  = t -> next -> next;
	 return 0;
}

