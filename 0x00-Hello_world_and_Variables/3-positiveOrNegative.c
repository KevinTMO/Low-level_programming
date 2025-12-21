#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - this program should identify if a number of a variable is pos or neg
*Return: will return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes below this line */

	/* A line check the value of Var N */
	/*printf("This is the value of the variable n: %d\n", n);*/

	/* PSEUDO CODE */
	/*
	*Problema: Identificar si el valor de N es negativo o positivo
	*Herramientas: Stamenents (declaraciones) Posibles: If / else
	*
	*SI (VALOR es POSITIVO)
	*	IMPRIMIR el string ES POSITIVO
	*SI NO
	*	IMPRIMIR el string ES NEGATIVO
	*/

	if (n > 0)
	{
		printf("The value of N %d is positive\n", n);
	}
	else
	{
		printf("The value of N %d is negative\n", n);
	}

	return (0);
}
