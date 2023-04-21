/*
 * File: 1-print_numbers.c
 * Author: Deantosh M Daiddoh
 */

#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  Prints the numbers.
 * @separator:  This is the separator that separates the numbers.
 * @n: The number of arguments.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL || index != (n - 1))
			printf("%s", separator);

		if (index != (n - 1))
			printf(" ");
	}
	printf("\n");
	va_end(ap);
}
