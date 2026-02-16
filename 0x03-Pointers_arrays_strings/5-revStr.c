#include "roadmap.h"

/**
*revStr - will reverse a str
*@str: is the string received
*Return: will return nothing (void)
*/

void revStr(char *str)
{
	int maxLen = strLen(str) - 1; /* maxLen es 6 - 1 = 5 */
	int index;
	char holder;

	for (index = 0; str[index] < str[maxLen]; index++, maxLen--)
	{
		holder = str[index];
		str[index] = str[maxLen];
		str[maxLen] = holder;
	}
}
