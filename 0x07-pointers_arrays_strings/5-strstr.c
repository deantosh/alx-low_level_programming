#include "main.h"

/**
 * *_strstr - Finds ths first occurrence of the substring needle
 *	      in the string haystack.The terminating nullbytes are not compared.
 *
 * @haystack: A pointer to the initial string used for the match.
 * @needle: A pointer to the subtsring used as a pattern for the match.
 *
 * Return: A pointer to the beginning of the located substring.
 *	   Null if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	/*declare variable*/
	int i = 0, j = 0;
	int pos;
	char *ptr_pos;

	while (haystack[i])
	{
		while (needle[j])
		{
			/*pos of haystack on first match*/
			pos = i;

			if (haystack[pos + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			/*set pointer position*/
			ptr_pos = haystack + pos;

			return (ptr_pos);
		}
		i++;
	}
	return ('\0');
}
