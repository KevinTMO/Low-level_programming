#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - this function will evaluate if n is positive or negative or zero
*Return: will return 0 if success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}

	else
		printf("%d is zero\n", n);

	return (0);
}
