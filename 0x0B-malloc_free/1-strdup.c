#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Duplicates a string and return a pointer
 * @str: A pointer to a string.
 *
 * Return: A pointer to the duplicated string,
 *	   NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	/*declare variable*/
	int i;
	int len;
	char *a;

	/*intialize variable*/
	i = 0;
	len = 0;

	/*get length of string*/
	while (str[i])
	{
		len++;
		i++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	/*allocate memory to new string*/
	a = malloc((len + 1) * sizeof(char));

	/*if memory allocation fails*/
	if (a == NULL)
	{
		return (NULL);
	}

	/*copy string to new pointer*/
	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}
