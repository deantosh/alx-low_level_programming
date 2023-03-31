#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 - if a match, 15 - if s1 is greater than s2
 *	   and -15 - if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		/*move pointers*/
		s1++;
		s2++;
	}
	/*return diff in pointers*/
	return (*s1 - *s2);
}
