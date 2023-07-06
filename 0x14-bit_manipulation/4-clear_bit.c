#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the decimal number.
 * @index: The index of bit to set to 0.
 *
 * Return: 1 (success) and -1 (fails).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	/*assign max bit size - 64*/
	size = sizeof(unsigned long int) * 8;

	if (index < size)
	{
		*n = *n & (~(1 << index));
		return (1);
	}
	else
		return (-1);
}
