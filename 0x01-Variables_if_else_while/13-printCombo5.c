#include <stdio.h>

/**
*main - will print all possible combinations of two two-digit numbers
*Return: will return 0 if success
*/

int main(void)
{
	int firstN;
	int secondN;
	int thirdN;
	int fourthN;

	for (firstN = 0; firstN <= 9; firstN++)
	{
		for (secondN = 0; secondN <= 9; secondN++)
		{
			for (thirdN = firstN; thirdN <= 9; thirdN++)
			{
				for (fourthN = secondN + 1; fourthN <= 9; fourthN++)
				{
					putchar(firstN + '0');
					putchar(secondN + '0');	
					putchar(' ');
					putchar(thirdN + '0');
					putchar(fourthN + '0');
					
					if (firstN != 9 || secondN != 8
					|| thirdN != 9 || fourthN != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				fourthN = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
