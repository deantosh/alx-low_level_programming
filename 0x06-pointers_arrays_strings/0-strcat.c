#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: first string
 *@src: string to append to the first string
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/*declare variable*/
	int n;

	/*initialize variable*/
	int i = 0;
	int dest_len = 0;

	/*get dest length include null byte*/
	while (dest[i++])
	{
		dest_len++;
	}

	/*append src characters to dest including null byte*/
	for (n = 0; src[n]; n++)
	{
		/*rewrite value of dest null byte*/
		/*continue appending the src characters*/
		dest[dest_len++] = src[n];
	}
	return (dest);
}
