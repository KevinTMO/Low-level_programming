#include "roadmap.h"

/**
*printArr - will print an arr of intergers by n time
*@arr: array of integers
*@n: numbers to print
*Return: will return nothing
*/

void printArr(int *arr, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index + 1 == n)
		{
			printf("%d", arr[index]);
		}
		else
		{
			printf("%d ", arr[index]);
		}
	}
	putchar('\n');
}
