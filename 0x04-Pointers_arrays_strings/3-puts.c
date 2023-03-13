#include "roadmap.h"

/**
*main - will call _puts to print a string followed by a newline
*Return: will return 0 if success
*/

int main(void)
{
	char *str; /* the var to hold a string */

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);

	return (0);
}

/**
*_puts - will print a str passed in a paremeter to stdout followed by a newline
*@str: is the string to print to stdout
*Return: will return nothing (void)
*/

void _puts(char *str)
{
	int index; /* will iterate the str */

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
