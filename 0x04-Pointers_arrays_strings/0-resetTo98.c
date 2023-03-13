#include "roadmap.h"

/**
*main - will call resetTo98 to reset the value of n by sending the addrs
*Return: will return 0 if success
*/

int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	resetTo98(&n);
	printf("n = %d\n", n);
	return (0);
}

/**
*resetTo98 - will reset the value of the parameter passed using pointers
*@n: is addrs of the parameter to reset to 98
*Return: will return nothing (void)
*/

void resetTo98(int *n)
{
	int *ptr = n;

	*ptr = 98;
}
