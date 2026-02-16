#include "roadmap.h"

/**
*revArr - will reverse an arr of integers
*@arrInt - the arr of integers
*@size - the size of the arr
*Return: will return nothing (void)
*/

void revArr(int *arrInt, int size)
{
	int index;
	int sIndex = size - 1;
	int holder[size];

	for (index = 0; index < size && sIndex >= 0; index++, sIndex--)
	{
		holder[index] = arrInt[sIndex];
	}

	for (sIndex = 0; sIndex < size; sIndex++)
	{
		arrInt[sIndex] = holder[sIndex];
	}
	arrInt[sIndex] = '\0';
}
