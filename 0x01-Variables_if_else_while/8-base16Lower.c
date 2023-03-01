#include <stdio.h>

/**
*main - will print base16 in lowercase
*Return: will return 0 if success
*/

int main(void)
{
	int base16 = 0;

	while (base16 < 10)
	{
		putchar(base16 + '0');
		base16++;
	}

	while (base16 > 9 && base16 < 16)
	{
		putchar(base16 + 87);
		base16++;
	}
	putchar('\n');

	return (0);
}
