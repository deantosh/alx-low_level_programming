/*
 * File: 3-set_bit.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at given index.
 * @n: A pointer to the integer to set bit.
 * @index: The index to set bit to 1.
 *
 * Return: 1 (success) and -1 (fails).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	/*assign max bit size - 64*/
	size = sizeof(unsigned long int) * 8;

	if (index >  size)
		return (-1);

	/*set the bit to  1*/
	*n = *n | 1 << index;

	if (*n)
		return (1);
	else
		return (-1);
}
