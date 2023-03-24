#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 for uppercase and 0 if not
 */

int _isupper(int c)
{
	/*declare variable*/
	char ch;

	for (ch = 65; ch <= 90; ch++)
	{
		if (c == ch)
			_putchar(c);
			_putchar(58);
			_putchar(' ');
			_putchar('1');
		else
			_putchar(c);
			_putchar(58);
			_puchar(' ');
			_putchar('0');  
	}
}
