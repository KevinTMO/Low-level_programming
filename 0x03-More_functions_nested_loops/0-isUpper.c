#include "roadmap.h"

/**
*main - will call the function isUpper() to validate
* if the value is upper or not
*Return: will return 0 if success
*/

int main(void)
{
	char c; /* will save the value of a char */

	c = 'A';

	printf("%c: %d\n", c, isUpper(c));

	c = 'a';

	printf("%c: %d\n", c, isUpper(c));

	return (0);
}

/**
*isUpper - will receive a value to evaluate if it's upper or not
*@c: the character to evaluate
*Return: will return 1 if true, 0 if false
*/

int isUpper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (0);
	}

	return (0);
}
