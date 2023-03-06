#include "roadmap.h"

/**
*main - will print numbers in format 00:00 till 23:59
*Return: will return 0 if success
*/

int main(void)
{
	int firstD;
	int secondD;
	int thirdD;
	int fourthD;

	for (firstD = 0; firstD <= 2; firstD++)
	{
		for (secondD = 0; secondD <= 9; secondD++)
		{
			for (thirdD = 0; thirdD <= 5; thirdD++)
			{
				for (fourthD = 0; fourthD <= 9; fourthD++)
				{
					if (firstD != 2 || secondD < 4)
					{
						_putchar(firstD + '0');
						_putchar(secondD + '0');
						_putchar(':');
						_putchar(thirdD + '0');
						_putchar(fourthD + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}
