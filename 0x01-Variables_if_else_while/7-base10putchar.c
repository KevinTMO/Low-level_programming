#include <stdio.h>

/**
*main - will print numbers of base10 using putchar
*Return: will return 0 if success
*/

int main(void)
{
	int num0;

	for (num0 = 0; num0 <= 9; num0++)
	{
		putchar(num0 + '0');
	}
	putchar('\n');
	return (0);
}
