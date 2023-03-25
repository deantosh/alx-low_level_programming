#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	/*declare variables*/
	int count, num, digit1, digit2;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				digit1 = num / 10;
				_putchar(digit1 + '0');
			}

			digit2 = num % 10;
			_putchar(digit2 + '0');
		}
		_putchar('\n');
	}
}
