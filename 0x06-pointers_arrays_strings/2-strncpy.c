#include "main.h"

/**
 * strncpy - copies at most n bytes from string src into dest
 * @dest: The buffer to store string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*declare variables*/
	int i = 0, src_len = 0;

	/*get length of src*/
	while (src[i++])
	{
		src_len++;
	}

	/*copy src at the beginning of dest*/
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	/*add null byte after src string*/
	for (i = src_len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
