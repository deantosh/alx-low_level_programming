/*
 * Author: Deantosh Daiddoh
 * File: 100-jump.c
 */

#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *		using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The size of the array.
 * @value: The value to search.
 *
 * Return: index of value (success) or -1 (fails).
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j, step = sqrt(size);

	/*vaidate input -- ensure not empty*/
	if (!array)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		/*print values checked after every step*/
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/*if greater than value*/
		if (array[i + step] >= value || i + step > size)
		{
			/*print block where values is found*/
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
			/*perform a linear search on block*/
			for (j = i; j < size; j++)
			{
				/*print values checked*/
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	/*if not found*/
	return (-1);
}
