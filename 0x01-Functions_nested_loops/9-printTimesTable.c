#include "roadmap.h"

/**
*printTimesTable - should print all the times table
*Return: wil return nothing (void)
*/

void printTimesTable(void)
{
	int base;
	int nTime;
	int result = 0;
	int fDgt, SDgt;

	for (base = 0; base <= 9; base++)
	{
		for (nTime = 0; nTime <= 9; nTime++)
		{
			result = base * nTime;
			if (result > 9)
			{
				fDgt = result / 10;
				SDgt = result % 10;
				_putchar(fDgt + '0');
				_putchar(SDgt + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (nTime != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
