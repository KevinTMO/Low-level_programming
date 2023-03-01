#include <stdio.h>

/**
*main - will print all possible combinations of single digits
*Return: will return 0 if success
*/

int main(void)
{
	int num0 = 0;

	while (num0 <= 9)
	{
		putchar(num0 + '0');
		if (num0 < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num0++;
	}
	putchar('\n');
	return (0);
}
