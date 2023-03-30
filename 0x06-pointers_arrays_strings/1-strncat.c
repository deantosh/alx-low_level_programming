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
	/*declare variable*/
	int m;

	/*initialize variable*/
	int i = 0;
	int dest_len = 0;

	/*get dest length include null byte*/
	while (dest[i++])
	{
		dest_len++;
	}

	/*append src characters to dest including null byte*/
	for (m = 0; m < n; m++)
	{
		/*rewrite value of dest null byte*/
		/*continue appending the src characters*/
		dest[dest_len++] = src[m];
	}
	return (dest);
}
