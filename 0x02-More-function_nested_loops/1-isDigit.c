#include "roadmap.h"

/**
*isDigit - will check if the value received is a digit or not
*@n: is the value received to parse
*Return: will return 1 if true or 0 if false
*/

int isDigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}

/*
*2nd alternative solution
*
*int isDigit(int n)
*{
*	return (n >= 48 && n <= 57)
*}
*/
