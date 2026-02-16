#include "roadmap.h"

/**
*checkAlpha - will check if the value received is a alphabetic
*@c: the value received for validation
*Return: will return if 1 alphabetic (true) or else 0 (false)
*/

int checkAlpha(int ch)
{
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
	{
		return (1);
	}
	return (0);
}
