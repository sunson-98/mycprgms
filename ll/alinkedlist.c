#include<stdio.h>
#include<stdlib.h>
struct student
{
	int no;
	struct student *next;
};

 struct student *h = NULL;
 int add_node(int v)
{
struct student *p = NULL, *t = NULL, *h;
t = h;
p = (struct student *) malloc(8);
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

	
  int add_node(int v);
  int dumplist()
{
	while(h != NULL)
	{
      printf("\n%d\n", h -> no);
	  printf("\n%p\n", h -> next);
	  h = h -> next;
	}
};

 int add_node(int v);
 int main()
{

 add_node(10);
 add_node(20);
 add_node(30);
 add_node(50);

}






