#include "roadmap.h"

/**
*main - will call printT98() to print all natural numbers from n to 98
*Return: will return 0 if success
*/

int main(void)
{
	printT98(0);
	printT98(-20);
	printT98(138);
	printT98(98);
	return (0);
}

/**
*printT98 - will print all natural numbers from n to 98
*@n: is the natural number
*Return: will return nothing (void)
*/

void printT98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	putchar('\n');
}
