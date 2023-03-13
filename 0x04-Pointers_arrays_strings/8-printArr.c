#include "roadmap.h"

/**
*main - will call printArr() to print an array of integers by n
*Return: will return 0 if success
*/

int main(void)
{
	int array[] = {98, 402, -198, 298, -1024};

	printArr(array, 5);

	return (0);
}

/**
*printArr - will print the content of an arr of ints by n
*@arr: is the array of integers
*@size: is the total of elements to print
*Return: will return nothing (void)
*/

void printArr(int *arr, int size)
{
	int index = 0;

	if (size > 0)
	{
		while (index < size)
		{
			if (index == size - 1)
			{
				printf("%d\n", arr[index]);
			}
			else
			{
				printf("%d, ", arr[index]);
			}
			index++;
		}
	}
}
