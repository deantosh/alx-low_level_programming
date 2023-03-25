#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: numbers of time it prints _
 *
 * Return: void
 */

void print_line(int n)
{
	/*declare variable*/
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
