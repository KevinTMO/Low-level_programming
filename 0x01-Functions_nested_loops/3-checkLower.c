#include "roadmap.h"

/**
*checkLower - will check if the char received is lower or not
*@ch: a value received to validate for lowercases
*Return: will return 1 if true (success) or 0 if false (failure)
*/

int checkLower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	return (0);
}
