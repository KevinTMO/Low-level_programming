#include <stdio.h>

/**
*main - will print an alphabet in lowercase
*Return: will return 0 if success
*/

int main(void)
{
	char lowerA = 'a';
	char lowerZ = 'z';

	while (lowerA <= lowerZ)
	{
		putchar(lowerA);
		lowerA++;
	}

	putchar('\n');

	return (0);
}
