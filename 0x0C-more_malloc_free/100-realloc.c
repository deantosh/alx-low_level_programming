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
	char *new_ptr;
	unsigned int index;
	char *old_ptr;

	/*pointer type casting*/
	old_ptr = ptr;

	if (new_size == old_size)
		return (old_ptr);

	if (new_size == 0 && old_ptr != NULL)
	{
		free(old_ptr);
		return (NULL);
	}
	if (old_ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (index = 0; index < old_size && index < new_size; index++)
	{
		new_ptr[index] = old_ptr[index];
	}

	free(old_ptr);
	return (new_ptr);
}
