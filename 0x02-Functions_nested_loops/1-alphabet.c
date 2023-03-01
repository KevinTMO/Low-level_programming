#include "roadmap.h"

/**
*main - will call function printAlphabet to print an alphabet
*Return: will return 0 if success
*/

int main(void)
{
	printAlphabet();
	return (0);
}

/**
*printAlphabet - will print the alphabet in lowercase
*Return: will return nothing (void)
*/

void printAlphabet(void)
{
	int lowerA = 97;

	while (lowerA <= 122)
	{
		_putchar(lowerA);
		lowerA++;
	}
	_putchar('\n');
}
