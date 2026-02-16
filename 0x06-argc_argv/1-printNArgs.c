#include "roadmap.h"

/**
*main - will print the args passed into the program
*@argc: the number of arguments passed to the program
*@argv:	the pointer to the first arg
*Return: will return 0 if success
*/

int main(int argc, char **argv __attribute__((unused)))
{
	printf("The number of args passed into the program are: %d\n", argc - 1);

	return (0);
}
