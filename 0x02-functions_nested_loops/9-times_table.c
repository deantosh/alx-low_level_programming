#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	/*declare varriables*/
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			/*declare a variable*/
			int = results;

			/*compute*/
			results = a * b;

			_putchar(results + '0');
			_putchar(',');
			_putchar(' ');
		}
		putchar('\n');
	}

}
