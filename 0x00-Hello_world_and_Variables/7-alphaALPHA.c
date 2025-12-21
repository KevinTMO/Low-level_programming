#include <stdio.h>

/**
*main - program should print the alphabet in lower && upper case.
*Return: will return 0
*/

int main(void)
{
	char fstChar = 97;
	char lstChar = 122;

	while (fstChar <= lstChar)
	{
		putchar(fstChar);
		fstChar++;
	}

	putchar('\n');

	fstChar = 65;
	lstChar = 90;

	while (fstChar <= lstChar)
	{
		putchar(fstChar);
		fstChar++;
	}

	putchar('\n');

	return (0);
}
