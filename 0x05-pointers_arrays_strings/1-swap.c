#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	/*declare variable to store value of a*/
	int val;

	/*Assign value to val*/
	val = *a;

	/*swap values*/
	*a = *b;
	*b = val;
}
