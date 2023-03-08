#include "roadmap.h"

/**
*main - will call printSquare() to print a square by n times using "#"
*Return: will return 0 if success
*/

int main(void)
{
	printSquare(0);
	printSquare(2);
	printSquare(10);
	printSquare(-4);
	return (0);
}

/**
*printSquare - will print a square by n time using "#"
*@n: size of the square
*Return: will return nothing (void)
*/

void printSquare(int n)
{
	int width = 0;
	int height;

	if (n > 0)
	{
		for (height = 0; height < n; height++)
		{
			width = 0;
			while (width < n)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
		}
	}
}
