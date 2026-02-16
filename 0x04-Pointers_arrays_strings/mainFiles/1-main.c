#include "roadmap.h"

/**
*main - will call strNcat() to concatenate two string by n bytes
*Return: will return 0 if success
*/

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!";
	char s3[98] = "Hola ";
	char s4[] = "Mundo!\n";
	char s5[98] = "Testing last ";
	char s6[] = "time.\n";
	char *p;

	printf("First output:\n\n");

	printf("%s\n", s1);
	printf("%s\n", s2);

	p = strNcat(s1, s2, 1);

	printf("\nSecond output:\n\n");

	printf("%s", s1);
	printf("%s\n", s2);
	printf("%s", p);
	
	printf("\nThird output:\n\n");

	p = strNcat(s3, s4, 1024);

	printf("%s", s3);
	printf("%s", s4);
	printf("%s", p);

	printf("\nFourth output:\n\n");

	p = strNcat(s5, s6, 1024);

	printf("%s", s5);
	printf("%s", s6);
	printf("%s", p);

	printf("\nFifth output:\n\n");

	p = strNcat(s1, s2, 1024);

	printf("%s", s1);
	printf("%s\n", s2);
	printf("%s", p);

	printf("\nSix output:\n\n");

	p = strNcat(s1, s2, 1024);

	printf("%s", s1);
	printf("%s\n", s2);
	printf("%s", p);

	return (0);
}
