#include "roadmap.h"

/**
*main - will call strCpy() to copy the string passed and return it
*Return: will return 0 if success
*/

int main(void)
{
	char s[98];
	char *cpy;

	cpy = strCpy(s, "First, solve the problem. Then, write the code\n");

	printf("%s", s);
	printf("%s", cpy);

	return (0);
}

/**
*strCpy - will copy the string passed and return the result
*@src: the string passed to copy
*@dest: the destination to copy the string
*Return: will return the copy of the string
*/

char *strCpy(char *dest, char *src)
{
	int srcIdx, destIdx;

	for (destIdx = 0, srcIdx = 0; src[srcIdx] != '\0'; srcIdx++, destIdx++)
	{
		dest[destIdx] = src[srcIdx];
	}
	return (dest);
}
