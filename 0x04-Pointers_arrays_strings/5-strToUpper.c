#include "roadmap.h"

/**
*strToUpper - will change all char on a str to uppercase
*@str: string received
*Return: will return a string
*/

char *strToUpper(char *str)
{
	int index = 0;
	int upper = -32;

	if (strLen(str) == 0)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index <= 'z'])
		{
			str[index] += upper;
		}
	}
	return (str);
}
