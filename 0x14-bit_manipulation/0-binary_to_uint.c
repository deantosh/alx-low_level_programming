/*
 * File: 0-binary_to_uint.c
 * Author: Deantosh M Daiddoh
 */

#include <stddef.h>
#include <math.h>
#include <stdlib.h>
/**
 * binary_to_uint - Converts from binary to unsigned integer.
 * @b: A pointer to the bit string.
 *
 * Return: The unsigned integer (success) & 0 (fails).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, val;
	int index = 0, s_len = 0;
	int len;

	if (b == NULL)
		return (0);

	/*get length of string*/
	while (b[index] != '\0')
	{
		s_len++;
		index++;
	}

	len = s_len;
	for (index = 0; index < s_len; index++)
	{
		if (b[index] < 48 || b[index] > 49)
			return (0);

		val = b[index] - '0';
		num += val * pow(2, (len - 1));
		len--;
	}
	return (num);
}
