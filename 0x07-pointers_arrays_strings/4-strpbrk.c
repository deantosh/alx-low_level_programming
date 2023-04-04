#include "main.h"

/**
 * _strpbrk - Searches for a string for any of a set of bytes.
 * @s: A pointer to a string to search.
 * @accept: A pointer to a pattern to find.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept.
 *	   Null if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	/*declare variable*/
	int i = 0, j = 0;
	int s_len = 0;
	int accept_len = 0;

	/*get length of s*/
	while (s[i])
	{
		s_len++;
		i++;
	}

	/*get length of accept*/
	while (accept[j])
	{
		accept_len++;
		j++;
	}

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				/*set pointer to start from this index*/
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
}
