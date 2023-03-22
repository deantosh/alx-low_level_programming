#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	/*declare varriables*/
	int a, b, c, d, e;

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
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}

}
