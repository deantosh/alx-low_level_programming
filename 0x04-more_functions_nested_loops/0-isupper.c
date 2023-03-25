#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 for uppercase and 0 if not
 */

int _isupper(int c)
{
	/*variable to hold return value*/
	int val;

	if (c >= 65 && c <= 90)
	{
		/*set value*/
		val = 1;
	}
	else
	{
		/*set value*/
		val = 0;
	}
	return (val);
}
