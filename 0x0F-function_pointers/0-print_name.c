/*
 * File: 0-print_name.c
 * Author: Deantosh M Daiddoh
 */

#include "function_pointers.h"

/**
 * print_name  Prints a name.
 * @name: The name to print.
 * @f: A pointer to a function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
