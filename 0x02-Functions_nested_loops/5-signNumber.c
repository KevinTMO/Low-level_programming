#include "roadmap.h"

/**
*main - will call printSign to validate if the number is negative/positive
* and print a sign
*Return: will return 0 if success
*/

int main(void)
{
	int r; /* return value received */

	r = printSign(-10);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = printSign(10);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = printSign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = printSign(-1024);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = printSign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = printSign('0');
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
*printSign - will validate the value and print a sign accordingly
*@number: is the value to validate
*Return: will return 1 if positive, -1 if negative or 0 if zero
*/

int printSign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (number < 0)
	{
		_putchar('-');
		return (-1);
	}

	else if (number == 0)
	{
		_putchar(number + '0');
		return (0);
	}
	return (0);
}
