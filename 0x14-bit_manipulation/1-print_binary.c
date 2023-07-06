#include "main.h"
#include <stdio.h>

/**
 * print_binary - Converts integer to binary and prints them.
 * @n: The number to convert.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/*recursive function*/
	get_bits(n);
}

/**
 * get_bits - Gets the bits equivalent of the number.
 * @num: The number to convert.
 *
 * Return: void.
 */
void get_bits(unsigned long int num)
{
	int bit_value;

	if (num < 1)
		return;

	get_bits(num >> 1); /*divides the num by 2*/

	bit_value = num & 1; /*gets the bit value 0 or 1*/
	if (bit_value)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
