#include "roadmap.h"

/**
*mul - will multiply two numbers and return the result
*@num1: first number
*@num2: second number
*Return: will return the result of the equation or 0 if false
*/

int mul(int num1, int num2)
{
	if ((num1 >= 48 && num1 <= 57) || (num1 >= 97 && num1 <= 122))
	{
		return (0);
	}
	else if ((num2 >= 48 && num2 <= 57) || (num2 >= 97 && num2 <= 122))
	{
		return (0);
	}
	return (num1 * num2);
}
