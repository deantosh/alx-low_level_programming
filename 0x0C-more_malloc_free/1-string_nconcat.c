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
	unsigned int i = 0, j = 0, k = 0, bytes = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		bytes = i + j;
	else
		bytes = i + n;

	s3 = malloc(sizeof(char) * bytes + 1);
	if (s3 == NULL)
		return (NULL);
	j = 0;
	while (k < bytes)
	{
		if (k <= i)
			s3[k] = s1[k];

		if (k >= i)
		{
			s3[k] = s2[j];
			j++;
		}
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
