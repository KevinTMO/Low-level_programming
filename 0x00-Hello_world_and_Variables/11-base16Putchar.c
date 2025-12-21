#include <stdio.h>

/**
*main - print base16 only using putchar in lowercase
*Return: will return 0
*/

int main(void)
{
	int base16 = 48;

	while (base16 <= 57)
	{
		putchar(base16);
		base16++;
	}

	if (base16 == 58)
	{
		base16 += 39;
	}

	while (base16 <= 102)
	{
		putchar(base16);
		base16++;
	}

	putchar('\n');

	return (0);
}
