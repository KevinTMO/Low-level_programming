#include "roadmap.h"

/**
*main - will print the arguments passed into the program
*@argc: the number of args passed into the program
*@argv: a pointer to the first arg
*Return: will return 0 if success
*/


int main(int argc, char **argv)
{
	for (argc = 1; argv[argc] != NULL; argc++)
	{
		printf("%d: %s\n", argc, argv[argc]);
	}

	return (0);
}

/*
*int main(int argc, char **argv)
*{
*	argv += 1;
*	for (argc = 1; *argv != NULL; argc++)
*	{
*		printf("%d: %s\n", argc, *argv);
*		argv++;
*		}
*
*	return (0);
*}
*/
