/*
 * File: 0-binary_to_uint.c
 * Author: Deantosh M Daiddoh
 */

#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts from binary to unsigned integer.
 * @b: A pointer to the bit string.
 *
 * Return: The unsigned integer (success) & 0 (fails).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, count = 0;
	int b_len = 0;

	if (b == NULL)
		return (0);

	/*get length of the bit string*/
	b_len = get_length(b);

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

/**
 * get_length - Gets the length of the binary array.
 * @str: A pointer to the binary number.
 *
 * Return: The length of the array.
 */
int get_length(const char *str)
{
	int index = 0, len = 0;

	while (str[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}
