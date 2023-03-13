#include "roadmap.h"

/**
*main - will call swapInts() to swap two integers
*Return: will return 0 if success
*/

int main(void)
{
	int a; /* First integer */
	int b; /* Second integer */

	a = 98;
	b = 42;

	printf("a = %d, b = %d\n", a, b);
	swapInts(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return (0);
}

/**
*swapInts - will swap the value of two var
*@a: first integer
*@b: second integer
*Return: will return nothing (void)
*/

void swapInts(int *a, int *b)
{
	int holder = 0;

	holder = *a;
	*a = *b;
	*b = holder;
}
