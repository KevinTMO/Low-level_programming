#include "roadmap.h"

/**
*strNcpy - will copy a string and return the result
*@dest: is the destinated string to return
*@src: is the source string to copy
*@nBytes: is the max bytes to copy from src
*Return: will return the dest string
*/

char *strNcpy(char *dest, char *src, int nBytes)
{
	int index = 0;
	int len = strLen(dest);

	/* Cleaning dest for trash residue */

	while (index < len)
	{
		dest[index] = '\0';
		index++;
	}

	for (index = 0; src[index] != '\0' && index < nBytes; index++)
	{
		dest[index] = src[index];
	}

	if (dest[index - 1] != '\n')
	{
		dest[index] = '\n';
	}

	return (dest);
}
