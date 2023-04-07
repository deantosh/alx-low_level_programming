#include "main.h"

/**
 * _pow_recursion - Gets the value of x raised to the power of y.
 * @x: The number to compute its power.
 * @y: The power of the number.
 *
 * Return: Value of x if y >= 0 and -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	/*declare variable*/
	int num = 1;

	if (y > 0)
	{
		num *= x;
		num *= _pow_recursion(x, (y - 1));
	}
	else if (y < 0)
	{
		num = -1;
	}
	else
	{
		num = 1;
	}
	return (num);
}
