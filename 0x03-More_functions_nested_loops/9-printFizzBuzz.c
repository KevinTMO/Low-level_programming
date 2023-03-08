#include "roadmap.h"

/**
*main - will call printFizzBuzz() to print numbers from 0 to 100
*And replace multiples of 3 and 5 with fizz or Buzz
*Return: will return nothing (void)
*/

int main(void)
{
	printFizzBuzz();
	return (0);
}

/**
*printFizzBuzz - will print numbers from 0 to 100
*And replace multiples of 3 and 5 with fizz buzz
*Return: will return nothing (void)
*/

void printFizzBuzz(void)
{
	int digit;

	for (digit = 1; digit <= 100; digit++)
	{
		if (digit % 3 == 0 && digit % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (digit % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (digit % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", digit);
	}
	putchar('\n');
}
