#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	/*declare variables*/
	int num;

	for (num = 0; num < 10; num++)
	{
		/*convert to char*/
		_putchar(num + '0');
	}
	_putchar('\n');
}
