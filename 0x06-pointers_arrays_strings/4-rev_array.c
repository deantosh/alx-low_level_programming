#include "main.h"

/**
 * reverse_array - reverces  the content of an array of integers.
 * @a: A pointer to the array of integer.
 * @n: The number of array elements.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	/*declare variable*/
	int i = 0;
	int *start_ptr, *end_ptr, num;

	/*set the beginning of pointer*/
	start_ptr = a;

	/*set the end pointer*/
	end_ptr = a + n - 1;

	/*swap integers from start and end*/
	for (i = 0; i < n / 2; i++)
	{
		/*swap numbers*/
		num = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = num;

		/*update pointer position*/
		start_ptr++;
		end_ptr--;
	}
}
