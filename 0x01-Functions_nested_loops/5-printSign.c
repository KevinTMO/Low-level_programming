#include "roadmap.h"

/**
*printSign - will print the negative sign to the value received if negative
*@n: the value received of validation
*Return: will return -1 if negative or 1 if positive
*/

int printSign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		_putchar(n + '0');
	return (0);
}
