#include<stdio.h>
#include"string.h"
struct student 
{
	int age;
	int no;
	char name[74];
	
};
int main()
{
	struct student s1;
	s1.no = 100;
	s1.age = 18;
	strcpy(s1.name,"Ikshwak");
	printf("%d\n", s1.no );
	printf("%d\n", s1.age );
    printf("%s\n", s1.name);
}

	

