#include "main.h"

/**
 * print_most_numbers - prints numbers (0 - 9 but not 2 or 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	/*declare variables*/
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
			continue;
		_putchar(num);
	}
	_putchar('\n');
}
