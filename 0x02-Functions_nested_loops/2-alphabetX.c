#include "roadmap.h"

/**
*main - will call function printAlphabet to print an alphabet
*Return: will return 0 if success
*/

int main(void)
{
	printAlphabet_X();
	return (0);
}

/**
*printAlphabet_X - will print the alphabet in lowercase
*Return: will return nothing (void)
*/

void printAlphabet_X(void)
{
	int lowerA;
	int times = 0;

	while (times <= 9)
	{
		lowerA = 97;
		while (lowerA <= 122)
		{
			_putchar(lowerA);
			lowerA++;
		}
		times++;
		_putchar('\n');
	}
}

