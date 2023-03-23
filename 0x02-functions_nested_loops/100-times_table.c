#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: The number of times table to be created
 *
 * Return: void
 */

void print_times_table(int n)
{
	/*declare varriables*/
	int a, b, c, d, e;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			/*compute*/
			c = a * b;

			/*If n > 15 or n < 0 do not print*/
			if (n < 0 || n > 15)
					break;


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
