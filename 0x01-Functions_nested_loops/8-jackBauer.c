#include "roadmap.h"

/**
*jackBauer - will print digits in pair from 00:00 to 23:59
*Return: will return nothing (void)
*/

void jackBauer(void)
{
	int fDgt;
	int SDgt;
	int thDgt;
	int fthDgt;

	for (fDgt = 0; fDgt <= 2; fDgt++)
	{
		for (SDgt = 0; SDgt <= 9; SDgt++)
		{
			for (thDgt = 0; thDgt <= 5; thDgt++)
			{
				for (fthDgt = 0; fthDgt <= 9; fthDgt++)
				{
					if (fDgt == 2 && SDgt == 4 && thDgt == 0 && fthDgt == 0)
					{
						return;
					}
					else
					{
						_putchar(fDgt + '0');
						_putchar(SDgt + '0');
						_putchar(':');
						_putchar(thDgt + '0');
						_putchar(fthDgt + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}