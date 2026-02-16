#include "roadmap.h"

/**
*strDup - will return a pointer to a duplicate string
*@str: the str to duplicate
*Return: will return a string 
*/

/*
*PSEUDO
*1. Get the lenght of the str received - check
*2. Use malloc to allocate a memory to a new str with the len
*by the char type
*3. Iterate and duplicate
*/

char *strDup(char *str)
{
	int index;
	int len = strLen(str);
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}

	newStr = malloc(sizeof(char) * len);

	for (index = 0; index < len; index++)
	{
		newStr[index] = str[index];
	}

	return (newStr);
}
