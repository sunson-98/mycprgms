#include<stdio.h>
int aislower (int c);
int aisupper(int c);
int aisdight(int c);
int aisalnum(int c);
int aisalpha(int c);
int aiscntrl(int c);
int aisgraph(int c);
int aispunct(int c);
int aisspace(int c);
int aisascii(int c);
int aisblank(int c);
int aisxdight(int c);
int astrlen(char *s);
int atoupper(int c);
int main()
{
	char ch = 'a';
	int f;
	//char str[100] = "aura networks";

	//f = aislower(ch);
//	if (f == 0)
//		printf("%c: is NOT Lower\n", ch);
//	else 
//		printf("%c: is a Lower\n", ch);

//	f = aisupper(ch);
//	if (f == 1)
//		printf("%c: is a UPPER\n", ch);
//	else 
//		printf("%c: is NOT UPPER\n", ch);
    //f = aisdight(ch);
    //if (f == 1)
	//	printf("%d: is a dight\n", ch);
	//else
	//	printf("%c: is not a dight\n", ch);
	//f = aisalnum(ch);
	//if (f == 1)
	//	printf("%c: \n \n is alpha or numerical value",ch);
	//else 
		//printf("it is neither alpha value nor numerical value");
		//f = aisalpha(ch);
		//if (f == 1)
		//	printf("%c: \n \n is an alphabet", ch);
		//else 
			//printf ("%c: \n \n is not an alphabet", ch);
			//f = aiscntrl(ch);
			//if (f == 1)
			//	printf("\n %c: \n \n is a control charecter", ch);
			//else printf("\n %c: \n \n is not a control charecter", ch);
			//f = aisgraph(ch);
			//if (f == 1)
			  //  printf("\n \n %c: \n \n is a printable charecter", ch);
            //else 
				//printf("\n \n %c: \n \n is not a printable charecter", ch);
		      //f = aispunct(ch);
			  //if (f == 1)
				  //printf("\n \n %c: \n \n is punctuation charecter", ch);
			  //else
				  //printf("\n \n %c: \n \n is not a puntuation charecter", ch);
         //  f = isspace(ch);
		   //if (f == 0)
	//		   printf("\n \n %c: \n \n is a space", ch);
		//   else
		//	   printf("\n \n %c: \n \n is not a space", ch);
     
//       f = aisascii(ch);
//        if (f == 1)
//			printf("\n \n %c: \n \n is an ascii value", ch);
//			printf("\n \n %c: \n \n is an ascii value", ch);
//		else
//			printf("\n \n %c: \n \n is not an ascii value", ch);
  //       f = aisblank(ch);
//		 if (f == 1)
//			 printf("\n \n %c: \n \n is blank space", ch);
//		 else 
//			 printf("\n \n %c: \n \n is not blank space", ch);
//     f = aisxdight(ch);
//	 if (f == 1)
//		 printf("\n \n %c: \n \n is an hexa decimal num ", ch);
//	 else
//		 printf("\n \n %c: \n \n is not an hexa decimal num", ch);
         //f = astrlen(str);

		   //   printf("\n \n %d \n \nlen = ", f);
		   f = atoupper(ch);
		   printf("\n \n %c: \n \n ",ch);
		 
}


