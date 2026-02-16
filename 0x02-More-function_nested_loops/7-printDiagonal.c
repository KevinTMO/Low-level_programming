#include "roadmap.h"

/**
*printDiagonal - will print diagonal width by n time
*@n: is the value for the lenght of the width
*Return: will return nothing (void)
*/

void printDiagonal(int n)
{
	int width;
	int height;

	if (n > 0)
	{
		for (width = 0; width <= n; width++)
		{
			for (height = 0; height <= width; height++)
			{
				_putchar('\\');
			}
			_putchar(' ');
			_putchar('\n');
		}
	}
}