#include "main.h"

/**
 * puts2 - print every other character of a string, starting with the
 *	first character.
 *
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	/*declare variable*/
	int len = 0;
	int i = 0;

	/*get length of str*/
	while (str[len] != '\0')
	{
		len++;
	}

	/*skip 1 number for each iteration*/
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
