#include "roadmap.h"

/**
*main - will call revStr() to reverse a string passed
*Return: will return 0 if success
*/

int main(void)
{
	char *str; /* a var that store a string */

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	revStr(str);
	return (0);
}

/**
*revStr - will reverse the string passed
*@str: is the str to reverse
*Return: will return nothing (void)
*/

void revStr(char *str)
{
	int index;

	for (index = strLen(str) - 1; str[index] >= 0; index--)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}