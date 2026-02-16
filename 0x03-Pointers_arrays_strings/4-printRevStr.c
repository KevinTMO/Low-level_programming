#include "roadmap.h"

/**
*printRevStr - will print a string in reverse order
*@str: the string received to print
*Return: will return nothing (void)
*/

void printRevStr(char *str)
{
	int index;

	index = strLen(str);

	while (str[index] > -1)
	{
		_putchar(str[index]);
		index--;
	}
	_putchar('\n');
}
