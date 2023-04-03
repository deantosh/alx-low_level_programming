#include "main.h"

/**
 * strchr - Locates a character in a string.
 * @s: A pointer to the string.
 * @c: A character to locate.
 *
 * Return: A pointer to the first occurrence of character c in s.
 *	   Null of a match not found.
 */


char *_strchr(char *s, char c)
{
	/*declare*/
	int i = 0, j;

	/*get length of string*/
	while (s[i])
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (c == s[j])
		{
			/*reset position of pointer*/
			s += j;
			return (s);
		}
	}
	return ('\0');
}
