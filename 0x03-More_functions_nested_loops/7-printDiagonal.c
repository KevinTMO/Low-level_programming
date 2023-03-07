#include "roadmap.h"

/**
*main - will call printDiagonal() to print a diagonal line by n times using '\'
*Return: will return 0 if success
*/

int main(void)
{
	printDiagonal(0);
	printDiagonal(2);
	printDiagonal(10);
	printDiagonal(-4);
	return (0);
}

/**
*printDiagonal - will print a diagonal line by n times using '\'
*@n: is the max time to print '\'
*Return: will return nothing (void)
*/

void printDiagonal(int n)
{
	int lines; /* lines will iterate like rows */
	int spaces = 0; /* will represent the spaces to prints */

	for (lines = 0; lines < n; lines++)
	{
		spaces = 0; /* Redef spaces after finishing with while loop */
		while (spaces < lines)
		{
			/* printf("Getting inside of while loop\n"); */
			_putchar(' ');
			spaces++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
