#include "roadmap.h"

/**
*printTo98 - print all natural number till 98
*@n: is value received to print all natural numbers till 98
*Return: will return nothing (void)
*/

void printTo98(int n)
{
	int base = 98;

	printf("Natural numbers: ");

	while (n <= base || n >= base)
	{
		if (n == base)
		{
			printf("%d\n\n", n);
			return;
		}
		else if (n <= base)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n >= base)
		{
			printf("%d, ", n);
			n--;
		}
	}
	putchar('\n');
}
