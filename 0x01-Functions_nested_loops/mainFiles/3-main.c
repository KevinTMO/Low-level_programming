#include "roadmap.h"

/**
*main - will call checkLower to validate if a char is lower or not
*Return: will return 0 if success
*/

int main(void)
{
        int r; /* store return value */

        r = checkLower('R');
        __putchar(r + '0');
        __putchar('\n');
        r = checkLower('o');
        __putchar(r + '0');
        __putchar('\n');
        r = checkLower(108);
        __putchar(r + '0');
        __putchar('\n');
        r = checkLower(68);
        __putchar(r + '0');
        __putchar('\n');
		r = checkLower(183);
        __putchar(r + '0');
        __putchar('\n');
		r = checkLower('\n');
        __putchar(r + '0');
        __putchar('\n');
		r = checkLower(122);
        __putchar(r + '0');
        __putchar('\n');
        return (0);
}
