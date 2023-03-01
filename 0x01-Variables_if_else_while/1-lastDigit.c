#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - will print the last digit of a number
*Return: will return 0 if success
*/

int main(void)
{
        int n;
        int lastDigit;

        /* This clode below is just whatever */

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        /* Your code goes below this line */

        lastDigit = n % 10;

        printf("The last digit of %d is %d", n, lastDigit);

        if (lastDigit > 5)
        {
                printf(" and is greater than 5\n");
        }

        else if (lastDigit != 0 && lastDigit < 6)
        {
                printf(" and is less than 6 and not 0\n");
        }

        else
                printf(" and is zero\n");

        return (0);