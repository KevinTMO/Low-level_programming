#include "roadmap.h"

/**
*main - will check even fibo values and sum
*Return: will return 0 if success
*/

int main(void)
{
	int prev = 0;
	int next = 1;
	int totalSum = 0;
	int sum = 0;
	int count = 0;

	while (sum < 4000000)
	{
		sum = prev + next;
		prev = next;
		next = sum;
		if (sum < 4000000 && sum % 2 == 0)
		{
			totalSum += sum;
		}
		/* printf("Fibo: %d, %d, %d = %d\n", count, prev, next, totalSum); For verbose */
		count++;
	}
	printf("%d\n", totalSum);
	return (0);
}