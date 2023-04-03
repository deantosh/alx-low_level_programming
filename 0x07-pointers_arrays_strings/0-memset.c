#include "main.h"

/**
 * _memset - Fills the first, n bytes of the memory area pointed
 *	    to by s with the constant byte b.
 *
 * @s: A pointer to the buffer.
 * @b: Constant byte to fill buffer.
 * @n: The number of times to copy the constant byte.
 *
 * Return: A pointer to the filled  buffer (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/*copy the constant b to buffer*/
		*(s + i) = b;
	}
	return (s);
}
