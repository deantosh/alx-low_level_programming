#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts from binary to unsigned integer.
 * @b: A pointer to the bit string.
 *
 * Return: The unsigned integer (success) & 0 (fails).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, count = 0, len = 0;

	if (b == NULL)
		return (0);

	/*get length of string*/
	len = get_length(b);

	while (len > 0)
	{
		if (b[len - 1] < 48 || b[len - 1] > 49)
			return (0);

		if (b[len - 1] == 49)
		{
			sum += 1 << count;
		}
		count++;
		len--;
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
