#include "roadmap.h"

/**
*_memset - will set the memory of an array
*@ptr: is the pointed address of the array
*@chr: is the character to set in the array
*@size: is the number of values to set in the array
*Return: will return the str (dest)
*/

void _memset(char *ptr, int chr, size_t size)
{
	unsigned int iter;

	for (iter = 0; iter < size; iter++)
	{
		ptr[iter] = chr;
	}
}
