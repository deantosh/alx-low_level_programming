#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *		    of a square matrix integers.
 *
 * @a: A pointer to an array.
 * @size: Size of the array.
 *
 * Return: sum1 - sum of leading diagonal.
 *	   sum2 - sum of counter diagonal.
 */

void print_diagsums(int *a, int size)
{
	/*declare variables*/
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	/*set pointer to the last row*/
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	/*print the sum of diagonals*/
	printf("%d, %d\n", sum1, sum2);
}
