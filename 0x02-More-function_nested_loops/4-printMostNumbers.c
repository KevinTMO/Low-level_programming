#include "roadmap.h"

/**
*printMostNumbers - will print all numbers from 0-9 excluding 2 && 4
*Return: will return nothing (void)
*/

void printMostNumbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		if (nums != '2' && nums != '4')
		{
			_putchar(nums);
		}
	}
	_putchar('\n');
}
