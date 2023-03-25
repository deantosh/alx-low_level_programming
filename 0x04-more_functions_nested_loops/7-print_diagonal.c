#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ is repeated
 *
 * Return: void
 */

void print_diagonal(int n)
{
	/*declare variable*/
	int i, j;
	int num = 0;

	for (i = 1; i <= n; i++)
	{
		/*numbers of spaces is added*/
		for (j = 1; j < i; j++)
		{
			/*stop space from being added on the first \*/
			if (i == num)
			{
				_putchar(' ');
			}
		}

		/*equivalent ASCII value for '\'*/
		_putchar(92);
		_putchar('\n');

		/*set the value of num for the next condition*/
		num = i + 1;
	}

	/*add a new line if n is les than 1*/
	if (n <= 0)
	{
		_putchar('\n');
	}
}
