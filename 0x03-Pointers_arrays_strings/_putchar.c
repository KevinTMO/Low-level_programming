#include <unistd.h>

/**
*_putchar - will print a single character received as arg
*@c: the character received
*Return: will return 0
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
