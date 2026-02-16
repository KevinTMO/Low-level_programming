#include "roadmap.h"

/**
*printNumbers - will print the numbers from 0-9
*Return: will return nothing (void)
*/

void printNumbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		_putchar(nums);
	}
	_putchar('\n');
}
