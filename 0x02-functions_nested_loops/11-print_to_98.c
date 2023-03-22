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
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(n + '0');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
