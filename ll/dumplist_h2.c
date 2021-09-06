#include<stdio.h>
#include<defs.h>
int dumplist()
{	
	extern struct student *h[4];
	struct student *t;
	int i = 0;
	for (i = 0; i <= 4; i++)
	{
		
	 t = h[i];
	 while(t -> no = NULL)
	 {
		t = t -> next;
		printf("\n\nnode value = %d\n\n", t -> no); 
	 }
	}
	return 0;
}







	

