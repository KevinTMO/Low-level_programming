#include "roadmap.h"

/**
*strLen - will iterate an str to get the len of the string
*@str: the str to iterate and get the len
*Return: will return the len of the string
*/

int strLen(char *str)
{
	int index; /* will iterate inside the str */
	int len = 0; /* will count every time get into forloop */

	for (index = 0; str[index] != '\0'; index++)
	{
		len++;
	}
	len = len - 1;
	return (len);
}
