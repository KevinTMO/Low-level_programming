#include "roadmap.h"

/**
*main - will call printMostNumbers() to print all numbers except 2 && 4
*Return: will return 0 if success
*/

int main(void)
{
	printMostNumbers();
	return (0);
}

/**
*printMostNumbers - will print all numbers except for 2 and 4
*Return: will return nothing (void)
*/

void printMostNumbers(void)
{
	int num0 = 0;

	while (num0 <= 9)
	{
		if (num0 != 2 && num0 != 4)
		{
			_putchar(num0 + '0');
		}
		num0++;
	}
	_putchar('\n');
}
