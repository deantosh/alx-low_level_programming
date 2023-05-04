/*
 * File: 0-binary_to_uint.c
 * Author: Deantosh M Daiddoh
 */

#include <stdlib.h>

/**
 * binary_to_uint - Converts from binary to unsigned integer.
 * @b: A pointer to the bit string.
 *
 * Return: The unsigned integer (success) & 0 (fails).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, count = 0;
	int index = 0, b_len = 0;

	if (b == NULL)
		return (0);

	/*get length of string*/
	while (b[index] != '\0')
	{
		b_len++;
		index++;
	}

	while (b_len--)
	{
		if (b[b_len] < 48 || b[b_len] > 49)
			return (0);

		if (b[b_len] == 49)
		{
			sum += 1 << count;
		}
		count++;
	}
	return (sum);
}
