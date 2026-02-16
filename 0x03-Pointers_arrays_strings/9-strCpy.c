#include "roadmap.h"

/**
*strCpy - will copy a string to another variable
*@dest: is the string to copy the src
*@src: is the src string to copy into dest
*Return: will return the source string
*/

char *strCpy(char *dest, char *src)
{
	int index = 0;
	/*int len = strLen(src);*/
	int destLen = strLen(dest);

	/*printf("This is the len of the src: %d\n", len);*/
	/*printf("This is the len of the dest: %d\n", destLen);*/

	if (destLen > 0)
	{
		/*printf("getting inside of if\n");*/
		while (index < destLen)
		{
			dest[index] = '\0';
			index++;
		}
	}

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
