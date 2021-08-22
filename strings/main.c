#include<stdio.h>
int islower (int c);
int isupper(int c);
int isdight(int c);
int isalnum(int c);
int isalpha(int c);
int main()
{
	char ch = '{' ;
	int f;

	//f = islower(ch);
//	if (f == 0)
//		printf("%c: is NOT Lower\n", ch);
//	else 
//		printf("%c: is a Lower\n", ch);

//	f = isupper(ch);
//	if (f == 1)
//		printf("%c: is a UPPER\n", ch);
//	else 
//		printf("%c: is NOT UPPER\n", ch);
    //f = isdight(ch);
    //if (f == 1)
	//	printf("%d: is a dight\n", ch);
	//else
	//	printf("%c: is not a dight\n", ch);
	//f = isalnum(ch);
	//if (f == 1)
	//	printf("%c: \n \n is alpha or numerical value",ch);
	//else 
		//printf("it is neither alpha value nor numerical value");
		f = isalpha(ch);
		if (f == 1)
			printf("%c: \n \n is an alphabet", ch);
		else 
			printf ("%c: \n \n is not an alphabet", ch);
}


