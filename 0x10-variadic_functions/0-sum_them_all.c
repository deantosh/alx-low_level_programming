/*
 * File: 0-sum_them_all.c
 * Author: Deantosh M Daiddoh
 */

#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Finds the sum of all its integer.
 * @n: The number of integers.
 * @...: The ellipsis for the indefinite number of arguments.
 *
 *  Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
