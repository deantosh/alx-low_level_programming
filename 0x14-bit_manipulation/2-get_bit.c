#include "main.h"
#include <stdio.h>

/**
 * get_bit - Gets the bit value at a given index.
 * @n: The number to convert to binary.
 * @index: The index of the bit to return.
 *
 * Return: The value of bit and (-1) if it fails.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_len = 0;

	while (n)
	{
		if (bit_len == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}

		/*get quotient*/
		n = n / 2;
		bit_len++;
	}

	if (index > bit_len && index < 63)
		return (0);

	return (-1);
}
