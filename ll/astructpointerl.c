#include<stdio.h>
struct student 
{
	int age;
	struct student *next;
};
int main()
{
	struct student s1, s2, s3, *p;
	p = &s1;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;
	s1.age = 18;
	s2.age = 20;
	s3.age = 17;
	 
while (p != NULL)
 {
    printf("%d\n\n", p -> age);
	printf("%p\n\n", p -> next);
	p = p -> next;
 }

}

	 

