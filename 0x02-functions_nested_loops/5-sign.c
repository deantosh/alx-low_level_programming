#include "main.h"

/**
 * print_sign - display the sign of a number
 * @n: number used
 *
 * Return: 1 and + (>0) and 0 and 0 ( == 0) and  -1 and -  (<0)
 */

int print_sign(int n)
{
	/*return value variable*/
	int r_value;

	if (n > 0)
	{
		/*assign value to return value*/
		r_value = 1;

		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(r_value + '0');
		_putchar('\n');
	}
	else if (n == 0)
	{
		/*assign value to return value*/
		r_value = 0;

		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(r_value + '0');
		_putchar('\n');
	}
	else
	{
		/*assign value to return value*/
		r_value = -1;

		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar(r_value + '0');
		_putchar('\n');
	}
}
