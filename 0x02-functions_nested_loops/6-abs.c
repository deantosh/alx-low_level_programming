#include "main.h"

/**
 *_abs - computes absolute value of an integer
 *@num: The number to be computed
 *
 *Return: Always 0 (Success)
 */

int _abs(int num)
{
	/*declare a variable*/
	int abs_value;

	if (num < 0)
	{
		abs_value = num * -1;
		return (abs_value);
	}
	else
	{
		return (num);
	}
}
