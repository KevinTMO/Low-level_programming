#include "roadmap.h"

/**
*strConcat - will concatenate two strings into a new one
*@str1: first str
*@str2: second str
*Return: will return a concatenate str
*/

char *strConcat(char *str1, char *str2)
{
	int len1 = strLen(str1);
	int len2 = strLen(str2);
	int sumLen = len1 + len2 + 1;
	int index = 0;
	int sindex = 0;
	char *newStr = NULL;

	if (str1 == NULL || str2 == NULL)
	{
		return (NULL);
	}

	newStr = malloc(sizeof(char) * (sumLen));

	if (newStr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < len1; index++)
	{
		newStr[index] =  str1[index];
	}
	for (sindex = 0; sindex < len2; index++, sindex++)
	{
		newStr[index] = str2[sindex];
	}

	newStr[index] = '\0';

	return (newStr);
}
