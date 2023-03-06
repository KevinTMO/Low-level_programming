#include "roadmap.h"

/**
*main - will call printNTable() to print times table by n time
*Return: will return 0 if sucess
*/

int main(void)
{
	printNTable(3);
	_putchar('\n');
	printNTable(9);
	_putchar('\n');
	printNTable(12);
	_putchar('\n');
	printNTable(16);
	return (0);
}

/**
*printNTable - will print times table by n time
*@num: is the max n time to print
*Return: will return nothing (void)
*/

void printNTable(int num)
{
	int col;
	int row;
	int result;

	for (col = 0; col <= num; col++)
	{
		for (row = 0; row <= num; row++)
		{
			result = col * row;

			if (row == 0)
			{
				_putchar(result + '0');
			}
			else if (result <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result > 9 && result < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (result > 99)
			{
				_putchar(' ');
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
