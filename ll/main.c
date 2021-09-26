#include<stdio.h>
#include<stdlib.h>
#include<defs.h>
struct student
{
int no;
struct student *next;	
};
struct student *h;
   
    int main()
   {
	   int y, l;
	   	add_node(10);
	add_node(20);
	add_node(30);
	add_node(50);
	add_atbegin(100);
	update_node_byval(100, 200);
    getmid_val();
	get_count();
	y = valbypos(3);
	l = posbyval(30);
	return 0;
   }




