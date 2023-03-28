#include "main.h"

/**
 * puts_half -  prints half of a string, if number of characters is odd
 *		print the last n characters of the string.
 *
 * @str: string to modify
 *
 * Return: void
 */

void puts_half(char *str)
{
	/*declare variables*/
	int i = 0;
	int len = 0;
	int m;

	/*find length of str*/
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		m = len / 2;
	}
	else
	{
		m = (len + 1) / 2;
	}

	/*print half the characters*/
	for (i = m; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
