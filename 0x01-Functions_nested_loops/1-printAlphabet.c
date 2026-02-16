#include "roadmap.h"

/**
*printAlphabet - will print the alphabet
*Return: will return nothing (void)
*/

void printAlphabet(void)
{
	char firstCh;

	for (firstCh = 'a'; firstCh <= 'z'; firstCh++)
	{
		__putchar(firstCh);
	}
	__putchar('\n');
}
