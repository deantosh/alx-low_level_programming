#include "main.h"

/**
 * factorial - Gets the factorial of a given number.
 * @n: The number to computed.
 *
 * Return: The factorial of the number (n > 0).
 *	   -1 if (n < 0).
 *	   1 if (n == 0).
 */

int factorial(int n)
{
	/*declare variable*/
	int num = 1;

	if (n > 0)
	{
		num *= n;
		num *= factorial(n - 1);
	}
	else if (n < 0)
	{
		num = -1;
	}
	else
	{
		num = 1;
	}
	return (num);
}
