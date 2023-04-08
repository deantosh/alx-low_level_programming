#include "main.h"

int str_len(char *str);
int check_palindrome(char *start, char *end);

/**
 * str_len - Gets the length of the string.
 * @str: The string.
 *
 * Return: Length of the string.
 */

int str_len(char *str)
{
	/*declare variable*/
	int len = 0;

	if (*str)
	{
		len += 1;
		len += str_len(str + 1);
	}
	return (len);
}


/**
 * check_palindrome - Checks if a string is a palindrome.
 * @start: A pointer that points at the start of the string.
 * @end: A pointer that points at the end of the string.
 *
 * Return:  1 - if string is palindrome and 0 - if it is not a palindrome.
 */

int check_palindrome(char *start, char *end)
{
	if (*start != *end)
		return (0);

	if (*start == '\0')
		return (1);

	return (check_palindrome((start + 1), (end - 1)));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to the string.
 *
 * Return: 1 - if palindrome and 0 - if not.
 */

int is_palindrome(char *s)
{
	/*declare variable*/
	int len;

	/*get length of string*/
	len = str_len(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, (s + len - 1)));
}
