#include <stdio.h>

/**
*main - this program should print the alphabet using putchar
*Return: will return 0
*/

int main(void)
{
	char alpha = 97;

	/* putchar('a'); Using literal character with single quotes */
	/* putchar(97); Using ascii value for characters */

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
