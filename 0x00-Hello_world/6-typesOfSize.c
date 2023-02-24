#include <stdio.h>

/**
*main - will print the size of differente data types
*Return: should return 0 if success
*/

int main(void)
{
	printf("The size of char data type is: %lu\n", sizeof(char));
	printf("The size of int data type is: %lu\n", sizeof(int));
	printf("The size of long int data type is: %lu\n", sizeof(long int));
	printf("The size of long long int data type is: %lu\n", sizeof
	(long long int));
	printf("The size of float data type is: %lu\n", sizeof(float));
	return (0);
}
