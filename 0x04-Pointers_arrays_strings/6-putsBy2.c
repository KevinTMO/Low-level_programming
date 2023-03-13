#include "roadmap.h"

/**
*main - will call putByTwo() to print one character every two
*Return: will return 0 if success
*/

int main(void)
{
	char *str;

	str = "0123456789";
	putByTwo(str);
	return (0);
}

/**
*putByTwo - will print a char every two char
*@str: is the string passed to print
*Return: will return nothing (void)
*/

void putByTwo(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}

/*
* int index = 0;
* while (str[index] != '\0')
*      _putchar(*str);
*      index++;
* _putchar('\n');
*/
