#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return:  void
 */

void print_square(int size)
{
	/*declare variable*/
	int i, j;

	/*create the square rows*/
	for (i = 0; i < size; i++)
	{
		/*create the square columns*/
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	/*if size is 0 or less*/
	if (size <= 0)
	{
		_putchar('\n');
	}
}
