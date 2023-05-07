/*
 * File: 5-flips_bit.c
 * Author: Deantosh M Daiddoh
 */

#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Gets the number of bits needed to flip
 *	       to change from on number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, bit_val;
	unsigned long int comp;

	/*compare bit strings of two numbers*/
	comp = n ^ m;

	while (comp > 0)
	{
		/*get the lsb*/
		bit_val = comp & 1;

		if (bit_val == 1)
			count++;

		comp >>= 1;
	}
	return (count);
}
