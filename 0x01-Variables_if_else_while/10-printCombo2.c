#include <stdio.h>

/**
*main - will print all possible combinations of two digits
*Return: will return 0 if success
*/

int main(void)
{
	int firstN;
	int secondN;

	for (firstN = 0; firstN <= 9; firstN++)
	{
		for (secondN = 0; secondN <= 9; secondN++)
		{
			putchar(firstN + '0');
			putchar(secondN + '0');

			if (firstN != 9 || secondN != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
