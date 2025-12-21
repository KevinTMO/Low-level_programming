#include <stdio.h>

/**
*main - Print all posible single digits of base10
*Return: will return 0
*/

int main(void)
{
	int oneDigit = 0;

	printf("Base 10 digits: ");

	while (oneDigit <= 9)
	{
		printf("%d", oneDigit);
		oneDigit++;
	}

	putchar('\n');

	return (0);
}
