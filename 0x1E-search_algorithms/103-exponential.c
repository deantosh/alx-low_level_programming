/*
 * Author: Deantosh Daiddoh
 * File: 103-exponential.c
 */

#include "search_algos.h"

/**
 * exponential_search -  Searches for a value in a sorted array of
 *			integers using the exponential search algorithm.
 * @array: A pointer to the first element of the arry to search in.
 * @size: The number of the elements in an array.
 * @value: The value to search for.
 *
 * Return: index of the first occurence of the value (success) or -1(fails).
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array)
		return (-1);

	/*Check: first element*/
	if (array[0] == value)
		return (0);

	for (i = 1; i < size; i *= 2)
	{
		/*set low/high values of the range*/
		low = i;
		high = i * 2;

		/*Check, if approaching upper limit*/
		if (high >= size)
			high = size - 1;

		/*Print value checked*/
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[high] > value)
		{
			/*Print: value found*/
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);

			/*Perform: binary search*/
			return (find_value(array, (int)low, (int)high, value));
		}
	}
	/*If not found*/
	if (value > array[size - 1])
	{
		/*Print: value found*/
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		/*Perform: binary search*/
		return (find_value(array, (int)low, (int)high, value));
	}
	return (-1);
}

/**
 * find_value - divides array into two and search through the subset.
 * @array: The array to divide.
 * @low: Start index of sub array.
 * @high: The last index of the sub array.
 * @value: The value to search.
 *
 * Return: index of the specified value (success) or -1 (fails).
 */
int find_value(int *array, int low, int high, int value)
{
	int m = 0, idx;

	/*condition to terminate loop*/
	if (low > high)
		return (-1);

	/*print the sub array*/
	print_subarray(array, low, high);

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

/**
 * print_subarray - Prints the subarray with the value.
 * @array: The array to print.
 * @low: The start of the subarray.
 * @high: The end of the subarray.
 *
 * Return: void.
 */
void print_subarray(int *array, int low, int high)
{
	int i;

	/*Print the sub array with the value*/
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
