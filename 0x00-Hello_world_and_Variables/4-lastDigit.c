#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - should return the last digit of N with some extra details.
*Return: will return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes below this line */

	/* TEST LINE FOR N VALUE */
	/* printf("The value of N is: %d\n", n); */

	printf("The value N is %d and the last digit is %d", n, n % 10);

	if (n % 10 > 5)
	{
		printf(" and is greater than 5.\n");
	}
	else if (n % 10 != 0 && (n % 10 < 6))
	{
		printf(" and is less than 6 and not 0.\n");
	}
	else
	{
		printf(" and is zero.\n");
	}

	return (0);
}
