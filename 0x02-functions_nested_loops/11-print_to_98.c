#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: The starting number
 *
 *Return: void
 */

void print_to_98(int n)
{
	/*declare variable*/
	int i, j, k, l;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
				_putchar(i + '0');

			else
				/*compute for the 2 digit*/
				j = i / 10;
				k = i % 10;

				_putchar(j + '0');
				_putchar(k + '0');

				if (i == 98)
					break;

			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i => 98; i--)
		{
			if (i <= 99)
				j = i / 10;
				k = i % 10;

				_putchar(j + '0');
				_putchar(k + '0');

			else
				/*compute the digits on the three number*/
				j = i / 100;
				k = (i - (j*100)) / 10;
				l = i % 10;

				_putchar(j + '0');
				_putchar(k + '0');
				_putchar(l + '0');

			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
