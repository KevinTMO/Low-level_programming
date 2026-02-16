#include "roadmap.h"

/**
*createArray - will create an array of chars and allocate mem using malloc
*@amount: the amount of characters inside the array 
*@ch: the character to fill the array with
*Return: return the pointer 
*/

char *createArray(int amount, char ch)
{
	char *arr;
	int index;

	arr = malloc(sizeof(char) * amount);

	if (arr == NULL)
	{
		printf("Failed\n");
		exit(0);
	}

	for (index = 0; index < amount; index++)
	{
		arr[index] = ch;
	}
	free(arr);
	return (arr);
}
