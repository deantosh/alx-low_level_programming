#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *s);

/**
 * word_len - Gets the length of a word in a string.
 * @str: A pointer to the string.
 *
 * Return: The length of the word.
 */
/*get length of word*/
int word_len(char *str)
{
	int len = 0, index = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - Gets the number of words that form the string.
 * @s: A pointer to the string.
 *
 * Return: The number of words.
 */
int count_words(char *s)
{
	int index = 0, str_len = 0;
	int words = 0;

	/*get length of string*/
	while (*(s + index))
	{
		str_len++;
		index++;
	}

	for (index = 0; index < str_len; index++)
	{
		if (*(s + index) != ' ')
		{
			words++;
			index += word_len(s + index);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings
 *		If str = NULL, str = "", or the function fails - Null.
 */
char **strtow(char *str)
{
	char **s;
	int words, letters, w, l;
	int index = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			while (w >= 0)
			{
				free(s[w]);
				w--;
			}
			free(s);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			s[w][l] = str[index];
			index++;
		}
		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}
