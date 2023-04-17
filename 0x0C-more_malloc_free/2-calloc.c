/*
 * File: 2-calloc.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"
#include <stdlib.h>

/**
* *_calloc - Allocates memory for an array of nmeb elelments of
*	      size bytes.
* @nmemb: The number of memory bytes to allocate.
* @size: The size of the byte type.
*
* Return: A pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int index, byte_size = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	byte_size = nmemb * size;

	mem = malloc(byte_size);
	if (mem == NULL)
		return (NULL);

	for (index = 0; index < byte_size; index++)
		mem[index] = 0;

	return (mem);
}
