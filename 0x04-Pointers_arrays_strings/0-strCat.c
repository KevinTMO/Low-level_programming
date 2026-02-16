#include "roadmap.h"

/**
*strCat - will concatenate two strings and return the result
*@dest: destinated string
*@src: source string
*Return: will a concatenated dest & src string into dest
*/

char *strCat(char *dest, char *src)
{
	int index;
	int sIndex = strLen(dest);

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[sIndex] = src[index];
		sIndex++;
	}

	/*dest[sIndex] = '\0';*/

	return (dest);
}
