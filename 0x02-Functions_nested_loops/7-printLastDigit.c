#include "roadmap.h"

/**
*main - will call printLastDigit to return the last digit of a number
*Return: will return 0 if success
*/

int main(void)
{
	printLastDigit(98);
	printLastDigit(-1024);
	printLastDigit(0);
	return (0);
}

/**
*printLastDigit - will print the last digit of a number received
*@number: is the value received to extract the last digit
*Return: will return nothing (void)
*/

void printLastDigit(int number)
{
	if (number < 0)
	{
		number = number * -1;
		number = number % 10;
		_putchar(number + '0');
		_putchar('\n');
	}
	else
	{
		number = number % 10;
		_putchar(number + '0');
		_putchar('\n');
	}
}
