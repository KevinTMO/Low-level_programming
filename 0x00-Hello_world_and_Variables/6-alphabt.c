#include <stdio.h>

/**
*main - print the alphabet in lowercase. Exclude 'e' && 'q'.
*Return: will return 0
 */

int main(void)
{
	char alpha = 97;
	char lstChar = 122;

	while (alpha <= lstChar)
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}

	putchar('\n');
	return (0);
}
