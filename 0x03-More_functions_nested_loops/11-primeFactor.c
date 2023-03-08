#include "roadmap.h"

/**
*main - will find the largest prime factor of a number 612852475143
*Return: will return 0 if success
*/

int main(void)
{
	long int number = 612852475143;
	/* int number = 12; Testing purposes */
	long int primeFactor = 2;

	while (primeFactor < number)
	{
		if (number % primeFactor == 0)
		{
			number = number / primeFactor;
		}
		else
		{
			primeFactor++;
		}
	}
	printf("Prime Factor: %lu, Prime Number: %lu\n", primeFactor, number);
	return (0);
}
