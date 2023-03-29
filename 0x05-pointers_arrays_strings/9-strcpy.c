#include "main.h"

/**
 * *_strcpy  -  copies the string pointed to by src, including the null byte to
 *		to buffer pointed by dest.
 * @src: pointer that points to string
 * @dest: pointer that points to buffer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	/*initialize variable*/
	int i = 0;

	/*copy all the characters to dest*/
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/*add null type*/
	dest += '\0';

	return (dest);
}
