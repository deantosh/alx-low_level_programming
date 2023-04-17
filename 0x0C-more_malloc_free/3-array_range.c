/*
 * File: 3-array_range.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers, the array should
 *		  all the values from min(included) to max(included).
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *range_number;
	int range_size, index;

	range_size = max - min;

	if (min > max)
		return (NULL);

	range_number = malloc(sizeof(int) * (range_size + 1));
	if (range_number == NULL)
		return (NULL);
	for (index = 0; index < range_size + 1; index++)
	{
		range_number[index] = min;
		min++;
	}
	return (range_number);
}
