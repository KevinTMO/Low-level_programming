#include <stdio.h>

/**
*main - will print the alphabet in lowercase except for 'e' && 'q'
*Return: will return 0 if success
*/

int main(void)
{
	char lowerA = 'a';
	char lowerZ = 'z';

	while (lowerA <= 'z')
	{
		if (lowerA != 'e' && lowerA != 'q')
		{
			putchar(lowerA);
		}
		lowerA++;
	}
	putchar('\n');
	return (0);
}
