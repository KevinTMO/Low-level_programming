#include "roadmap.h"

/**
*putByTwo - will print a character every two
*@str: the string received to print
*Return: will return nothing
*/

void putByTwo(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index+=2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
