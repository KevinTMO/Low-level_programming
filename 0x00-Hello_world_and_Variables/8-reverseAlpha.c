#include <stdio.h>

/**
*main - print the alphabet in reverse followed by a newline
*Return: will return 0
*/

int main(void)
{
	char fstChar = 122;

	while (fstChar >= 97)
	{
		putchar(fstChar);
		fstChar--;
	}

	putchar('\n');

	return (0);
}
