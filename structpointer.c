#include<stdio.h>
#include"string.h"
struct student 
{
	int age;
	int no;
	char name[64];
};
int main()
{
	struct student s1, s2, *p1, *p2;

	p1 = &s1;
	p2 = &s2;
	s1.age = 18;
	s1.no = 415;
	strcpy(s1.name, "advaitha");
	printf("age = %d\n\n", p1 -> age);
	printf("no = %d\n\n", p1 -> no);
	printf("name = %s\n\n", p1 -> name);
}





