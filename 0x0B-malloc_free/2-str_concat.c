#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two string by allocating a newly
 *		allocated space in memory which contains the
 *		contents of s1 followed by the contents of s2.
 * @s1: The first string to copy to new string.
 * @s2: The second string to copy to the new string.
 *
 * Return: A pointer to the concatenated string.
 *	   NULL if memory allocation failed.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len, s2_len;
	char *s3;

	s1_len = 0;
	i = 0;
	while (s1[i])
	{
		s1_len++;
		i++;
	}
	s2_len = 0;
	i = 0;
	while (s2[i])
	{
		s2_len++;
		i++;
	}

	s3 = malloc(sizeof(char) * (s1_len + s2_len));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		s3[s1_len + i] = s2[i];
	}
	return (s3);
}
