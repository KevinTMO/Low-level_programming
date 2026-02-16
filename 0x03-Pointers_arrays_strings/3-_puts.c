#include "roadmap.h"

/**
*_puts - will print a str to the stdout
*@str: is the string received to print
*Return: will return nothing (void)
*/

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
