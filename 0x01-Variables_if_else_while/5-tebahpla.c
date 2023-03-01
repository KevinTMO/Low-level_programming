#include <stdio.h>

/**
*main - will print the alphabet in reverse
*Return: will return 0 if success
*/

int main(void)
{
	int lowerZ = 122;

	while (lowerZ >= 97)
	{
		putchar(lowerZ);
		lowerZ--;
	}
	putchar('\n');
	return (0);
}
