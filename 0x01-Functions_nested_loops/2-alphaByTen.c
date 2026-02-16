#include "roadmap.h"

/**
*printTenAlphabet - print the alphabet 10 times
*Return: will return nothing (void)
*/

void printTenAlphabet(void)
{
	int num;
	char firstCh;

	for (num = 0; num <= 9; num++)
	{
		for (firstCh = 'a'; firstCh <= 'z'; firstCh++)
		{
			__putchar(firstCh);
		}
		__putchar('\n');
	}
}
