#include "roadmap.h"

/**
*swapInts - will swap the values of the two arguments
*@a: memory address of first variable
*@b: memory address of second variable
*Return: will return nothing (void)
*/

void swapInts(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}
