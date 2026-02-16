#include "roadmap.h"

/**
*_memcpy - will copy the memory block of another string
*@dest: is the string to copy the memory from src 
*@src: is the source for dest
*@size: is the lenght of the elements to copy
*Return: will return nothing (void)
*/

void _memcpy(char *dest, const char *src, size_t size)
{
	unsigned int index;

	for (index = 0; index < size && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
}
