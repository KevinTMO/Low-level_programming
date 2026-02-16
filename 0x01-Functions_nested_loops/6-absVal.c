#include "roadmap.h"

/**
*absVal - get the absolute number of the value received
*@n: the value received. Should be a number.
*Return: the absolute value of the received number
*/

int absVal(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
