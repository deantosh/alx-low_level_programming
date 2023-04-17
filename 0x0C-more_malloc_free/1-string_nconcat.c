/*
 * File: 1-string_nconcat.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings by copying all of s1
 *		     and the first n bytes of s2.
 * @s1: The first string to copy.
 * @s2: The second string.
 * @n: The n bytes of s2 to copy.
 *
 * Return: A pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, bytes;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		s1_len++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s2_len++;
		i++;
	}
	if (n >= s2_len)
		bytes = s1_len + s2_len;
	else
		bytes = s1_len + n;

	s3 = malloc(sizeof(char) * (bytes + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		s3[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		s3[j] = s2[i];
		j++;
	}
	s3[j] = '\0';
	return (s3);
}

