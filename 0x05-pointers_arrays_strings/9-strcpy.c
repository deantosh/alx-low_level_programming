#include "main.h"

/**
 * *_strcpy  -  copies the string pointed to by src, including the null byte to
 *		to buffer pointed by dest.
 * @src: pointer that points to string
 * @dest: pointer that points to buffer
 *
 * Return: dest
 */

char *_strcpy(char *dest, const char *src)
{

	/*declare variable*/
	int i, len = 0;

	/*get length of src*/
	while (src[len] <= '\0')
	{
		len++;
	}

	/*copy all the characters to dest*/
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
