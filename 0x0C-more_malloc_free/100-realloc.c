/*
 * File: 100-realloc.c
 * Author: Deantosh M Daiddoh
 */

#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the allocated memory.
 * @old_size: Size of the old memory size.
 * @new_size: Size of the new memory size
 *
 * Return: A pointer to the allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*free ptr*/
	free(ptr);

	if (new_size == 0 && ptr == NULL)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
