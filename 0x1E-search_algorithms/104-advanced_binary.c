/*
 * Author: Deantosh Daiddoh
 * File: 103-exponential.c
 */

#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array and returns the
 *		first occurence of the value using the binary search.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in an array.
 * @value: The value to search.
 *
 * Return: index of the value (success) or -1 fails.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	idx = advanced_binary_search(array, 0, size - 1, value);

	return (idx);
}

/**
 * advanced_binary_search - Searches for the index of the value recursively,
 *			by dividing the data set into two and comparing the
 *			median value with the target value.
 * @array: The array to search.
 * @low: The index where the search starts.
 * @high: The index where the search ends.
 * @value: The target value to search for.
 *
 * Return: index (if found) or -1 (not found).
 */
int advanced_binary_search(int *array, int low, int high, int value)
{
	int i, mid;

	/*condition to terminate loop*/
	if (low > high)
		return (-1);

	/*print array*/
	printf("Searching in array:");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(",");
	}
	printf("\n");

	/*Get the median index*/
	mid = floor((low + high) / 2);

	/*Return if */
	if (value == array[mid])
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_search(array, low, mid, value));
	}
	else if (value < array[mid])
	{
		return (advanced_binary_search(array, low, mid - 1, value));
	}
	else
	{
		return (advanced_binary_search(array, mid + 1, high, value));
	}
	/*not found*/
	return (-1);
}
