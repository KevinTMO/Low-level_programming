#include "roadmap.h"

/**
*capStr - will capitalize all words in a str
*@str: the str to capitalize
*Return: will return nothing (void)
*/

char *capStr(char *str)
{
	int idx = 0;
	int upLow = 32;
	int lstCh;
	char sp = ' ';

	if (strLen(str) == 0)
	{
		return (NULL);
	}
	if (idx == 0 && str[idx] != sp)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] -= upLow;
		}
	}
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		lstCh = idx - 1;
		if (str[idx] == '\n' || str[idx] == '\t')
		{
			continue;
		}
		else if (str[idx] != sp)
		{
			if (str[lstCh] == '\n' || str[lstCh] == '\t' || str[lstCh] == sp)
			{
				if (str[idx] >= 'a' && str[idx] <= 'z')
				{
					str[idx] -= upLow;
				}
			}
		}
		else if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] += upLow;
		}
	}
	return (str);
}
