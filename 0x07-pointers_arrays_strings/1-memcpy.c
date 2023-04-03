#include "main.h"

/**
 * memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: A pointer to the buffer to be copied.
 * @src: A pointer to the buffer to copy.
 * @n: The number off bytes to copy.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/*copy src to dest*/
		*(dest + i) = *(src + i);
	}
	return (dest);
}
