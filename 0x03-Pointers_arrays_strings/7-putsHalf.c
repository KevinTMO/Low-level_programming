#include "roadmap.h"

/**
*putsHalf - will print the half of a string
*@str: the string to print
*Return: will return nothing
*/

void putsHalf(char *str)
{
	int len = strLen(str);
	int maxLen = len;
	int firstHalf;

	if (len % 2 == 0)
	{
		firstHalf = len / 2;
	}
	else if (len % 2 == 1)
	{
		len = (len - 1) / 2;
		firstHalf = len;
	}
	
	/*printf("Len after being divided by two: %d\n", len);*/
	
	for (len = 0; len < firstHalf ; len++) /* First half */
	{
		/*printf("This is len: %d\n", len);*/
		_putchar(str[len]);
	}
	
	_putchar('\n');

	if (maxLen % 2 == 1)
	{
		len += 1;
	}

	for (; len < maxLen; len++)
	{
		_putchar(str[len]);
	}
	
	_putchar('\n');

	/*printf("This is the lenght of the string: %d\n", len);*/
}
