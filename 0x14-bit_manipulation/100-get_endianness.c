/*
 * File: 100-get_endianness.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"

/**
 * get_endianness - Check the endianness of the machine.
 *
 * Return: 1 (little endian) and 0 (Big endian).
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	/*check if first value is 1 or 0*/
	if (*c)
		return (1);
	else
		return (0);
}
