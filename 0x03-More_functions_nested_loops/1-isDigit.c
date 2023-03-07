#include "roadmap.h"

/**
*main - will call isDigit() to evaluate if the value passed is a digit or not
*Return: will return 0 if success
*/

int main(void)
{
	char c; /* will stored the value as char */

	c = '0';

	printf("%c %d\n", c, isDigit(c));

	c = 'a';

	printf("%c %d\n", c, isDigit(c));

	return (0);
}

/**
*isDigit - will validate if the value passed is an actual digit or not
*@n: is the value to validate
*Return: will return 1 if true, 0 if false
*/

int isDigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}

	else
		return (0);
}
