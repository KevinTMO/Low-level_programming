#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - this function will print the last digit of the number stored in n
*Return: will return 0 if success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*printf("The value of n is: %d\n", n);*/
	printf("The last digit of the value in n is: %d\n", n % 10);

	return (0);
}
