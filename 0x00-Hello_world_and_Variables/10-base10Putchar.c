#include <stdio.h>

/**
*main - print all base10 single digits using only putchar
*Return: will return 0
*/

int main(void)
{
	int oneDigit = 48;

	printf("Base 10 digits using putchar: ");

	while (oneDigit <= 57)
	{
		putchar(oneDigit);
		oneDigit++;
	}

	putchar('\n');

	return (0);
}
