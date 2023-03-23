#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: The number of times table to be created
 *
 * Return: void
 */

void print_times_table(int n)
{
	/*declare variables*/
	int a, b, c, d, e;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				/*compute*/
				c = a * b;

				if (c > 9)
				{
					d = c % 10;
					e = c / 10;

					_putchar(44);
					_putchar(32);
					_putchar(e + '0');
					_putchar(d + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}

					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}

	}
}
