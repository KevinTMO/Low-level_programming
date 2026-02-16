#include "roadmap.h"

/**
*strCmp - will compare two strings
*@s1: first string
*@s2: second string
*Return: will return -1 if not equal or 0 if equal
*/

int strCmp(char *s1, char *s2)
{
	int index;
	/*int sIndex;*/

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
	}

	/*
	*
	***TOO REDUDAN
	*
	*for (index = 0, sIndex = 0; s1[index] != '\0' && s2[sIndex] != '\0'; index++)
	*{
	*	if (s1[index] > s2[sIndex])
	*	{
	*		return (s1[index] - s2[sIndex]);
	*	}
	*	else if (s2[sIndex] > s1[index])
	*	{
	*		return (s1[index] - s2[sIndex]);
	*	}
	*	else
	*	{
	*		sIndex++;
	*	}
	*}
	*/

	return (0);
}
