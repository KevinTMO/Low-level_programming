#include "roadmap.h"

/**
*main - will sum and print all natural numbers below 1024
*Return: will return 0 if sucess
*/

int main(void)
{
	int num;
	int result;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			result += num;
		}
	}
	printf("%d\n", result);
}
