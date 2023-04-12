#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - Creates an array of chars
 *		   initialize it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array.
 *
 * Return: A pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc((size) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
