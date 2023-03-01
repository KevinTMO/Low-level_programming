#include <stdio.h>

/**
*main - will print the alphabet in lowercase then in uppercase
*Return: will return 0 if success
*/

int main(void)
{
	char lowerA = 97;
	char upperA = 65;

	while (lowerA <= 122)
	{
		putchar(lowerA);
		lowerA++;
	}
	putchar('\n');

	while (upperA <= 90)
	{
		putchar(upperA);
		upperA++;
	}
	putchar('\n');
	return (0);
}
