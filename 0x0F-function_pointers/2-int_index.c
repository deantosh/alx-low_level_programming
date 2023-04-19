/*
 * File: 2-int_index.c
 * Author: Deantosh M Daiddoh
 */

#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer and returns the index of the
 *	       first element.
 * @array:  A pointer to the integer array.
 * @size: The size of the array.
 * @cmp: A function pointer to the function that evaluates the integer.
 *
 * Return: index of the integer if match found and -1 if not match found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
	  return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
