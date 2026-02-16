#include "roadmap.h"

/**
*main - is going to print the name of the program
*@argc: the number of arguments passed to the program
*@argv: the pointer to the first element of the dimensional array
*Return: will return 0 if success
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("The name of the program is: %s\n", *argv + 2);

	return (0);
}
