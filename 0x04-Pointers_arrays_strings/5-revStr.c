#include "roadmap.h"

/**
*main - will call revStr() to reverse a string passed
*Return: will return 0 if success
*/

int main(void)
{
	char s[10] = "Roadmap";
	char str[20] = "TECHCRASHCOURSE";

	printf("%s\n", s);
	revStr(s);
	printf("%s\n", s);

	printf("%s\n", str);
	revStr(str);
	printf("%s\n", str);

	return (0);
}

/**
*revStr - will take a string and reverse it
*@s: is the string to reverse
*Return: will return nothing (void)
*/

void revStr(char *s)
{
	int index;
	int length = strLen(s);
	char temp;

	/* printf("%d\n", (length < strLen(s)) != 0); */

	printf("The size of s param is: %d\n", strLen(s));

	for (index = 0; index < length; index++, length--)
	{
		temp = s[index];
		/* printf("I'm temp: %c\n", temp); */
		s[index] = s[length];
		s[length] = temp;
		/* printf("I'm s: %s\n", s); */
	}
}
