#include "roadmap.h"
#include <stdbool.h>

/**
*isUpper - will validate if the value received is an uppercase
*@c: is the value received to parse
*Return: will return 1 if is an uppercase or 0 if not
*/

int isUpper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (true);
	}
	return (false);
}

/*
*2nd alternative solution
*
*int isUpper(char c)
*{
*	return (c >= 65 && c <= 90);
*}
*
*/
