#include "main.h"

/**
 * print_alphabet - display alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	/*declare variable*/
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
