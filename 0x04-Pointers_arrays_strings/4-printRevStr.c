#include "roadmap.h"

/**
*main - will call printRevStr() to reverse a string passed
*Return: will return 0 if success
*/

int main(void)
{
	char *str; /* a var that store a string */

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	printRevStr(str);
	return (0);
}

/**
*printRevStr - will reverse the string passed
*@str: is the str to reverse
*Return: will return nothing (void)
*/

void printRevStr(char *str)
{
	int index;

	for (index = strLen(str) - 1; str[index] >= 0; index--)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}