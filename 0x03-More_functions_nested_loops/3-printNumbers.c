#include "roadmap.h"

/**
*main - will call printNumbers() to print all numbers from 0-9
*Return: will return 0 if success
*/

int main(void)
{
	printNumbers();
	return (0);
}

/**
*printNumbers - will print all numbers from 0-9
*Return: will return nothing (void)
*/

void printNumbers(void)
{
	int num0 = 0;

	while (num0 <= 9)
	{
		_putchar(num0 + '0');
		num0++;
	}
	_putchar('\n');
}
