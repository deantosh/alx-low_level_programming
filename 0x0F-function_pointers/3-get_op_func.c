/*
 * File: 3-get_op_func.c
 * Author: Deantosh M Daiddoh
 */

#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Selects the correct function to perform the
 *		 operation asked by the user.
 * @s: The operator used in the operation.
 *
 * Return: A pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
{
	int index = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (index < 5)
	{
		if (strcmp(s, ops[index].op) == 0)
		{
			return (ops[index].f);
		}
		index++;
	}
	return (0);
}
