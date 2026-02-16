#include "roadmap.h"

/**
*main - a program to print two arguments
*@argc: the number of arguments passed into the program
*@argv: a pointer to the first argument
*Return: will return 0 if success
*/

int main(int argc, char **argv)
{

	argc -= 1;

	if (argc < 2)
	{
		return (0);
	}

	int firstD = atoi(argv[1]);
	int secD = atoi(argv[2]);
	int result = firstD * secD;

	if (argc == 2)
	{
		printf("The result of your multiplication is: %d\n", result);
		return (0);
	}

	for (argc = 3; argv[argc] != NULL; argc++)
	{
		result *= atoi(argv[argc]);
		printf("The result of your multiplication is: %d\n", result);
	}
/*
*Code to multiply only two digits
*	argc -= 1;
*
*	if (argc != 2)
*	{
*		return (0);
*	}
*
*	int firstD = atoi(argv[1]);
*	int SecD = atoi(argv[2]);
*	int result = firstD * SecD;
*
*	printf("The result of %d by %d is: %d\n", firstD, SecD, result);
*
*	return (0);
*/
}
