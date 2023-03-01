#include "roadmap.h"

/**
*main - will call checkAlpha() to validate given values
*Return: will return 0 if success
*/

int main(void)
{
	int r; /* return value received */

	r = checkAlpha('A');
	_putchar(r + '0');
	_putchar('\n');
	r = checkAlpha(5);
	_putchar(r + '0');
	_putchar('\n');
	r = checkAlpha(105);
	_putchar(r + '0');
	_putchar('\n');
	r = checkAlpha(0);
	_putchar(r + '0');
	_putchar('\n');
	r = checkAlpha('5');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
*checkAlpha - will validate if the value received is alphabetic
*@c: the value received to validate
*Return: will return 1 if alpha or 0 if not
*/

int checkAlpha(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
