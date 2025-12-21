#include <stdio.h>

/**
*main - should print all pos single digits combination
* Conditions:
* - Only can use putchar
* - All digits should by separated by comma followed by space
* - Can't have comma & space at the end.
* - Not allowed to use char data type
*Return: will return 0
*/

int main(void)
{
	int oneDigit = 48;

	while (oneDigit <= 57)
	{
		if (oneDigit == 57)
		{
			putchar(oneDigit);
			oneDigit++;
		}
		else
		{
			putchar(oneDigit);
			putchar(',');
			putchar(' ');
		}
		oneDigit++;
	}

	putchar('\n');
	return (0);
}
