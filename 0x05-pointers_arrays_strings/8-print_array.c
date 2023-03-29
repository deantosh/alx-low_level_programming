#include "main.h"
#include <stdio.h>

/**
 * print_array - print n  elelmens of an array of integers
 * @a: array to print
 * @n: number of elements in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	/*declare variable*/
	int i;

	/*iterate over the array*/
	for (i =  0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n-1)
			continue;
		printf(", ");
	}
	printf("\n");
}
