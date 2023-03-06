#include "roadmap.h"

/**
*main - will print the first 50 fibonacci numbers starting from 1,2
*Return: will return 0 if success
*/

int main(void)
{
	long int prev = 1;
	long int next = 2;
	int count = 2; /* starts by 2 since it already got 1,2 of fibo numbers */

	/*printf("%d\n%d\n", prev, next);*/

	while (count <= 51)
	{
		printf("Count: %d, %ld, %ld\n", count, prev, next);
		prev += next;
		next += prev;
		count += 2; /* count by 2 since it starts with 1,2 fibo numbers */
	}
	printf("%d\n", count); /* will print the total count of fibonacci numbers */
}
