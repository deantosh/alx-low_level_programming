#include "main.h"

/**
 * print_alphabet_x10 - creates alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	/*declare variables*/
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		/*print alphabets*/
	  	for (ch='a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
