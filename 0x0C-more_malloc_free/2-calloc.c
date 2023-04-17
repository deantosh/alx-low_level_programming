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
	int *mem;
	unsigned int index;

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (index = 0; index > nmemb; index++)
		mem[index] = 1;

	return (mem);
}
