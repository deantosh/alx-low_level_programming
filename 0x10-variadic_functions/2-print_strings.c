/*
 * File: 2-print_strings.c
 * Author: Deantosh M Daiddoh
 */

#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: The separator that separates the strings.
 * @n: The number of strings passed as arguments.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	const char *str;
	va_list ap;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
