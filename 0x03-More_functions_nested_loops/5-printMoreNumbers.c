#include "roadmap.h"

/**
*main - will call printMoreNumbers() to print numbers from 0 to 14
*Return: will return 0 if success
*/

int main(void)
{
	printMoreNumbers();
	return (0);
}

/**
*printMoreNumbers - will print numbers from 0 to 14
*Return: will return nothing (void)
*/

void printMoreNumbers(void)
{
	int num0 = 0;

	while (num0 <= 14)
	{
		if (num0 <= 9)
		{
			_putchar(num0 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (num0 >= 10 && num0 <= 13)
		{
			_putchar((num0 / 10) + '0');
			_putchar((num0 % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (num0 == 14)
		{
			_putchar((num0 / 10) + '0');
			_putchar((num0 % 10) + '0');
		}

		num0++;
	}
	_putchar('\n');
}
