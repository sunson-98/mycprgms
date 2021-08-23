#include<stdio.h>
#include "defs.h"

int test_islower()
{
	int f = 0;
	char ch = 'a';

	f = aislower(ch);
	if (f == 0)
		printf("%c: is NOT Lower\n", ch);
	else 
		printf("%c: is a Lower\n", ch);
}

int test_isupper()
{
	int f = 0;
	char ch = 'a';

	f = aisupper(ch);
	if (f == 1)
		printf("%c: is a UPPER\n", ch);
	else 
		printf("%c: is NOT UPPER\n", ch);
}

int test_isdegit()
{
	int f = 0;
	char ch = 'a';

	f = aisdight(ch);
	if (f == 1)
		printf("%c: is a degit\n", ch);
	else 
		printf("%c: is NOT degit\n", ch);
}

int test_isalnum()
{
	int f = 0;
	char ch = 'a';

	f = aisalnum(ch);
	if (f == 1)
		printf("%c: \n \n is alpha or numerical value",ch);
	else 
		printf("it is neither alpha value nor numerical value");
}

int test_isalpha()
{
	char ch = 'a';
	int f;
	f = aisalpha(ch);
	if (f == 1)
		printf("%c: \n \n is an alphabet", ch);
	else 
		printf ("%c: \n \n is not an alphabet", ch);
}

int test_iscntrl()
{
	char ch = 'a';
	int f;
	f = aiscntrl(ch);
	if (f == 1)
		printf("\n %c: \n \n is a control charecter", ch);
	else
		printf("\n %c: \n \n is not a control charecter", ch);
}

int test_isgraph()
{
	char ch = 'a';
	int f;
	f = aisgraph(ch);
	if (f == 1)
		printf("\n \n %c: \n \n is a printable charecter", ch);
	else 
		printf("\n \n %c: \n \n is not a printable charecter", ch);
}

int test_ispunct()
{
	char ch = 'a';
	int f;
	f = aispunct(ch);
	if (f == 1)
		printf("\n \n %c: \n \n is punctuation charecter", ch);
	else
		printf("\n \n %c: \n \n is not a puntuation charecter", ch);
}

int test_isspace()
{
	char ch = 'a';
	int f;
	f = aisspace(ch);
	if (f == 0)
		printf("\n \n %c: \n \n is a space", ch);
	else
		printf("\n \n %c: \n \n is not a space", ch);
}

int test_isasscii()
{
	char ch = 'a';
	int f;
	f = aisascii(ch);
	if (f == 1)
		printf("\n \n %c: \n \n is an ascii value", ch);
	else
		printf("\n \n %c: \n \n is not an ascii value", ch);
}

int test_isblank()
{
	char ch = 'a';
	int f;
	f = aisblank(ch);
	if (f == 1)
		printf("\n \n %c: \n \n is blank space", ch);
	else 
		printf("\n \n %c: \n \n is not blank space", ch);
}

int test_isxdigit()
{
	char ch = 'a';
	int f;
	f = aisxdight(ch);
	if (f == 1)
		printf("\n \n %c: \n \n is an hexa decimal num ", ch);
	else
		printf("\n \n %c: \n \n is not an hexa decimal num", ch);
}

int test_astrlen()
{
	char str[100] = "aura networks";
	int f;
	f = astrlen(str);
	printf("%s len :%d\n", str, f);
}

int test_atoupper()
{
	char retval;
	char ch = 'a';

	retval = atoupper(ch);
	printf("After converting %c to UPPER :%c\n", ch, retval);
}

int main()
{
	/*
	test_islower();
	test_isupper();
	test_isdegit();
	test_isalnum();
	test_isalpha();
	test_isalpha();
	test_iscntrl();
	test_isgraph();
	test_ispunct();
	test_isspace();
	test_isasscii();
	test_isblank();
	test_isxdigit();
	test_astrlen();
	*/
	test_atoupper();
}


