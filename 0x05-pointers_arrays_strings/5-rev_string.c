#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 *Return: void
 */

void rev_string(char *s)
{
	/*declare variable*/
	int i, len;
	char *start_ptr, *end_ptr, ch;

	/*get length of string*/
	while (s[len] != '\0')
	{
		len++;
	}

	/*set the beginning of pointer*/
	start_ptr = s;

	/*set the end pointer*/
	end_ptr = s + len - 1;

	/*swap characters from start and end*/
	for (i = 0; i < (len - 1) / 2; i++)
	{
		/*swap characters*/
		ch = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = ch;

		/*update pointer position*/
		start_ptr++;
		end_ptr--;
	}
}
