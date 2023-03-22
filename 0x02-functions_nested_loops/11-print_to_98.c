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
			/*compute for the 2 digit*/
			j = n / 10;
			k = n % 10;

			_putchar(j + '0');
			_putchar(i + '0');
		}
	}
	else
	{
		/*compute the digits on the three number*/
		j = n / 100;
		k = n / 10;
		l = n % 10;

		for (i = n; i > 98; i--)
		{
			/*compute the digits on the three number*/
			j = n / 100;
			k = n / 10;
			l = n % 10;

 			_putchar(j + '0');
			_putchar(k + '0');
			_putchar(l + '0');
		}
	}
	_putchar('\n');
}
