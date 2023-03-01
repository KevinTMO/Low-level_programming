#include <stdio.h>

/**
*main - will print all possible combinations of three digits
*should print only the smallest combination of three digits
*Return: will return 0 if success
*/

int main(void)
{
	int firstN;
	int secondN;
	int thirdN;

	for (firstN = 0; firstN <= 9; firstN++)
	{
		for (secondN = 0; secondN <= 9; secondN++)
		{
			for (thirdN = 0; thirdN <= 9; thirdN++)
			{
				if (firstN < secondN && secondN < thirdN)
				{
					putchar(firstN + '0');
					putchar(secondN + '0');	
					putchar(thirdN + '0');

					if (firstN != 7 || secondN != 8 || thirdN != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
