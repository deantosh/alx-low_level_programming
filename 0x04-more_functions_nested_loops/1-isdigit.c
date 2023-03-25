#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: number to be checked
 *
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	/*variable - return value*/
	int val;

	if (c >= 48 && c <= 57)
	{
		val = 1;
	}
	else
	{
		val = 0;
	}
	return (val);
}
