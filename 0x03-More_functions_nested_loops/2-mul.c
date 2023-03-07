#include "roadmap.h"

/**
*main - will call mul() to multiply two integers and return the value
*Return: will return 0 if success
*/

int main(void)
{
	printf("The result of 98 * 1024 is: %d\n", mul(98, 1024));
	printf("The result of -402 * 4096 is: %d\n", mul(-402, 4096));
	printf("The result of -12 * -5 is: %d\n", mul(-12, -5));
	return (0);
}

/**
*mul - will multiply two integers and return the result
*@a: first integer
*@b: second integer
*Return: will return the result of the equation
*/

int mul(int a, int b)
{
	return (a * b);
}
