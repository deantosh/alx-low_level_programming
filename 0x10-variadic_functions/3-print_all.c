/*
 * File: 3-print_all.c
 * Author: Deantosh M Daiddoh
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - Prints anything.
 * @format:  A pointer to the list of types of the arguments.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separator = "";
	f_s s_list[] = {
		{"c", print_a_char},
		{"i", print_an_integer},
		{"f", print_a_float},
		{"s", print_a_string}
	};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == s_list[j].sym[0])
			{
				s_list[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_a_char - Prints a character.
 * @separator:  A pointer to the separator used to separate char
 *		from other arguments when printing.
 * @args: The list  of arguments to print.
 *
 * Return: void
 */
void print_a_char(char *separator, va_list args)
{
	char ch = va_arg(args, int);

	printf("%s%c", separator, ch);
}

/**
 * print_an_integer - Prints an integer.
 * @separator:  A pointer to the separator used to separate char
 *		from other arguments when printing.
 * @args: The list  of arguments to print.
 *
 * Return: void
 */
void print_an_integer(char *separator, va_list args)
{
	int num = va_arg(args, int);

	printf("%s%d", separator, num);
}

/**
 * print_a_float - Prints a floating number.
 * @separator:  A pointer to the separator used to separate char
 *		from other arguments when printing.
 * @args: The list  of arguments to print.
 *
 * Return: void
 */
void print_a_float(char *separator, va_list args)
{
	double num = va_arg(args, double);

	printf("%s%f", separator, num);
}

/**
 * print_a_string - Prints a string.
 * @separator:  A pointer to the separator used to separate char
 *		from other arguments when printing.
 * @args: The list  of arguments to print.
 *
 * Return: void
 */
void print_a_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, str);
}
