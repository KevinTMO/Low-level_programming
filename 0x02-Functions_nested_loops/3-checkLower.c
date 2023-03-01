#include "roadmap.h"

/**
*main - will call checkLower to validate if a char is lower or not
*Return: will return 0 if success
*/

int main(void)
{
	int r; /* store return value */

	r = checkLower('R');
	_putchar(r + '0');
	_putchar('\n');
	r = checkLower('o');
	_putchar(r + '0');
	_putchar('\n');
	r = checkLower(108);
	_putchar(r + '0');
	_putchar('\n');
	r = checkLower(68);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
*checkLower - will validate if the character is lower or not
*@c: value to validate if it's a lower character
*Return: will return 1 if lower or 0 if not
*/

int checkLower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
