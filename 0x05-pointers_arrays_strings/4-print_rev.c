#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	/*get length of string*/
	while (s[i] != '\0')
	{
		i++;
	}

	/*set index*/
	i = i - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
