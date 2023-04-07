#include "main.h"

int find_sqrt(int num, int root);

/**
 * find_sqrt - Fins the square root of a number.
 * @num: The number to compute.
 * @root: The square root of the number.
 *
 * Return: root - if number has a square root.
 *	   -1 - if number has no square root.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	/*if not root increment root by 1*/
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute.
 *
 * Return: Natural square root of a number
 *	   -1 if number does not have a square root.
 */

int _sqrt_recursion(int n)
{
	/*declare a variable*/
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, root));
}
