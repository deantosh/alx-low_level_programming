#include "main.h"

/**
 * _puts - prints string followed by a newline, to stdout
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str++;
	}
	_putchar('\n');
}
