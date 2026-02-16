#include "roadmap.h"

/**
*strNcat - will concatenate two string until n bytes
*@dest: destinated string
*@src: source string
*@maxIdx: is the n bytes to concatenate
*Return: will return the destintated string
*/

char *strNcat(char *dest, char *src, int maxIdx)
{
	int index;
	int sIndex = strLen(dest);

	for (index = 0; src[index] != '\0' && index < maxIdx; index++)
	{
		dest[sIndex] = src[index];
		sIndex++;
	}

	if (dest[sIndex - 1] != '\n')
	{
		dest[sIndex] = '\n';
	}
	else
	{
		dest[sIndex] = '\0';
	}

	return (dest);
}
