/*
 * File: 1-array_iterator.c
 * Author: Deantosh M Daiddoh
 */

#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *		    on eacch element of the array.
 * @array: A pointer to the array.
 * @size: The size of the array.
 * @action: A function pointer to the function to print array
 *	     elements.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
