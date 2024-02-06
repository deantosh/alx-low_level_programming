/*
 * Author: Deantosh Daiddoh
 * File: 1-binary.c
 */

#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The array size.
 * @value: The value to search.
 *
 * Return: index of the value (success) or -1 (fails).
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	/*vaidate input*/
	if (!array || size == 0)
		return (-1);

	/*find the value -- using a reccursive function*/
	index = find_value(array, 0, size - 1, value);

	return (index);
}

/**
 * find_value - divides array into two and compare values.
 * @array: The array to divide.
 * @low: Start index of sub array.
 * @high: The last index of the sub array.
 * @value: The value to search.
 *
 * Return: index at the center of the array.
 */
int find_value(int *array, int low, int high, int value)
{
	int m = 0, idx, i;

	/*condition to terminate loop*/
	if (low > high)
		return (-1);

	/*print the sub array*/
	printf("Search in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	/*find the index at center of the array*/
	m = floor((low + high) / 2);

	/*if value is found*/
	if (value == array[m])
		return (m);

	/*compare it with the value to search*/
	if (value > array[m])
		idx = find_value(array, m + 1, high, value);
	else
		idx = find_value(array, low, m - 1, value);

	return (idx);
}
