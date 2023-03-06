#include "roadmap.h"

/**
*main - will call printTimesTable() to print the table of 0 till 9
*Return: will return 0 if success
*/

int main(void)
{
	printTimesTable();
	return (0);
}

/**
*printTimesTable - will print the table of 0 till 9
*Return: will return nothing (void)
*/

void printTimesTable(void)
{
	int result;
	int row;
	int col;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
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
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
