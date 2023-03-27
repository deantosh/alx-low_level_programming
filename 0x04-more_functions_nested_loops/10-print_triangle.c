#include "main.h"

/**
 * print_triangle - prints triangle followed by a new line.
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	/*declare variable*/
	int i, j, k, spaces, hash_ch;

	/*set number of spaces to be reduced on each iteration*/
	spaces = size - 1;

	/*set number of '#' for each iteration*/
	hash_ch = size - spaces;

	/*create height of the triangle*/
	for (i = 0; i < size; i++)
	{
		/*create the spaces for each ro*/
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}

		/*create '#' for the triangle*/
		for (k = 0; k < hash_ch; k++)
		{
			_putchar('#');
		}
		_putchar('\n');

		/*reset new values for the next iteration*/
		spaces = spaces - 1;
		hash_ch = hash_ch + 1;
	}
	/*if size of triangle is 0*/
	if (size <= 0)
	{
	  _putchar('\n');
	}
}
