#include "main.h"

/**
 *_strncat - concatenates first string with n byte of second string
 *@dest: first string
 *@src: string to append to the first string
 *@n: number of src character to append to dest
 *
 *Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/*initialize variable*/
	int i = 0;
	int dest_len = 0;

	/*get dest length include null byte*/
	while (dest[i])
	{
		dest_len++;
		i++;
	}

	/*append src characters only if n > 0*/
	for (i = 0; src[i] && i < n; i++)
	{
		/*rewrite value of dest null byte when appending*/
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}
