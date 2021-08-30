#include<stdio.h>
struct student
{
	int age;
	int no;
	struct student *next;
};

int main()
{
	struct student s1, s2, s3, s4, *p;
	p = &s1;
	s1.age = 20;
	s2.age = 19;
	s3.age = 18;
	s4.age = 21;
	s1.no = 215;
	s2.no = 415;
	s3.no = 444;
	s4.no = 555;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	s4.next = NULL;

	while(p != NULL)
	{
		printf("\n%d\n\n", p -> age);
		printf("\n%d\n\n", p -> no);
		printf("\n%p\n\n", p -> next);
		p = p -> next;
	}
}


