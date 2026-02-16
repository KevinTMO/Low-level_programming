#include "roadmap.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);

	printf("This is the firs ocurrence found: %c\n", *t);
	printf("This is the rest of the string after ocurrence: %s\n", t);
	return (0);
}
