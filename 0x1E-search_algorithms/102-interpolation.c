/*
 * Author: Deantosh Daiddoh
 * File: 102-interpolation.c
 */

#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 *		of integers using the Interpolation search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: index of the value (success) or -1 (fails).
 */
int interpolation_search(int *array, size_t size, int value)
{
	int idx;

	/*validate input - not empty case*/
	if (!array || size == 0)
		return (-1);

	/*recursive function*/
	idx = interpolate_value(array, 0, size - 1, value);

	return (idx);
}


/**
 * interpolate_value - recursive function to find value after
 *		each interpolation.
 * @array: The array to search in.
 * @low: The start index of the array.
 * @high: The last index of the array.
 * @value: The value to search for.
 *
 * Return: index of value (success) or -1 (fails).
 */
int interpolate_value(int *array, int low, int high, int value)
{
	int pos;

	/*find the interpolated position*/
	pos = low + (
	((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	/*exit condition for the loop*/
	if (pos > high)
	{
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}

	/*value checked*/
	printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

	/*compare value with pos value*/
	if (array[pos] == value)
		return (pos);
	else if (value < array[pos])
		return (interpolate_value(array, low, pos - 1, value));
	else
		return (interpolate_value(array, pos + 1, high, value));
}
