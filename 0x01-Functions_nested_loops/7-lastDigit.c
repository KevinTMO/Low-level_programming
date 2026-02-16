#include "roadmap.h"

/**
*printLastDigit - will return the last digit. If negative, convert to positive.
*@n: the number received. Check for negatives.
*Return: will return nothing (void).
*/

void printLastDigit(int n)
{
	if (n < 0)
	{
		n = (n * -1) % 10;
		_putchar(n + '0');
		_putchar('\n');
		return;
	}
	n = n % 10;
	_putchar(n + '0');
	_putchar('\n');
}
