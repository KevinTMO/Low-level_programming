#include "roadmap.h"

/**
*main - will call printLine() to print a line by n times using '_'
*Return: will return 0 if success
*/

int main(void)
{
	printLine(0);
	printLine(2);
	printLine(10);
	printLine(-4);
	return (0);
}

/**
*printLine - will print a straight line by n times using '_'
*@n: is the number of times to print '_'
*Return: will return nothing (void)
*/

void printLine(int n)
{
	int num0 = 0;

	while (num0 < n)
	{
		_putchar('_');
		num0++;
	}
	if (num0 == n && num0 != 0)
	{
		_putchar('\n');
	}

}
