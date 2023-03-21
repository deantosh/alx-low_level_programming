#include "main.h"

/**
 * print_alphabet_x10 - creates alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	/*declare variables*/
	int i;

	for (i = 0; i <= 10; i++)
	{
		/*call user defined function to print alphabets*/
		print_alphabet();
	}
	_putchar('\n');
}
