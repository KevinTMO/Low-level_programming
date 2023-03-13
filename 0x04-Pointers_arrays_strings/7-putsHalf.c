#include "roadmap.h"

/**
*putsHalf - will print the first half of a string
*@s: is the string passed to cut in half and prints to stoud
*Return: will return nothing (void)
*/

void putsHalf(char *s)
{
	int index = 0, length = 0;

	length = strLen(s);

	printf("The length of s is: %d\n", length);

	if (length % 2 == 0)
	{
		/* printf("Getting inside\n"); */
		length = length / 2;

		while (index < length)
		{
			/* printf("Getting inside of loop\n"); */
			_putchar(s[index]);
			index++;
		}
	}
	else
	{
		length = (length - 1) / 2;

		/* printf("The size of length after minus 1 is: %d\n", length); */

		while (index < length)
		{
			_putchar(s[index]);
			index++;
		}
	}
	_putchar('\n');
}
