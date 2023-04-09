#include "main.h"

/**
 * wildcmp - Compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return:  1 - if string is identical and 0 - if not identical.
 */

int wildcmp(char *s1, char *s2)
{
	int result;

	if (*s1 == *s2)
		result = 1;

	if (*s1 != *s2 && *s2 == '*')
		result = 1;

	if (*s1 != *s2)
		result = 0;

	if (*s1 == '\0')
		return (result);

	return (wildcmp(s1 + 1, s2 + 1));
}
