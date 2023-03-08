#include "roadmap.h"

/**
*main - will call printTriangle() to print a triangle
*Return: will return 0 if success
*/

int main(void)
{
	printTriangle(2);
	printTriangle(10);
	printTriangle(4);
	printTriangle(0);
	return (0);
}

/**
*printTriangle - will print a triangle by n time using '#'
*@size: store the size of the triangle
*Return: will return nothing (void)
*/

void printTriangle(int size)
{
	int width;
	int height;
	int spaces;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			spaces = 0;
			while (spaces < size - height)
			{
				_putchar(' ');
				spaces++;
			}
			width = 0;
			while (width < height + 1)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
		}
	}
}
