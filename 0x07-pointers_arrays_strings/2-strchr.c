#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the string.
 * @c: A character to locate.
 *
 * Return: A pointer to the first occurrence of character c in s.
 *	   Null of a match not found.
 */


char *_strchr(char *s, char c)
{
	/*declare*/
	int i = 0, len = 0;

	/*get length of string*/
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			/*reset position of pointer*/
			s += i;
			return (s);
		}
	}
	return ('\0');
}
